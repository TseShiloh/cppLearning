////�����������Զ������Ͷ�����жԱȲ���
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
//	//����==��
//	bool operator==(Person& p)
//	{
//		if (this->m_name == p.m_name && this->m_age == p.m_age)
//		{
//			return true;
//		}
//		return false;
//	}
//
//	//����!=��
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
//		cout << "p1��p2����ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p2�ǲ���ȵģ�" << endl;
//	}
//
//	if (p1 != p3)
//	{
//		cout << "p1��p3�ǲ���ȵģ�" << endl;
//	}
//	else
//	{
//		cout << "p1��p3������ȵģ�" << endl;
//	}
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}