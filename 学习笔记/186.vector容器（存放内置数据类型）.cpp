//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>//标准算法头文件
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//创建了一个vector容器，数组
//	vector<int> v;
//
//	//向容器中插入数据
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//通过迭代器访问容器中的数据
//
//	
//#pragma region 1.
//	//第一种遍历方式
//	vector<int>::iterator itBegin = v.begin();
//	//其中begin()是起始迭代器，指向容器中第一个元素
//	vector<int>::iterator itEnd = v.end();
//	//其中end()是结束迭代器，指向容器中最后一个元素的下一个位置
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//#pragma endregion 第一种遍历方式
//
//#pragma region 2.
//	//第二种遍历方式
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//#pragma endregion 第二种遍历方式
//
//#pragma region 3.
//	//第三种遍历方式，利用STL提供遍历算法，这里需要包含头文件algorithm
//	for_each(v.begin(), v.end(), myPrint);
//#pragma endregion 第三种遍历方式
//}
//
//int main()
//{
//	test01();
//	return 0;
//}