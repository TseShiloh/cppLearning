////自己的通用数组类
//#pragma once
//#include<iostream>
//using namespace std;
//
//template<class T>
//class MyArray
//{
//private:
//	T* pAddress; //指针指向堆区开辟的真实数组
//	int m_Capacity; //数组容量
//	int m_Size; //数组大小
//public:
//#pragma region 1.
//	//有参构造 参数 容量
//	MyArray(int capacity)
//	{
//		cout << "MyArray的 有参构造" << endl;
//		this->m_Capacity = capacity;
//		this->m_Size = 0;
//		this->pAddress = new T[this->m_Capacity];
//	}
//#pragma endregion 有参构造
//
//#pragma region 2.
//	//拷贝构造函数
//	MyArray(const MyArray& arr)
//	{
//		cout << "MyArray的 拷贝构造" << endl;
//
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//
//		//深拷贝
//		this->pAddress = new T[arr.m_Capacity];
//
//		//将arr的数据都拷贝过来
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//#pragma endregion 拷贝构造
//
//#pragma region 3.
//	//operator=防止浅拷贝的问题
//	MyArray& operator=(const MyArray& arr)
//	{
//		cout << "MyArray的operator=的调用" << endl;
//
//		//先判断原来堆区是否有数据，如果有先释放
//		if (this->pAddress != NULL)
//		{
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//
//		//深拷贝
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//		this->pAddress = new T[arr.m_Capacity];
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//		return*this;
//	}
//#pragma endregion operator=
//
//#pragma region 4.
//	//析构函数
//	~MyArray()
//	{
//
//		if (this->pAddress != NULL)
//		{
//			cout << "MyArray的 析构函数" << endl;
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//		}
//
//	}
//#pragma endregion 析构函数
//
//#pragma region 5.
//	void Push_Back(const T& val)
//	{
//		cout << "尾插法函数调用" << endl;
//
//		//判断容量大小
//		if (this->m_Capacity == this->m_Size)
//		{
//			return;
//		}
//		this->pAddress[this->m_Size] = val; //在数组末尾插入数据
//		this->m_Size++; //更新数组大小
//	}
//#pragma endregion 尾插法
//
//#pragma region 6.
//	void Pop_Back(const T& val)
//	{
//		cout << "尾删法函数调用" << endl;
//
//		//逻辑删除：让用户访问不到最后一个元素
//		if (this->m_Size == 0)
//		{
//			cout << "该数组已空" << endl;
//			return;
//		}
//		for (int i = 0; i < val; i++)
//		{
//			this->m_Size--; //更新数组大小
//		}
//
//	}
//#pragma endregion 尾删法
//
//#pragma region 7.
//	//需要先重载一下中括号[]
//	T& operator[](int index)
//	{
//		return this->pAddress[index];
//	}
//
//	//返回数组的容量
//	int getCapacity()
//	{
//		return this->m_Capacity;
//	}
//
//	//返回数组的大小
//	int getSize()
//	{
//		return this->m_Size;
//	}
//#pragma endregion 通过下标方式访问数组中的元素
//
//};