//#include<iostream>
//using namespace std;
//
//class Person
//{
//	friend ostream& operator<<(ostream& out, Person& p);
//private:
//	int m_a;
//	int m_b;
//public:
//	Person(int a, int b)
//	{
//		this->m_a = a;
//		this->m_b = b;
//	}
////不利用成员函数来重载左移运算符，因为无法实现cout在左侧
//};
//
////只能利用全局函数重载左移运算符
//ostream& operator<<(ostream& out, Person& p)//简化为cout << p
//{
//	out << "m_a = " << p.m_a << " m_b =  " << p.m_b;
//	return out;
//}
//
//void test01()
//{
//	Person p1(10, 10);
//	cout << p1 << "hello world " << endl;
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}