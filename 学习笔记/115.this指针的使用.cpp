//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//
//public:
//	Person(int age)
//	{
//		//this指针指向被调用的成员函数所属的对象
//		this->age = age;
//	}
//
//	//用引用返回的是p2，否则是值传递，返回一个新的Person变量
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		return *this;//返回对象本身
//	}
////	~Person()
////	{
////		cout << "Person的析构函数调用" << endl;
////	}
//};
//
//
////1.解决名称冲突
//void test_001()
//{
//	Person p1(18);
//
//	cout << "p1的年龄 = " << p1.age << endl;
//} 
//
////2.返回对象本身用this
//void test_002()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//链式编程思想
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2的年龄 = " << p2.age << endl;
//}
//
//int main()
//{
//	test_001();
//	test_002();
//	return 0;
//}