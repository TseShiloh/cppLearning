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
////�����ó�Ա�����������������������Ϊ�޷�ʵ��cout�����
//};
//
////ֻ������ȫ�ֺ����������������
//ostream& operator<<(ostream& out, Person& p)//��Ϊcout << p
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