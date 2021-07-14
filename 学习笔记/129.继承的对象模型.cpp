//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Base
//{
//public:
//	int m_a;
//protected:
//	int m_b;
//private:
//	int m_c;
//};
//
//class Son : public Base
//{
//public:
//	int m_d;
//};
//
//
//void test01()
//{
//	cout << "size of Son = " << sizeof(Son) << endl;
//}
////由此可见一个Son类对象所占的内存空间是16
////意味着父类所有非静态成员属性都会被子类继承下去
////父类中私有成员属性是被编译器给隐藏了，因此访问不到，但确实被子类继承了。
//
//
//int main()
//{
//	test01();
//	return 0;
//}
//
////利用开发人员命令提示工具查看对象模型
////跳转盘符 F:
////跳转文件路径 cd 具体路径
////查看命令 cl /d1 reportSingleClassLayout查看的类名 所属文件名