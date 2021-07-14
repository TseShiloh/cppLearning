////c++编辑器至少给一个类添加4个函数
////默认构造函数，默认析构函数，默认拷贝构造函数
////和赋值运算符operator=的对属性进行值拷贝
//
//#include<iostream>
//using namespace std;
//
//class Person
//{
//public:
//	int* m_age; //m_age存放的是年龄数据的地址，而不是数据本身
//public:
//	Person(int age)
//	{
//		m_age = new int(age);
//	}
//	~Person()
//	{
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//	}
//
//	//重载赋值=运算符
//	Person& operator=(Person& p)
//	{
//		//应该先判断是否有属性在堆区，如果有，先释放干净，再深拷贝
//		if (m_age != NULL)
//		{
//			delete m_age;
//			m_age = NULL;
//		}
//		//编译器提供的是浅拷贝
//		//m_age = p.m_age;
//		m_age = new int(*p.m_age); //深拷贝操作
//		return *this; //返回对象自身
//	}
//};
//
//
//void test01()
//{
//	Person p1(18);
//	Person p2(20);
//	Person p3(30);
//
//	p3 = p2 = p1; //赋值操作
//	cout << "p1的年龄为： " << *p1.m_age << endl;
//	cout << "p2的年龄为： " << *p2.m_age << endl;
//	cout << "p3的年龄为： " << *p3.m_age << endl;
//
//
//}
//int main()
//{
//	test01();
//	return 0;
//}