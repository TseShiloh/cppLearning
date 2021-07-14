//#include <iostream>
//#include<string>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//煮水
//	virtual void boil() = 0;
//	//冲泡
//	virtual void brew() = 0;
//	//倒入杯中
//	virtual void pourincup() = 0;
//	//加入辅料
//	virtual void putsomething() = 0;
//
//	//制作饮品
//	void MakeDrink()
//	{
//		boil();
//		brew();
//		pourincup();
//		putsomething();
//	}
//};
//
////制作咖啡
//class coffee :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "煮水" << endl;
//	}
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡咖啡" << endl;
//	}
//	//倒入杯中
//	virtual void pourincup()
//	{
//		cout << "倒入杯中" << endl;
//	}
//	//加入辅料
//	virtual void putsomething()
//	{
//		cout << "加入糖和牛奶" << endl;
//	}
//};
//
////煮茶
//class tea :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "煮矿泉水" << endl;
//	}
//	//冲泡
//	virtual void brew()
//	{
//		cout << "冲泡茶叶" << endl;
//	}
//	//倒入杯中
//	virtual void pourincup()
//	{
//		cout << "倒入茶杯中" << endl;
//	}
//	//加入辅料
//	virtual void putsomething()
//	{
//		cout << "加入枸杞" << endl;
//	}
//};
//
////
//
//void dowork(AbstractDrinking* abc)
//{
//	abc->MakeDrink();
//	delete abc;//释放
//}
//
//void test01()
//{
//	//制作咖啡
//	dowork(new coffee); //AbstractDrinking* abc = new coffee
//
//	//制作茶
//	dowork(new tea); //AbstractDrinking* abc = new tea
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
