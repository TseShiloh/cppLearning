//#include<iostream>
//#include<string>
//using namespace std;
//
//class Person
//{
//public:
//	int age;
//
//public:
//	Person(int age)
//	{
//		//thisָ��ָ�򱻵��õĳ�Ա���������Ķ���
//		this->age = age;
//	}
//
//	//�����÷��ص���p2��������ֵ���ݣ�����һ���µ�Person����
//	Person& PersonAddAge(Person &p)
//	{
//		this->age += p.age;
//		return *this;//���ض�����
//	}
////	~Person()
////	{
////		cout << "Person��������������" << endl;
////	}
//};
//
//
////1.������Ƴ�ͻ
//void test_001()
//{
//	Person p1(18);
//
//	cout << "p1������ = " << p1.age << endl;
//} 
//
////2.���ض�������this
//void test_002()
//{
//	Person p1(10);
//	Person p2(10);
//
//	//��ʽ���˼��
//	p2.PersonAddAge(p1).PersonAddAge(p1).PersonAddAge(p1);
//	cout << "p2������ = " << p2.age << endl;
//}
//
//int main()
//{
//	test_001();
//	test_002();
//	return 0;
//}