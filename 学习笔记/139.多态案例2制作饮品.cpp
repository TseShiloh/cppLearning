//#include <iostream>
//#include<string>
//using namespace std;
//
//class AbstractDrinking
//{
//public:
//	//��ˮ
//	virtual void boil() = 0;
//	//����
//	virtual void brew() = 0;
//	//���뱭��
//	virtual void pourincup() = 0;
//	//���븨��
//	virtual void putsomething() = 0;
//
//	//������Ʒ
//	void MakeDrink()
//	{
//		boil();
//		brew();
//		pourincup();
//		putsomething();
//	}
//};
//
////��������
//class coffee :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "��ˮ" << endl;
//	}
//	//����
//	virtual void brew()
//	{
//		cout << "���ݿ���" << endl;
//	}
//	//���뱭��
//	virtual void pourincup()
//	{
//		cout << "���뱭��" << endl;
//	}
//	//���븨��
//	virtual void putsomething()
//	{
//		cout << "�����Ǻ�ţ��" << endl;
//	}
//};
//
////���
//class tea :public AbstractDrinking
//{
//public:
//	virtual void boil()
//	{
//		cout << "���Ȫˮ" << endl;
//	}
//	//����
//	virtual void brew()
//	{
//		cout << "���ݲ�Ҷ" << endl;
//	}
//	//���뱭��
//	virtual void pourincup()
//	{
//		cout << "����豭��" << endl;
//	}
//	//���븨��
//	virtual void putsomething()
//	{
//		cout << "�������" << endl;
//	}
//};
//
////
//
//void dowork(AbstractDrinking* abc)
//{
//	abc->MakeDrink();
//	delete abc;//�ͷ�
//}
//
//void test01()
//{
//	//��������
//	dowork(new coffee); //AbstractDrinking* abc = new coffee
//
//	//������
//	dowork(new tea); //AbstractDrinking* abc = new tea
//}
//
//int main()
//{
//	test01();
//	return 0;
//}
//
