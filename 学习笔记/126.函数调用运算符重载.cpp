////�������������()Ҳ��������
////�������غ��ʹ�÷�ʽ�ǳ������ĵ��ã���˳�Ϊ�º���
////�º���û�й̶�д�����ǳ����
//#include<iostream>
//#include<string>
//using namespace std;
//
////��ӡ�����
//class MyPrint
//{
//public:
//	//���غ������������
//	void operator()(string test)
//	{
//		cout << test << endl;
//	}
//};
//
//void MyPrint02(string test)
//{
//	cout << test << endl;
//}
//
//void test01()
//{
//	MyPrint myprint;
//	myprint("hello world"); //����ʹ�������ǳ������ں������ã���˳�Ϊ�º���
//	MyPrint02("hello world");
//}
//
////�º����ǳ���û�й̶�д��
////�ӷ���
//class MyAdd
//{
//public:
//	int operator()(int num1, int num2)
//	{
//		return num1 + num2;
//	}
//};
//
//void test02()
//{
//	MyAdd myadd;
//	int my_result = myadd(1, 2);
//	cout << "my_result = " << my_result << endl;
//
//	//������������
//	cout << MyAdd()(100, 100) << endl;
//}
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}