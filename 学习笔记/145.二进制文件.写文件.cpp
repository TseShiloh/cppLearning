//#include<iostream>
//#include<fstream>
//
//using namespace std;
//
//class Person {
//public:
//	char m_Name[64]; //这里建议不要用string，避免出现问题
//	int m_Age;
//};
//
//void test01() {
//	//1.包含头文件
//
//	//2.创建流对象
//	//ofstream ofs; //这里两步并一步
//	ofstream ofs("person.txt", ios::out | ios::binary); //简化成一步
//
//	//3.打开文件
//	//ofs.open("person.txt", ios::out|ios::binary); //这里两步并一步
//
//	//4.写文件
//	Person p = { "张三",18 };
//	ofs.write((const char*)&p, sizeof(Person));
//
//	//5.关闭文件
//	ofs.close();
//}
//
//int main() {
//	test01();
//	return 0;
//}
////文件输出流对象可以通过write函数以二进制方式写数据