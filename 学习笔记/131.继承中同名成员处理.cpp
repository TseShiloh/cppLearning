////当子类与父类出现同名的成员，如何通过子类对象分别访问子类和父类的数据。
////访问子类同名成员 直接访问即可
////访问父类同名成员 需要加作用域
////当子类与父类拥有同名的成员函数时，子类会隐藏父类中同名成员函数，加作用域后才可以访问到父类中的同名成员函数。
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Father
//{
//public:
//	int m_a;
//public:
//	Father()
//	{
//		m_a = 100;
//	}
//	void func()
//	{
//		cout << "Father的func函数调用" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Father的func重载函数调用" << endl;
//	}
//};
//
//class Son : public Father
//{
//public:
//	int m_a;
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//	void func()
//	{
//		cout << "Son的func函数调用" << endl;
//	}
//};
//
////同名成员属性
//void test01()
//{
//	Son s1;
//	cout << "Son的m_a = " << s1.m_a << endl;
//	cout << "Father的m_a = " << s1.Father::m_a << endl;
//	cout << "*********************" << endl;
//}
//
////同名成员函数
//void test02()
//{
//	Son s2;
//	s2.func();
//	s2.Father::func();
//	cout << "*********************" << endl;
//
//	//s2.func(100); //无法访问到父类中重载后的成员函数func(int a)
//	s2.Father::func(100);
//	cout << "*********************" << endl;
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
