//#include<iostream>
//#include<string>
//using namespace std;
//
//template<class T1, class T2>
//class Person {
//public:
//	T1 m_name;
//	T2 m_age;
//public:
//	Person(T1 name, T2 age) {
//		this->m_name = name;
//		this->m_age = age;
//	}
//
//	void showPerson() {
//		cout << "����: " << this->m_name << " ����: " << this->m_age << endl;
//	}
//};
//
//#pragma region 1.
////1.ָ���������ͣ���ã�
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p1("�����", 100);
//	printPerson1(p1);
//}
//#pragma endregion ָ����������
//
//
////2.����ģ�廯
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//	p.showPerson();
//
//	//�鿴ģ���Ƶ�������������
//	cout << "T1���������ƣ� " << typeid(T1).name() << endl;
//	cout << "T2���������ƣ� " << typeid(T2).name() << endl;
//}
//void test02() {
//	Person<string, int>p2("��˽�", 90);
//	printPerson2(p2);
//}
//
////3.������ģ�廯
//template<class T3>
//void printPerson3(T3& p) {
//	p.showPerson();
//	cout << "T3���������ƣ� " << typeid(T3).name() << endl;
//
//}
//void test03() {
//	Person<string, int>p3("��ɮ", 30);
//	printPerson3(p3);
//}
//
//int main() {
//	test01();
//	test02();
//	test03();
//	return 0;
//}