//#include<iostream>
//
//using namespace std;
//
////����ģ��
//template<typename T> 
////����һ��ģ�壬���߱�������������н����ŵ�T��Ҫ����
////T��һ��ͨ����������
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
//void test01() {
//	int a = 10;
//	int b = 20;
//
//	//���ú���ģ������������ݽ���
//	//���ַ�ʽ
//	//1.�Զ������Ƶ�
//	mySwap(a, b);
//
//	//2.��ʾָ������
//	mySwap<int>(a, b);
//
//	cout << "a = " << a << endl;
//	cout << "b = " << b << endl;
//
//}
//int main() {
//	test01();
//	return 0;
//}