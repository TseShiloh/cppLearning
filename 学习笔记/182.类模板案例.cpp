////���Զ��������������Լ��Զ����������͵����ݽ��д洢
////�������е����ݴ洢������
////���캯���п��Դ������������
////�ṩ��Ӧ�Ŀ������캯���Լ�operator=��ֹǳ����������
////����ʵ�֣�
//
////�ṩβ�巨��β�h���������е����ݽ������Ӻ�ɾ��
////����ͨ���±�ķ�ʽ���������е�Ԫ��
////���Ի�ȡ�����е�ǰԪ�ظ��������������
//
//#include<iostream>
//#include<string>
//#include"182.��ģ�尸��.hpp"
//using namespace std;
//
//#pragma region 1.1
//void PrintIntArray(MyArray<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//#pragma endregion ��ӡ��������ĺ���PrintIntArray()
//
//
//
//#pragma region 2.
//void test01()
//{
//	//������ʵ�ֹ���
//	MyArray<int>arr1(5);
//	MyArray<int>arr2(arr1);
//	MyArray<int>arr3(100);
//	arr3 = arr1;
//}
//#pragma endregion test01()������ʵ�ֹ���
//
//#pragma region 3.
//void test02()
//{
//	MyArray<int>arr4(5);
//	for (int i = 0; i < arr4.getCapacity(); i++)
//	{
//		//����β�巨�������������
//		arr4.Push_Back(i);
//	}
//	cout << "arr4�Ĵ�ӡ���Ϊ�� " << endl;
//	PrintIntArray(arr4);
//	cout << "arr4������Ϊ��" << arr4.getCapacity() << endl;
//	cout << "arr4�Ĵ�СΪ��" << arr4.getSize() << endl;
//	cout << "******************************************" << endl;
//	MyArray<int>arr5(arr4);
//	cout << "arr5�Ĵ�ӡ���Ϊ�� " << endl;
//	PrintIntArray(arr5);
//
//	//����arr5����β�h������
//	arr5.Pop_Back(2);
//	cout << "arr5β�h��������" << endl;
//	cout << "arr5������Ϊ��" << arr5.getCapacity() << endl;
//	cout << "arr5�Ĵ�СΪ��" << arr5.getSize() << endl;
//}
//#pragma endregion test02()����β�巨��β�h��
//
//#pragma region 4.
////�����Զ�����������
//class Person
//{
//public:
//	string m_name;
//	int m_age = 0;
//public:
//	Person() {}
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//};
//
//#pragma region 1.2
//void PrintPersonArray(MyArray<Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << "������" << arr[i].m_name << "\t" << " ���䣺 " << arr[i].m_age << endl;
//	}
//}
//#pragma endregion ��ӡ��������ĺ���PrintPersonArray()
//
//void test03()
//{
//	MyArray<Person>arr6(10);
//	Person p1("��ɮ", 30);
//	Person p2("�����", 100);
//	Person p3("��˽�", 90);
//	Person p4("ɳɮ", 80);
//
//	//�����ݲ��뵽������
//	arr6.Push_Back(p1);	arr6.Push_Back(p2);
//	arr6.Push_Back(p3);	arr6.Push_Back(p4);
//
//	//��ӡ����,����������ʹ�С
//	PrintPersonArray(arr6);
//	cout << "arr6������Ϊ��" << arr6.getCapacity() << endl;
//	cout << "arr6�Ĵ�СΪ��" << arr6.getSize() << endl;
//}
//#pragma endregion test03()�����Զ�����������
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}