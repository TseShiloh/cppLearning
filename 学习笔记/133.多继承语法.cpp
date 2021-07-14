////cpp允许一个类继承多个类
////语法： class 子类 : 继承方式 父类1, 继承方式 父类2 ...
////多继承可能会引发父类中有同名成员出现，需要加作用域进行区分
////在实际开发中不建议使用多继承
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Father1
//{
//public:
//	int m_a;
//public:
//	Father1()
//	{
//		m_a = 100;
//		cout << "Father1调用" << endl;
//	}
//};
//class Father2
//{
//public:
//	int m_a;
//public:
//	Father2()
//	{
//		m_a = 200;
//		cout << "Father2调用" << endl;
//	}
//};
//class Father3
//{
//public:
//	int m_a;
//public:
//	Father3()
//	{
//		m_a = 300;
//		cout << "Father3调用" << endl;
//	}
//};
//
//class Son1 : public Father1, public Father2, public Father3
//{
//public:
//	int m_c;
//	int m_d;
//public:
//	Son1()
//	{
//		m_c = 10;
//		m_d = 10;
//	}
//};
//
//void test01()
//{
//	Son1 s;
//	cout << sizeof(s) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}