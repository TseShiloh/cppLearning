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
//		cout << "姓名: " << this->m_name << " 年龄: " << this->m_age << endl;
//	}
//};
//
//#pragma region 1.
////1.指定传入类型（最常用）
//void printPerson1(Person<string, int>& p) {
//	p.showPerson();
//}
//void test01() {
//	Person<string, int>p1("孙悟空", 100);
//	printPerson1(p1);
//}
//#pragma endregion 指定传入类型
//
//
////2.参数模板化
//template<class T1, class T2>
//void printPerson2(Person<T1, T2>& p) {
//	p.showPerson();
//
//	//查看模版推导出的数据类型
//	cout << "T1的类型名称： " << typeid(T1).name() << endl;
//	cout << "T2的类型名称： " << typeid(T2).name() << endl;
//}
//void test02() {
//	Person<string, int>p2("猪八戒", 90);
//	printPerson2(p2);
//}
//
////3.整个类模板化
//template<class T3>
//void printPerson3(T3& p) {
//	p.showPerson();
//	cout << "T3的类型名称： " << typeid(T3).name() << endl;
//
//}
//void test03() {
//	Person<string, int>p3("唐僧", 30);
//	printPerson3(p3);
//}
//
//int main() {
//	test01();
//	test02();
//	test03();
//	return 0;
//}