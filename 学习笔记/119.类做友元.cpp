//#include<iostream>
//#include<string>
//using namespace std;
//
//class Home
//{
//	//在类中做一个声明，不用写在权限里都行。
//	//类goodfriend是Home类的友元，可以访问私有成员
//	friend class goodfriend;
//public:
//	string m_SittingRoom; //客厅（公开的）
//private:
//	string m_BedRoom; //卧室（私有的）
//public:
//	Home();
//
//};
//
//class goodfriend
//{
//public:
//	goodfriend();
//public:
//	void visit(); //参观函数，访问Home中的属性
//	Home* m_home;
//
//};
//
////类外写成员函数
//Home::Home()
//{
//	this->m_SittingRoom = "客厅";
//	this->m_BedRoom = "卧室";	
//}
//goodfriend::goodfriend()
//{
//	//创建一个Home的对象
//	m_home = new Home;
//}
//void goodfriend::visit()
//{
//	cout << "好朋友 类正在访问： " << m_home->m_SittingRoom << endl;
//	cout << "好朋友 类正在访问： " << m_home->m_BedRoom << endl;
//}
//
//
//
//
//void test01()
//{
//	goodfriend gf1;
//	gf1.visit();
//}
//
//int main()
//{
//	test01();
//
//	return 0;
//}