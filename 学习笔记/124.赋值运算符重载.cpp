////c++�༭�����ٸ�һ�������4������
////Ĭ�Ϲ��캯����Ĭ������������Ĭ�Ͽ������캯��
////�͸�ֵ�����operator=�Ķ����Խ���ֵ����
//
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int* m_age; //m_age��ŵ����������ݵĵ�ַ�����������ݱ���
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//���ظ�ֵ=�����
//	Person& operator=(Person& p)
//	{
//		//Ӧ�����ж��Ƿ��������ڶ���������У����ͷŸɾ��������
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		//�������ṩ����ǳ����
//		//m_age = p.m_age;
//		m_age = new int(*p.m_age); //�������
//		return *this; //���ض�������
//	}
//};
//
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1; //��ֵ����
//	cout << "p1������Ϊ�� " << *p1.m_age << endl;
//	cout << "p2������Ϊ�� " << *p2.m_age << endl;
//	cout << "p3������Ϊ�� " << *p3.m_age << endl;
//
//
//}
//int main()
//{
//	test01();
//	return 0;
//}