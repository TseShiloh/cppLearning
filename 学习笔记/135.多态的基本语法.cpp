//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	//�麯��
//	virtual void speak()
//	{
//		cout << "������˵��" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "������" << endl;
//	}
//};
//
////ִ��˵���ĺ���
////��ַ��󶨣��ڱ���׶�ȷ��������ַ��
////�����ִ����è˵������ô���������ַ�Ͳ�����ǰ�󶨣���Ҫ�����н׶ν��а󶨣���ַ���
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal: " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
//
////��̬��̬������������
////1.�м̳й�ϵ
////2.������д������麯������д��ָ��������ֵ���� ������ �����б� ��ȫ��ͬ
//
////��̬��̬ʹ��
////�����ָ��������� ִ���������