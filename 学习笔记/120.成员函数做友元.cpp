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
//	void visit(); //ʹ����Է���home�е�˽�г�Ա
//	void visit2(); //ʹ�䲻���Է���home�е�˽�г�Ա
//	home* m_home;
//};
//
//class home
//{
//	//��������һ������������д��Ȩ���ﶼ�С�
//	friend void goodfriend::visit();
//public:
//	string m_sittingroom; //�����������ģ�
//private:
//	string m_bedroom; //���ң�˽�еģ�
//public:
//	home();
//};
//
//
////����д��Ա����
//home::home()
//{
//	this->m_sittingroom = "����";
//	this->m_bedroom = "����";
//}
//goodfriend::goodfriend()
//{
//	//����һ��home�Ķ���
//	m_home = new home;
//}
//void goodfriend::visit()
//{
//	cout << "visit�������ڷ��ʣ� " << m_home->m_sittingroom << endl;
//	cout << "visit�������ڷ��ʣ� " << m_home->m_bedroom << endl;
//}
//void goodfriend::visit2()
//{
//	cout << "visit2�������ڷ��ʣ� " << m_home->m_sittingroom << endl;
//	//cout << "visit2�������ڷ��ʣ� " << m_home->m_bedroom << endl;
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