//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//void test01()
//{
//	//1.包含头文件
//
//	//2.创建流对象
//	ifstream ifs;
//
//	//3.打开文件，并判断文件是否打开成功
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "文件打开失败" << endl;
//		return;
//	}
//	//4.读数据
//
//	////第一种方式：一行行读取
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//
//	////第二种方式：利用getline，行获取getline(char* str, stream_size)
//	char buf[1024] = { 0 };
//	while ( ifs.getline(buf, sizeof(buf)) ) {
//		cout << buf << endl;
//	}
//
//	//第三种方式：
//	string buf;
//	while ( getline(ifs, buf) ) {
//	//此处的getline是全局函数
//		cout << buf << endl;
//	}
//
//	//第四种方式：
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		//EOF是end of file
//		//一个一个字符读取，直到读到文件尾
//		cout << c;
//	}
//
//
//	//5.关闭文件
//	ifs.close();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}