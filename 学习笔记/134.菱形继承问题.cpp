//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	int m_age;
//};
//
//
//class Sheep : virtual public Animal
//{};
//
//class Tuo : virtual public Animal
//{};
//
//class SheepTuo : public Sheep, public Tuo
//{};
//
//void test01()
//{
//	SheepTuo st;
//	st.Sheep::m_age = 18;
//	st.Tuo::m_age = 28;
//	
//	//������治����ͨ���ĸ���ʽ���ʣ���ֻ��һ������
//	cout << "st.Sheep::m_age = " << st.Sheep::m_age << endl;
//	cout << "st.Tuo::m_age = " << st.Tuo::m_age << endl;
//	cout << st.m_age << endl;
//}
//
//int main()
//{
//	test01();
//	return 0;
//}