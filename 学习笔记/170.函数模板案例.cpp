////���ú���ģ���װһ������ĺ��������ԶԲ�ͬ�������������������
////�������Ӵ�С�������㷨Ϊѡ������
////�ֱ�����char�����int������в���
//
//#include<iostream>
//using namespace std;
//
////��������ģ��
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////�����㷨ģ��
//template<typename T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;//�趨һ�����ֵ�±�
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j; //�������ֵ�±�
//			}
//		}
//		if (max != i) {
//			//����max��iԪ��
//			mySwap(arr[max], arr[i]); //��ʱ�����ֵ������ǰ��
//		}
//	}
//}
//
//
////��ӡ����ģ��
//template<typename T>
//void printArr(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	//����char����
//	char charArr[] = "ABCDEFabcdef";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArr(charArr, num);
//}
//
//void test02() {
//	//����int����
//	int intArr[] = { 2,3,0,9,4,7,5,8 };
//	int num = sizeof(intArr) / sizeof(int);
//	mySort(intArr, num);
//	printArr(intArr, num);
//}
//
//int main() {
//	test01();
//	test02();
//	return 0;
//}