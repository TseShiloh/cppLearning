//#include<iostream>
//#include<string>
//#include<vector>
//#include<algorithm>//��׼�㷨ͷ�ļ�
//using namespace std;
//
//void myPrint(int val)
//{
//	cout << val << endl;
//}
//
//void test01()
//{
//	//������һ��vector����������
//	vector<int> v;
//
//	//�������в�������
//	v.push_back(10);
//	v.push_back(20);
//	v.push_back(30);
//	v.push_back(40);
//
//	//ͨ�����������������е�����
//
//	
//#pragma region 1.
//	//��һ�ֱ�����ʽ
//	vector<int>::iterator itBegin = v.begin();
//	//����begin()����ʼ��������ָ�������е�һ��Ԫ��
//	vector<int>::iterator itEnd = v.end();
//	//����end()�ǽ�����������ָ�����������һ��Ԫ�ص���һ��λ��
//	while (itBegin != itEnd)
//	{
//		cout << *itBegin << endl;
//		itBegin++;
//	}
//#pragma endregion ��һ�ֱ�����ʽ
//
//#pragma region 2.
//	//�ڶ��ֱ�����ʽ
//	for (vector<int>::iterator it = v.begin(); it != v.end(); it++)
//	{
//		cout << *it << endl;
//	}
//#pragma endregion �ڶ��ֱ�����ʽ
//
//#pragma region 3.
//	//�����ֱ�����ʽ������STL�ṩ�����㷨��������Ҫ����ͷ�ļ�algorithm
//	for_each(v.begin(), v.end(), myPrint);
//#pragma endregion �����ֱ�����ʽ
//}
//
//int main()
//{
//	test01();
//	return 0;
//}