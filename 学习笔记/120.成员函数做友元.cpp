//#include<iostream>
//#include<string>
//using namespace std;
//
//class home;
//
//class goodfriend
//{
//public:
//	goodfriend();
//public:
//	void visit(); //使其可以访问home中的私有成员
//	void visit2(); //使其不可以访问home中的私有成员
//	home* m_home;
//};
//
//class home
//{
//	//在类中做一个声明，不用写在权限里都行。
//	friend void goodfriend::visit();
//public:
//	string m_sittingroom; //客厅（公开的）
//private:
//	string m_bedroom; //卧室（私有的）
//public:
//	home();
//};
//
//
////类外写成员函数
//home::home()
//{
//	this->m_sittingroom = "客厅";
//	this->m_bedroom = "卧室";
//}
//goodfriend::goodfriend()
//{
//	//创建一个home的对象
//	m_home = new home;
//}
//void goodfriend::visit()
//{
//	cout << "visit函数正在访问： " << m_home->m_sittingroom << endl;
//	cout << "visit函数正在访问： " << m_home->m_bedroom << endl;
//}
//void goodfriend::visit2()
//{
//	cout << "visit2函数正在访问： " << m_home->m_sittingroom << endl;
//	//cout << "visit2函数正在访问： " << m_home->m_bedroom << endl;
//}
//
//void test01()
//{
//	goodfriend gf1;
//	gf1.visit();
//	gf1.visit2();
//}
//
//int main()
//{
//	test01();
//	return 0;
//}