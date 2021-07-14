////可以让两个自定义类型对象进行对比操作
//
//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	string m_name;
//	int m_age;
//public:
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	//重载==号
//	bool operator==(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	//重载!=号
//	bool operator!=(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return false;
//		}
//		return true;
//	}
//};
//
//void test01()
//{
//	Person p1("Tom", 18);
//	Person p2("Tom", 18);
//	Person p3("Jerry", 12);
//	if (p1 == p2)
//	{
//		cout << "p1和p2是相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p2是不相等的！" << endl;
//	}
//
//	if (p1 != p3)
//	{
//		cout << "p1和p3是不相等的！" << endl;
//	}
//	else
//	{
//		cout << "p1和p3是是相等的！" << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}