////cpp����һ����̳ж����
////�﷨�� class ���� : �̳з�ʽ ����1, �̳з�ʽ ����2 ...
////��̳п��ܻ�������������ͬ����Ա���֣���Ҫ���������������
////��ʵ�ʿ����в�����ʹ�ö�̳�
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Father1
//{
//public:
//	int m_a;
//public:
//	Father1()
//	{
//		m_a = 100;
//		cout << "Father1����" << endl;
//	}
//};
//class Father2
//{
//public:
//	int m_a;
//public:
//	Father2()
//	{
//		m_a = 200;
//		cout << "Father2����" << endl;
//	}
//};
//class Father3
//{
//public:
//	int m_a;
//public:
//	Father3()
//	{
//		m_a = 300;
//		cout << "Father3����" << endl;
//	}
//};
//
//class Son1 : public Father1, public Father2, public Father3
//{
//public:
//	int m_c;
//	int m_d;
//public:
//	Son1()
//	{
//		m_c = 10;
//		m_d = 10;
//	}
//};
//
//void test01()
//{
//	Son1 s;
//	cout << sizeof(s) << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}