//#include<iostream>
//#include<string>
//#include<fstream>
//
//using namespace std;
//void test01()
//{
//	//1.����ͷ�ļ�
//
//	//2.����������
//	ifstream ifs;
//
//	//3.���ļ������ж��ļ��Ƿ�򿪳ɹ�
//	ifs.open("test.txt", ios::in);
//	if (!ifs.is_open()) {
//		cout << "�ļ���ʧ��" << endl;
//		return;
//	}
//	//4.������
//
//	////��һ�ַ�ʽ��һ���ж�ȡ
//	char buf[1024] = { 0 };
//	while (ifs >> buf) {
//		cout << buf << endl;
//	}
//
//	////�ڶ��ַ�ʽ������getline���л�ȡgetline(char* str, stream_size)
//	char buf[1024] = { 0 };
//	while ( ifs.getline(buf, sizeof(buf)) ) {
//		cout << buf << endl;
//	}
//
//	//�����ַ�ʽ��
//	string buf;
//	while ( getline(ifs, buf) ) {
//	//�˴���getline��ȫ�ֺ���
//		cout << buf << endl;
//	}
//
//	//�����ַ�ʽ��
//	char c;
//	while ((c = ifs.get()) != EOF) {
//		//EOF��end of file
//		//һ��һ���ַ���ȡ��ֱ�������ļ�β
//		cout << c;
//	}
//
//
//	//5.�ر��ļ�
//	ifs.close();
//
//}
//
//int main()
//{
//	test01();
//	return 0;
//}