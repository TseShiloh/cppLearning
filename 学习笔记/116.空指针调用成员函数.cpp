//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int m_age;
//public:
//	void showClassName()
//	{
//		cout << "this is Person class" << endl;
//	}
//	void showPersonAge()
//	{
//		//���Ϊ�˱���������µĴ���ͨ����д������
//		if (this == NULL)
//		{
//			return;
//		}
//		
//		//�����ԭ���Ǵ����ָ��ΪNULL
//		cout << "age = " << m_age << endl; //��Ϊ�˴���m_age������this->m_age
//	}
//};
//
//void test01()
//{
//	Person* p = NULL;
//	p->showClassName();
//	p->showPersonAge();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}