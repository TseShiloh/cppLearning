////子类继承父类后，当创建子类对象，也会调用父类的构造函数
////那么父类和子类的构造析构顺序是什么？
//
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base
//{
//public:
//	Base()
//	{
//		cout << "父类的构造函数" << endl;
//	}
//	~Base()
//	{
//		cout << "父类的析构函数" << endl;
//	}
//};
//
//class Son : public Base
//{
//public:
//	Son()
//	{
//		cout << "子类的构造函数" << endl;
//	}
//	~Son()
//	{
//		cout << "子类的析构函数" << endl;
//	}
//};
//
//void test01()
//{
//	Son s1;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
////结论：
////先构造父类，再构造子类；先析构子类，再析构父类。
