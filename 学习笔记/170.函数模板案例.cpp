////利用函数模板封装一个排序的函数，可以对不同数据类型数组进行排序
////排序规则从大到小，排序算法为选择排序
////分别利用char数组和int数组进行测试
//
//#include<iostream>
//using namespace std;
//
////交换函数模版
//template<typename T>
//void mySwap(T& a, T& b) {
//	T temp = a;
//	a = b;
//	b = temp;
//}
//
////排序算法模版
//template<typename T>
//void mySort(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		int max = i;//设定一个最大值下标
//		for (int j = i + 1; j < len; j++) {
//			if (arr[max] < arr[j]) {
//				max = j; //更新最大值下标
//			}
//		}
//		if (max != i) {
//			//交换max和i元素
//			mySwap(arr[max], arr[i]); //此时把最大值放在最前面
//		}
//	}
//}
//
//
////打印数组模版
//template<typename T>
//void printArr(T arr[], int len) {
//	for (int i = 0; i < len; i++) {
//		cout << arr[i] << " ";
//	}
//	cout << endl;
//}
//
//void test01() {
//	//测试char数组
//	char charArr[] = "ABCDEFabcdef";
//	int num = sizeof(charArr) / sizeof(char);
//	mySort(charArr, num);
//	printArr(charArr, num);
//}
//
//void test02() {
//	//测试int数组
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