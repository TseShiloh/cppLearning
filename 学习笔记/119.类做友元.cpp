//#include<iostream>
//#include<string>
//using namespace std;
//
//class Home
//{
//	//��������һ������������д��Ȩ���ﶼ�С�
//	//��goodfriend��Home�����Ԫ�����Է���˽�г�Ա
//	friend class goodfriend;
//public:
//	string m_SittingRoom; //�����������ģ�
//private:
//	string m_BedRoom; //���ң�˽�еģ�
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
//	void visit(); //�ιۺ���������Home�е�����
//	Home* m_home;
//
//};
//
////����д��Ա����
//Home::Home()
//{
//	this->m_SittingRoom = "����";
//	this->m_BedRoom = "����";	
//}
//goodfriend::goodfriend()
//{
//	//����һ��Home�Ķ���
//	m_home = new Home;
//}
//void goodfriend::visit()
//{
//	cout << "������ �����ڷ��ʣ� " << m_home->m_SittingRoom << endl;
//	cout << "������ �����ڷ��ʣ� " << m_home->m_BedRoom << endl;
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