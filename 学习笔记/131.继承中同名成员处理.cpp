////�������븸�����ͬ���ĳ�Ա�����ͨ���������ֱ��������͸�������ݡ�
////��������ͬ����Ա ֱ�ӷ��ʼ���
////���ʸ���ͬ����Ա ��Ҫ��������
////�������븸��ӵ��ͬ���ĳ�Ա����ʱ����������ظ�����ͬ����Ա���������������ſ��Է��ʵ������е�ͬ����Ա������
//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Father
//{
//public:
//	int m_a;
//public:
//	Father()
//	{
//		m_a = 100;
//	}
//	void func()
//	{
//		cout << "Father��func��������" << endl;
//	}
//	void func(int a)
//	{
//		cout << "Father��func���غ�������" << endl;
//	}
//};
//
//class Son : public Father
//{
//public:
//	int m_a;
//public:
//	Son()
//	{
//		m_a = 200;
//	}
//	void func()
//	{
//		cout << "Son��func��������" << endl;
//	}
//};
//
////ͬ����Ա����
//void test01()
//{
//	Son s1;
//	cout << "Son��m_a = " << s1.m_a << endl;
//	cout << "Father��m_a = " << s1.Father::m_a << endl;
//	cout << "*********************" << endl;
//}
//
////ͬ����Ա����
//void test02()
//{
//	Son s2;
//	s2.func();
//	s2.Father::func();
//	cout << "*********************" << endl;
//
//	//s2.func(100); //�޷����ʵ����������غ�ĳ�Ա����func(int a)
//	s2.Father::func(100);
//	cout << "*********************" << endl;
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
