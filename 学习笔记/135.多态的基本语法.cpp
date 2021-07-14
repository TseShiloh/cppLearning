//#include<iostream>
//#include<string>
//
//using namespace std;
//
//class Animal
//{
//public:
//	//虚函数
//	virtual void speak()
//	{
//		cout << "动物在说话" << endl;
//	}
//};
//
//class Cat : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "喵呜呜" << endl;
//	}
//};
//
//class Dog : public Animal
//{
//public:
//	void speak()
//	{
//		cout << "狗汪汪" << endl;
//	}
//};
//
////执行说话的函数
////地址早绑定，在编译阶段确定函数地址。
////如果想执行让猫说话，那么这个函数地址就不能提前绑定，需要在运行阶段进行绑定，地址晚绑定
//void doSpeak(Animal& animal)
//{
//	animal.speak();
//}
//
//void test01()
//{
//	Cat cat;
//	doSpeak(cat);
//	Dog dog;
//	doSpeak(dog);
//}
//
//void test02()
//{
//	cout << "size of Animal: " << sizeof(Animal) << endl;
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
//
////动态多态的满足条件：
////1.有继承关系
////2.子类重写父类的虚函数。重写是指函数返回值类型 函数名 参数列表 完全相同
//
////动态多态使用
////父类的指针或者引用 执行子类对象