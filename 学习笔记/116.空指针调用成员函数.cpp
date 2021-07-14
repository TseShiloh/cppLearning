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
//		//因此为了避免出现以下的错误，通常是写个条件
//		if (this == NULL)
//		{
//			return;
//		}
//		
//		//报错的原因是传入的指针为NULL
//		cout << "age = " << m_age << endl; //因为此处的m_age具体是this->m_age
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