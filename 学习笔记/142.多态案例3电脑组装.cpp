//#include<iostream>
//#include<string>
//using namespace std;
//
//
//class CPU {
//public:
//	virtual void calculate() = 0;
//};
//
//class VideoCard {
//public:
//	virtual void display() = 0;
//};
//
//class Memory {
//public:
//	virtual void storage() = 0;
//};
//
//class Computer {
//private:
//	CPU* m_cpu;
//	VideoCard* m_vc;
//	Memory* m_mem;
//public:
//	Computer(CPU* cpu, VideoCard* vc, Memory* mem) {
//		m_cpu = cpu;
//		m_vc = vc;
//		m_mem = mem;
//	}
//
//	void work() {
//		m_cpu->calculate();
//		m_vc->display();
//		m_mem->storage();
//	}
//
//	~Computer() {
//
//		if (m_cpu != NULL) {
//			delete m_cpu;
//			m_cpu = NULL;
//		}
//
//		if (m_vc != NULL) {
//			delete m_vc;
//			m_vc = NULL;
//		}
//
//		if (m_mem != NULL) {
//			delete m_mem;
//			m_mem = NULL;
//		}
//	}
//};
//
//class IntelCPU :public CPU {
//public:
//	virtual void calculate() {
//		cout << "Intel CPU��ʼ���㣡" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard {
//public:
//	virtual void display() {
//		cout << "Intel �Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class IntelMemory :public Memory {
//public:
//	virtual void storage() {
//		cout << "Intel �ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//class LenovoCPU :public CPU {
//public:
//	virtual void calculate() {
//		cout << "Lenovo CPU��ʼ���㣡" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard {
//public:
//	virtual void display() {
//		cout << "Lenovo �Կ���ʼ��ʾ��" << endl;
//	}
//};
//
//class LenovoMemory :public Memory {
//public:
//	virtual void storage() {
//		cout << "Lenovo �ڴ�����ʼ�洢��" << endl;
//	}
//};
//
//
//void test01() {
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "��һ̨���Կ�ʼ������" << endl;
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "�ڶ�̨���Կ�ʼ������" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "����̨���Կ�ʼ������" << endl;
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}
//
//int main(){
//	test01();
//	//system("cls"); //����
//	return 0;
//}