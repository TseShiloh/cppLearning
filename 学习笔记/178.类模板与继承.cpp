//#include<iostream>
//#include<string>
//using namespace std;
//
//
//template<class T>
//class Base {
//	T m;
//};
//
////class Son::public Base //���󣬱���Ҫ֪�������е�T���ͣ����ܼ̳и�����
//class Son :public Base<int> {
//
//};
//
//void test01() {
//	Son s1;
//}
//
////��������ָ��
//template<class T1, class T2>
//class Son2 :public Base<T1> {
//public:
//	T2 obj;
//public:
//	Son2() {
//		cout << "T1������Ϊ�� " << typeid(T1).name() << endl;
//		cout << "T2������Ϊ�� " << typeid(T2).name() << endl;
//	}
//};
//
//void test02() {
//	Son2<int, char>s2;
//}
//
//
//int main() {
//	test01();
//	test02();
//	return 0;
//}
