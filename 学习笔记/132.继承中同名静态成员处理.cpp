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
//	static int m_a;
//public:
//	static void func()
//	{
//		cout << "Father�ľ�̬��Ա����func����" << endl;
//	}
//};
//int Father::m_a = 100;
//
//class Son : public Father
//{
//public:
//	static int m_a;
//public:
//	static void func()
//	{
//		cout << "Son�ľ�̬��Ա����func����" << endl;
//	}
//};
//int Son::m_a = 200;
//
////ͬ����̬��Ա����
//void test01()
//{
//	//1.ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s1;
//	cout << "Son��m_a = " << s1.m_a << endl;
//	cout << "Father��m_a = " << s1.Father::m_a << endl;
//	cout << "*********************" << endl;
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	cout << "Son��m_a = " << Son::m_a << endl;
//	cout << "Father��m_a = " << Father::m_a << endl;
//	
//	//��һ��::�ǡ�ͨ��������ʽ���ʡ����ڶ���::�ǡ����ʸ���������
//	cout << "Father��m_a = " << Son::Father::m_a << endl;
//
//	cout << "*********************" << endl;
//
//}
//
////ͬ����̬��Ա����
//void test02()
//{
//	//1.ͨ���������
//	cout << "ͨ��������ʣ� " << endl;
//	Son s2;
//	s2.func();
//	s2.Father::func();
//
//	//2.ͨ����������
//	cout << "ͨ���������ʣ� " << endl;
//	Son::func();
//	Son::Father::func();
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
