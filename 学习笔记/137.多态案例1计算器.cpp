//#include<iostream>
//#include<string>
//using namespace std;
//
//class Calculator
//{
//public:
//	int m_num1;
//	int m_num2;
//public:
//	int getResult(string oper)
//	{
//		if (oper == "+")
//		{
//			return m_num1 + m_num2;
//		}
//		else if (oper == "-")
//		{
//			return m_num1 - m_num2;
//		}
//		else if (oper == "*")
//		{
//			return m_num1 * m_num2;
//		}
//	}
//};
//
//void test01()
//{
//	//��������������
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 10;
//	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;
//}
//
////���ö�̬ʵ�ּ�����
////ʵ�ּ�����������
//class AbstractCalculator
//{
//public:
//	int m_num1;
//	int m_num2;
//public:
//	virtual int getResult()
//	{
//		return 0;
//	}
//};
//
////�ӷ���������
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
////������������
//class SubtractCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
////�˷���������
//class MultiplyCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 * m_num2;
//	}
//};
//
//void test02()
//{
//	//��̬ʹ������
//	//����ָ���������ָ���������
//
//	//�ӷ�����
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//���������
//
//	abc = new SubtractCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//���������
//
//	abc = new MultiplyCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//���������
//
//
//}
//
//int main()
//{
//	test01();
//	test02();
//	return 0;
//}
////����ʵ�������ᳫ����ԭ�򣬶���չ���п��ţ����޸Ľ��йرա�