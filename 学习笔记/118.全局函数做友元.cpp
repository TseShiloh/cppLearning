//#include<iostream>
//#include<string>
//using namespace std;
//
//class Home
//{
//	//��������һ������������д��Ȩ���ﶼ�С�
//	//����goodfriend��home�����Ԫ�����Է���˽�г�Ա
//	friend void goodfriend(Home* home);
//	
//public:
//	string m_sittingroom; //�����������ģ�
//private:
//	string m_bedroom; //���ң�˽�еģ�
//public:
//	Home()
//	{
//		m_sittingroom = "����";
//		m_bedroom = "����";	
//	}
//};
//
////ȫ�ֺ���
//void goodfriend(Home* home)
//{
//	cout << "������ ȫ�ֺ������ڷ��ʣ� " << home->m_sittingroom << endl;
//	cout << "������ ȫ�ֺ������ڷ��ʣ� " << home->m_bedroom << endl;
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