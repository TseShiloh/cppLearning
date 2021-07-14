//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_a;
//	mutable int m_b; //特殊变量，在常函数中也可以修改这个值
//
//public:
//	//this指针本质是一个指针常量，即Person* const this
//	//指向不可以修改，值可以修改
//	void showPerson() const
//		//此时this变成了const Person* const this
//		//在成员函数后面加const，修饰的是this指向，让指针指向的值也不可以修改
//	{
//		this->m_a = 100;
//		this->m_b = 100; //加了mutable后，可以修改了
//	}
//	void func()
//	{
//
//	}
//};
//
////常对象
//void test02()
//{
//	const Person p; //在对象前加const变为常对象
//	//p.m_a = 100; 常对象下不允许修改普通变量
//	p.m_b = 100; //m_b是特殊值，在常对象下也可以修改
//
//	//常对象只能调用常函数
//	p.showPerson();
//	//p.func(); 常对象不能调用普通成员函数，因为普通成员函数可以修改属性
//
//}
//
//
//int main()
//{
//	test02();
//	return 0;
//}