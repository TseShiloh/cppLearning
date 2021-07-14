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
////1.重载递增++运算符（前置递增）
//MyInterger& operator++()
////此处返回“引用”是保证后续的操作都是作用在同一个对象上。
//{
//	m_num++;//先进行++运算
//	return *this;//再将自身做返回
//}
//
////2.重载递增++运算符（后置递增）
////int表示占位参数，可以用于区分前置递增和后置递增
//MyInterger operator++(int)
//{
//	//先返回结果（具体操作：先记录当时结果）
//	MyInterger temp = *this;
//	//后递增
//	m_num++;
//	//最后将记录结果做返回
//	return temp;
//	//此处返回的是指而不是引用，因为temp会在函数执行完后就被释放掉，此时再返回temp的引用就是非法操作了
//}
//
//};
//
////重载左移<<运算符
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