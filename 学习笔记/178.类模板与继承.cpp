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
////class Son::public Base //错误，必须要知道父类中的T类型，才能继承给子类
//class Son :public Base<int> {
//
//};
//
//void test01() {
//	Son s1;
//}
//
////如果想灵活指定
//template<class T1, class T2>
//class Son2 :public Base<T1> {
//public:
//	T2 obj;
//public:
//	Son2() {
//		cout << "T1的类型为： " << typeid(T1).name() << endl;
//		cout << "T2的类型为： " << typeid(T2).name() << endl;
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
