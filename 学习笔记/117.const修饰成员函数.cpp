//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_a;
//	mutable int m_b; //����������ڳ�������Ҳ�����޸����ֵ
//
//public:
//	//thisָ�뱾����һ��ָ�볣������Person* const this
//	//ָ�򲻿����޸ģ�ֵ�����޸�
//	void showPerson() const
//		//��ʱthis�����const Person* const this
//		//�ڳ�Ա���������const�����ε���thisָ����ָ��ָ���ֵҲ�������޸�
//	{
//		this->m_a = 100;
//		this->m_b = 100; //����mutable�󣬿����޸���
//	}
//	void func()
//	{
//
//	}
//};
//
////������
//void test02()
//{
//	const Person p; //�ڶ���ǰ��const��Ϊ������
//	//p.m_a = 100; �������²������޸���ͨ����
//	p.m_b = 100; //m_b������ֵ���ڳ�������Ҳ�����޸�
//
//	//������ֻ�ܵ��ó�����
//	p.showPerson();
//	//p.func(); �������ܵ�����ͨ��Ա��������Ϊ��ͨ��Ա���������޸�����
//
//}
//
//
//int main()
//{
//	test02();
//	return 0;
//}