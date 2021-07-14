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
//		cout << "Intel CPU开始计算！" << endl;
//	}
//};
//
//class IntelVideoCard :public VideoCard {
//public:
//	virtual void display() {
//		cout << "Intel 显卡开始显示！" << endl;
//	}
//};
//
//class IntelMemory :public Memory {
//public:
//	virtual void storage() {
//		cout << "Intel 内存条开始存储！" << endl;
//	}
//};
//
//class LenovoCPU :public CPU {
//public:
//	virtual void calculate() {
//		cout << "Lenovo CPU开始计算！" << endl;
//	}
//};
//
//class LenovoVideoCard :public VideoCard {
//public:
//	virtual void display() {
//		cout << "Lenovo 显卡开始显示！" << endl;
//	}
//};
//
//class LenovoMemory :public Memory {
//public:
//	virtual void storage() {
//		cout << "Lenovo 内存条开始存储！" << endl;
//	}
//};
//
//
//void test01() {
//	CPU* intelCpu = new IntelCPU;
//	VideoCard* intelCard = new IntelVideoCard;
//	Memory* intelMem = new IntelMemory;
//
//	cout << "第一台电脑开始工作：" << endl;
//	Computer* computer1 = new Computer(intelCpu, intelCard, intelMem);
//	computer1->work();
//	delete computer1;
//
//	cout << "-----------------------" << endl;
//	cout << "第二台电脑开始工作：" << endl;
//	Computer* computer2 = new Computer(new LenovoCPU, new LenovoVideoCard, new LenovoMemory);;
//	computer2->work();
//	delete computer2;
//
//	cout << "-----------------------" << endl;
//	cout << "第三台电脑开始工作：" << endl;
//	Computer* computer3 = new Computer(new LenovoCPU, new IntelVideoCard, new LenovoMemory);;
//	computer3->work();
//	delete computer3;
//
//}
//
//int main(){
//	test01();
//	//system("cls"); //清屏
//	return 0;
//}