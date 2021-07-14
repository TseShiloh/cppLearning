//#include<iostream>
//#include<string>
//using namespace std;
//
//class Animal
//{
//public:
//	virtual void speak() = 0;
//	Animal()
//	{
//		cout << "Animal的构造函数调用" << endl;
//	}
//	//利用虚析构可以解决父类指针释放子类对象时不干净的问题 
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal的析构函数调用" << endl;
//	//}
//
//	//纯虚析构需要声明也需要实现
//	//有了纯虚析构之后这个类也属于抽象类，无法实例化对象 
//	virtual ~Animal() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal纯虚析构函数调用" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	string* m_Name;
//public:
//	Cat(string name)
//	{
//		cout << "Cat的构造函数调用" << endl;
//		m_Name = new string(name);
//	}
//	void speak()
//	{
//		cout << *m_Name << "喵喵" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat的析构函数调用" << endl;
//		if (m_Name != NULL)
//		{
//			delete m_Name;
//			m_Name = NULL;
//		}
//	}
//};
//void test()
//{
//	Animal* animal = new Cat("Tom");
//	animal->speak();
//	//父类指针在析构时候，不会调用子类中的析构函数，导致子类如果有堆区属性，出现内存泄漏 
//	delete animal;
//}
//int main()
//{
//	test();
//	return 0;
//}