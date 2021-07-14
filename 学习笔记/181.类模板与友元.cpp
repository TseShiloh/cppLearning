//#include<iostream>
//#include<string>
//
//using namespace std;
//
////需要提前让编译器知道Person类的存在
//template<class T1, class T2>
//class Person;
//
////还需要让编译器知道这个全局函数存在
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "类外实现" << endl;
//	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//}
//
//template<class T1, class T2>
//class Person
//{
//private:
//	T1 m_Name;
//	T2 m_Age;
//public:
//	Person(T1 name, T2 age)
//	{
//		this->m_Name = name;
//		this->m_Age = age;
//	}
//
//	//1.全局函数的类内实现
//	friend void printPerson(Person<T1, T2>& p)
//	{
//		cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
//	}
//
//	//2.全局函数的类外实现
//	//加空模板参数列表
//	//如果全局函数是类外实现，需要让编译器提前知道这个函数的存在，见第10行
//	friend void printPerson2<>(Person<T1, T2>& p);
//
//};
//
////通过全局函数打印Person的信息
////1.实现全局函数的类内实现
//void test01()
//{
//	Person<string, int>p1("Tom", 20);
//	printPerson(p1);
//}
//
////2.实现全局函数的类外实现
////template<class T1, class T2>
////void printPerson2(Person<T1, T2>& p)
////{
////	cout << "类外实现" << endl;
////	cout << "姓名： " << p.m_Name << " 年龄： " << p.m_Age << endl;
////}
//void test02()
//{
//	Person<string, int>p2("Jerry", 18);
//	printPerson2(p2);
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}