////�Լ���ͨ��������
//#pragma once
//#include<iostream>
//using namespace std;
//
//template<class T>
//class MyArray
//{
//private:
//	T* pAddress; //ָ��ָ��������ٵ���ʵ����
//	int m_Capacity; //��������
//	int m_Size; //�����С
//public:
//#pragma region 1.
//	//�вι��� ���� ����
//	MyArray(int capacity)
//	{
//		cout << "MyArray�� �вι���" << endl;
//		this->m_Capacity = capacity;
//		this->m_Size = 0;
//		this->pAddress = new T[this->m_Capacity];
//	}
//#pragma endregion �вι���
//
//#pragma region 2.
//	//�������캯��
//	MyArray(const MyArray& arr)
//	{
//		cout << "MyArray�� ��������" << endl;
//
//		this->m_Capacity = arr.m_Capacity;
//		this->m_Size = arr.m_Size;
//
//		//���
//		this->pAddress = new T[arr.m_Capacity];
//
//		//��arr�����ݶ���������
//		for (int i = 0; i < this->m_Size; i++)
//		{
//			this->pAddress[i] = arr.pAddress[i];
//		}
//	}
//#pragma endregion ��������
//
//#pragma region 3.
//	//operator=��ֹǳ����������
//	MyArray& operator=(const MyArray& arr)
//	{
//		cout << "MyArray��operator=�ĵ���" << endl;
//
//		//���ж�ԭ�������Ƿ������ݣ���������ͷ�
//		if (this->pAddress != NULL)
//		{
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//			this->m_Capacity = 0;
//			this->m_Size = 0;
//		}
//
//		//���
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
//	//��������
//	~MyArray()
//	{
//
//		if (this->pAddress != NULL)
//		{
//			cout << "MyArray�� ��������" << endl;
//			delete[] this->pAddress;
//			this->pAddress = NULL;
//		}
//
//	}
//#pragma endregion ��������
//
//#pragma region 5.
//	void Push_Back(const T& val)
//	{
//		cout << "β�巨��������" << endl;
//
//		//�ж�������С
//		if (this->m_Capacity == this->m_Size)
//		{
//			return;
//		}
//		this->pAddress[this->m_Size] = val; //������ĩβ��������
//		this->m_Size++; //���������С
//	}
//#pragma endregion β�巨
//
//#pragma region 6.
//	void Pop_Back(const T& val)
//	{
//		cout << "βɾ����������" << endl;
//
//		//�߼�ɾ�������û����ʲ������һ��Ԫ��
//		if (this->m_Size == 0)
//		{
//			cout << "�������ѿ�" << endl;
//			return;
//		}
//		for (int i = 0; i < val; i++)
//		{
//			this->m_Size--; //���������С
//		}
//
//	}
//#pragma endregion βɾ��
//
//#pragma region 7.
//	//��Ҫ������һ��������[]
//	T& operator[](int index)
//	{
//		return this->pAddress[index];
//	}
//
//	//�������������
//	int getCapacity()
//	{
//		return this->m_Capacity;
//	}
//
//	//��������Ĵ�С
//	int getSize()
//	{
//		return this->m_Size;
//	}
//#pragma endregion ͨ���±귽ʽ���������е�Ԫ��
//
//};