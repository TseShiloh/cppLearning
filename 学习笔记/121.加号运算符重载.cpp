//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_a;
//	int m_b;
//public:
//	Person() {};
//	Person(int a, int b)
//	{
//		this->m_a = a;
//		this->m_b = b;
//	}
//
//	//成员函数实现 + 号运算符重载
//	Person operator+(const Person& p)
//	{
//		//Person temp;
//		temp.m_a = this->m_a + p.m_a;
//		temp.m_b = this->m_b + p.m_b;
//		return temp;
//	}
//};
//
////全局函数实现 + 号运算符重载
//Person operator+(const Person& p1, const Person& p2)
//{
//	Person temp(0, 0);
//	temp.m_a = p1.m_a + p2.m_a;
//	temp.m_b = p1.m_b + p2.m_b;
//	return temp;
//}
//
////运算符重载后的函数也可以发生函数重载
//Person operator+(const Person& p1, int num)
//{
//	Person temp(0, 0);
//	temp.m_a = p1.m_a + num;
//	temp.m_b = p1.m_b + num;
//	return temp;
//}
//
//void test01()
//{
//	Person p1(10, 10);
//	Person p2(10, 10);
//
//	//成员函数实现
//	Person p3 = p1 + p2; //相当于Person p3 = p1.operator+(p2)
//	cout << "mA: " << p3.m_a << "mB: " << p3.m_b << endl;
//
//	//全局函数实现下，本质为Person p3 = operator+(p1, p2)
//
//	//运算符重载后发生函数重载
//	Person p4 = p1 + 100; //相当于Person p4 = operator+(p1, 100)
//	cout << "mA: " << p4.m_a << "mB: " << p4.m_b << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}