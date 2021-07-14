//#include<iostream>
//#include<string>
//using namespace std;
//
//class Home
//{
//	//在类中做一个声明，不用写在权限里都行。
//	//函数goodfriend是home类的友元，可以访问私有成员
//	friend void goodfriend(Home* home);
//	
//public:
//	string m_sittingroom; //客厅（公开的）
//private:
//	string m_bedroom; //卧室（私有的）
//public:
//	Home()
//	{
//		m_sittingroom = "客厅";
//		m_bedroom = "卧室";	
//	}
//};
//
////全局函数
//void goodfriend(Home* home)
//{
//	cout << "好朋友 全局函数正在访问： " << home->m_sittingroom << endl;
//	cout << "好朋友 全局函数正在访问： " << home->m_bedroom << endl;
//}
//
//void test01()
//{
//	Home m_home;
//	goodfriend(&m_home);
//}
//
//int main()
//{
//	test01();
//	return 0;
//}