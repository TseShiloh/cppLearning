//#include<iostream>
//#include<string>
//
//using namespace std;
//
////��Ҫ��ǰ�ñ�����֪��Person��Ĵ���
//template<class T1, class T2>
//class Person;
//
////����Ҫ�ñ�����֪�����ȫ�ֺ�������
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p)
//{
//	cout << "����ʵ��" << endl;
//	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
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
//	//1.ȫ�ֺ���������ʵ��
//	friend void printPerson(Person<T1, T2>& p)
//	{
//		cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
//	}
//
//	//2.ȫ�ֺ���������ʵ��
//	//�ӿ�ģ������б�
//	//���ȫ�ֺ���������ʵ�֣���Ҫ�ñ�������ǰ֪����������Ĵ��ڣ�����10��
//	friend void printPerson2<>(Person<T1, T2>& p);
//
//};
//
////ͨ��ȫ�ֺ�����ӡPerson����Ϣ
////1.ʵ��ȫ�ֺ���������ʵ��
//void test01()
//{
//	Person<string, int>p1("Tom", 20);
//	printPerson(p1);
//}
//
////2.ʵ��ȫ�ֺ���������ʵ��
////template<class T1, class T2>
////void printPerson2(Person<T1, T2>& p)
////{
////	cout << "����ʵ��" << endl;
////	cout << "������ " << p.m_Name << " ���䣺 " << p.m_Age << endl;
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