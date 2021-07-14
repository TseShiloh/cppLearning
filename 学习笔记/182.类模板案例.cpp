////可以对内置数据类型以及自定义数据类型的数据进行存储
////将数组中的数据存储到堆区
////构造函数中可以传入数组的容量
////提供对应的拷贝构造函数以及operator=防止浅拷贝的问题
////（已实现）
//
////提供尾插法和尾刪法对数组中的数据进行增加和删除
////可以通过下标的方式访问数组中的元素
////可以获取数组中当前元素个数和数组的容量
//
//#include<iostream>
//#include<string>
//#include"182.类模板案例.hpp"
//using namespace std;
//
//#pragma region 1.1
//void PrintIntArray(MyArray<int>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//#pragma endregion 打印整型数组的函数PrintIntArray()
//
//
//
//#pragma region 2.
//void test01()
//{
//	//测试已实现功能
//	MyArray<int>arr1(5);
//	MyArray<int>arr2(arr1);
//	MyArray<int>arr3(100);
//	arr3 = arr1;
//}
//#pragma endregion test01()测试已实现功能
//
//#pragma region 3.
//void test02()
//{
//	MyArray<int>arr4(5);
//	for (int i = 0; i < arr4.getCapacity(); i++)
//	{
//		//利用尾插法向数组插入数据
//		arr4.Push_Back(i);
//	}
//	cout << "arr4的打印输出为： " << endl;
//	PrintIntArray(arr4);
//	cout << "arr4的容量为：" << arr4.getCapacity() << endl;
//	cout << "arr4的大小为：" << arr4.getSize() << endl;
//	cout << "******************************************" << endl;
//	MyArray<int>arr5(arr4);
//	cout << "arr5的打印输出为： " << endl;
//	PrintIntArray(arr5);
//
//	//利用arr5进行尾刪法测试
//	arr5.Pop_Back(2);
//	cout << "arr5尾刪后的情况：" << endl;
//	cout << "arr5的容量为：" << arr5.getCapacity() << endl;
//	cout << "arr5的大小为：" << arr5.getSize() << endl;
//}
//#pragma endregion test02()测试尾插法和尾刪法
//
//#pragma region 4.
////测试自定义数据类型
//class Person
//{
//public:
//	string m_name;
//	int m_age = 0;
//public:
//	Person() {}
//	Person(string name, int age)
//	{
//		this->m_name = name;
//		this->m_age = age;
//	}
//};
//
//#pragma region 1.2
//void PrintPersonArray(MyArray<Person>& arr)
//{
//	for (int i = 0; i < arr.getSize(); i++)
//	{
//		cout << "姓名：" << arr[i].m_name << "\t" << " 年龄： " << arr[i].m_age << endl;
//	}
//}
//#pragma endregion 打印整型数组的函数PrintPersonArray()
//
//void test03()
//{
//	MyArray<Person>arr6(10);
//	Person p1("唐僧", 30);
//	Person p2("孙悟空", 100);
//	Person p3("猪八戒", 90);
//	Person p4("沙僧", 80);
//
//	//将数据插入到数组中
//	arr6.Push_Back(p1);	arr6.Push_Back(p2);
//	arr6.Push_Back(p3);	arr6.Push_Back(p4);
//
//	//打印数组,并输出容量和大小
//	PrintPersonArray(arr6);
//	cout << "arr6的容量为：" << arr6.getCapacity() << endl;
//	cout << "arr6的大小为：" << arr6.getSize() << endl;
//}
//#pragma endregion test03()测试自定义数据类型
//
//
//int main()
//{
//	//test01();
//	//test02();
//	test03();
//	return 0;
//}