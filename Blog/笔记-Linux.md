# Socket技术详解
https://blog.csdn.net/yizhiniu_xuyw/article/details/114083796

## TCP通信流程分析

server:

1. socket()     创建socket
2. bind()       绑定服务器地址结构
3. listen()     设置监听上限
4. accept()     阻塞监听客户端连接
5. read(fd)     读socket获取客户端数据
6. toupper()    小--大写
7. write(fd)
8. close();

client:

1. socket()     创建socket
2. connect()    与服务器建立连接
3. write()      写数据到socket
4. read()       读转换后的数据
5. 显示读取结果
6. close()

## 服务器socket()练习

步骤：

1. 建立socket，返回文件描述符
2. 用bind绑定IP地址和端口号port
3. listen设置**最大同时并发连接数**，这个数字并不是tcp最大建立连接数
4. 读/写 read/write
5. close

```cpp
#include <ctype.h>
#include <sys/socket.h>
#include <arpa/inet.h>

#define SERV_PORT 9527

int main() 
{
    int lfd = 0;// 后期与服务器建立连接的文件描述符
    int cfd = 0;// 进行数据通信的文件描述符

    int ret, i;// read返回读到的字节数，循环因子i
    char buf[BUFSIZ];// BUFSIZ这个宏值是4096

    struct sockaddr_in serv_addr, clit_addr;// 初始化服务器地址结构和客户端地址结构
    socklen_t clit_addr_len;

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERV_PORT);// 将Host字节顺序转换为Network字节顺序
    serv_addr.sin_addr.s_addr = htonl(INADDR_ANY);// INADDR_ANY这个宏表示本地的任意IP地址

    lfd = socket(AF_INET, SOCK_STREAM, 0);
    // 下面检查一下返回值lfd是否出错
    if (lfd == -1) sys_err("socket error");


    bind(lfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));

    listen(lfd, 128);

    clit_addr_len = sizeof(clit_addr);
    cfd = accept(lfd, (struct sockaddr *)&clit_addr, &clit_addr_len);
        // 下面检查一下返回值lfd是否出错
    if (cfd == -1) sys_err("accept error");

    while (1) {
        ret = read(cfd, buf, sizeof(buf));
        write(STDOUT_FILENO, buf, ret);

        for (i = 0; i < ret; i++) 
            buf[i] = toupper(buf[i]);

        write(cfd, buf, ret);
    }

    close(lfd);
    close(cfd);

    return 0;
}
```

## 客户端socket()练习

1. 客户端创建用于通信的socket
2. 借由隐式绑定
```cpp
#include <sys/socket.h>
#include <arpa/inet.h>

int main() 
{
    int cfd = 0;// 进行数据通信的文件描述符
    int counter = 10;
    char buf[BUFSIZ];
    
    struct sockaddr_in serv_addr;// 服务器地址结构

    serv_addr.sin_family = AF_INET;
    serv_addr.sin_port = htons(SERV_PORT);// 将Host字节顺序转换为Network字节顺序
    inet_pton(AF_INET, "127.0.0.1", &serv_addr.sin_addr.s_addr);

    cfd = socket(AF_INET, SOCK_STREAM, 0);
    if (cfd == -1) 
        sys_err("socket error");
    
    int ret = conncet(cfd, (struct sockaddr *)&serv_addr, sizeof(serv_addr));
    if (ret != 0)
        sys_err("connect err");

    while (--counter) {
        write(cfd, "hello\n", 6);
        ret = read(cfd, buf, sizeof(buf));
        write(STDOUT_FILENO, buf, ret);
        sleep(1);
    }
    
    close(cfd);

    return 0;
```

