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
//		cout << "Animal�Ĺ��캯������" << endl;
//	}
//	//�������������Խ������ָ���ͷ��������ʱ���ɾ������� 
//	//virtual ~Animal()
//	//{
//	//	cout << "Animal��������������" << endl;
//	//}
//
//	//����������Ҫ����Ҳ��Ҫʵ��
//	//���˴�������֮�������Ҳ���ڳ����࣬�޷�ʵ�������� 
//	virtual ~Animal() = 0;
//};
//Animal::~Animal()
//{
//	cout << "Animal����������������" << endl;
//}
//
//class Cat :public Animal
//{
//public:
//	string* m_Name;
//public:
//	Cat(string name)
//	{
//		cout << "Cat�Ĺ��캯������" << endl;
//		m_Name = new string(name);
//	}
//	void speak()
//	{
//		cout << *m_Name << "����" << endl;
//	}
//	~Cat()
//	{
//		cout << "Cat��������������" << endl;
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
//	//����ָ��������ʱ�򣬲�����������е�����������������������ж������ԣ������ڴ�й© 
//	delete animal;
//}
//int main()
//{
//	test();
//	return 0;
//}