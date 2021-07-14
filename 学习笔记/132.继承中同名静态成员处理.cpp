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
//	static int m_a;
//public:
//	static void func()
//	{
//		cout << "Father的静态成员函数func调用" << endl;
//	}
//};
//int Father::m_a = 100;
//
//class Son : public Father
//{
//public:
//	static int m_a;
//public:
//	static void func()
//	{
//		cout << "Son的静态成员函数func调用" << endl;
//	}
//};
//int Son::m_a = 200;
//
////同名静态成员属性
//void test01()
//{
//	//1.通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s1;
//	cout << "Son的m_a = " << s1.m_a << endl;
//	cout << "Father的m_a = " << s1.Father::m_a << endl;
//	cout << "*********************" << endl;
//
//	//2.通过类名访问
//	cout << "通过类名访问： " << endl;
//	cout << "Son的m_a = " << Son::m_a << endl;
//	cout << "Father的m_a = " << Father::m_a << endl;
//	
//	//第一个::是“通过类名方式访问”。第二个::是“访问父类作用域”
//	cout << "Father的m_a = " << Son::Father::m_a << endl;
//
//	cout << "*********************" << endl;
//
//}
//
////同名静态成员函数
//void test02()
//{
//	//1.通过对象访问
//	cout << "通过对象访问： " << endl;
//	Son s2;
//	s2.func();
//	s2.Father::func();
//
//	//2.通过类名访问
//	cout << "通过类名访问： " << endl;
//	Son::func();
//	Son::Father::func();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
