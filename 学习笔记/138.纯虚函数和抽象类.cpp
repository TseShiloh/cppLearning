//#include<iostream>
//#include<string>
//using namespace std;
//
//class Base
//{
//public:
//	//���麯��
//	//ֻҪ��һ�����麯����������Ϊ������
//	//�������ص�
//	//1.�޷�ʵ��������
//	//2.�����������~������д�����еĴ��麯��������Ҳ���ڳ�����
//	virtual void func() = 0;
//};
//
//class Son : public Base
//{
//public:
//	void func()
//	{
//		cout << "Son func()�ĵ���" << endl;
//	}
//};
//
//void test01()
//{
//	//Base b; //�������޷�ʵ��������
//	//new Base; //�������޷�ʵ��������
//	//Son s1; //���������д�����еĴ��麯���������޷�ʵ��������
//	Base* base = new Son;
//	base->func();
//}
//
//
//int main()
//{
//	test01();
//	return 0;
//}