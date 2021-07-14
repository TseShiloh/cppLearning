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
//	//创建计算器对象
//	Calculator c;
//	c.m_num1 = 10;
//	c.m_num2 = 10;
//	cout << c.m_num1 << " + " << c.m_num2 << " = " << c.getResult("+") << endl;
//	cout << c.m_num1 << " - " << c.m_num2 << " = " << c.getResult("-") << endl;
//	cout << c.m_num1 << " * " << c.m_num2 << " = " << c.getResult("*") << endl;
//}
//
////利用多态实现计算器
////实现计算器抽象类
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
////加法计算器类
//class AddCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 + m_num2;
//	}
//};
////减法计算器类
//class SubtractCalculator : public AbstractCalculator
//{
//public:
//	int getResult()
//	{
//		return m_num1 - m_num2;
//	}
//};
////乘法计算器类
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
//	//多态使用条件
//	//父类指针或者引用指向子类对象
//
//	//加法运算
//	AbstractCalculator* abc = new AddCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " + " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//用完后销毁
//
//	abc = new SubtractCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " - " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//用完后销毁
//
//	abc = new MultiplyCalculator;
//	abc->m_num1 = 10;
//	abc->m_num2 = 10;
//	cout << abc->m_num1 << " * " << abc->m_num2 << " = " << abc->getResult() << endl;
//	delete abc;//用完后销毁
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
////在真实开发中提倡开闭原则，对扩展进行开放，对修改进行关闭。