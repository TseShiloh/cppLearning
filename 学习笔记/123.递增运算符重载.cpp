//#include<iostream>
//#include<string>
//
//using namespace std;
//
//
//class MyInterger
//{
//	friend ostream& operator<<(ostream& cout, MyInterger myint);
//
//private:
//	int m_num;
//public:
//	MyInterger()
//	{
//		m_num = 0;
//	}
//
////1.���ص���++�������ǰ�õ�����
//MyInterger& operator++()
////�˴����ء����á��Ǳ�֤�����Ĳ�������������ͬһ�������ϡ�
//{
//	m_num++;//�Ƚ���++����
//	return *this;//�ٽ�����������
//}
//
////2.���ص���++����������õ�����
////int��ʾռλ������������������ǰ�õ����ͺ��õ���
//MyInterger operator++(int)
//{
//	//�ȷ��ؽ��������������ȼ�¼��ʱ�����
//	MyInterger temp = *this;
//	//�����
//	m_num++;
//	//��󽫼�¼���������
//	return temp;
//	//�˴����ص���ָ���������ã���Ϊtemp���ں���ִ�����ͱ��ͷŵ�����ʱ�ٷ���temp�����þ��ǷǷ�������
//}
//
//};
//
////��������<<�����
//ostream& operator<<(ostream& cout, MyInterger myint)
//{
//	cout << myint.m_num;
//	return cout;
//}
//
//
//
//void test01()
//{
//	MyInterger MyInt;
//	cout << MyInt << endl;
//	cout << ++MyInt << endl;
//	cout << MyInt << endl;
//}
//
//void test02()
//{
//	MyInterger MyInt;
//	cout << MyInt << endl;
//	cout << MyInt++ << endl;
//	cout << MyInt << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}