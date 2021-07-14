#include<iostream>
#include<string>
#define MAX 100//定义通讯录上限，便于修改
using namespace std;

//定义函数：显示菜单界面
void show_menu()
{
	cout << "**************************" << endl;
	cout << "******  1.添加联系人 *****" << endl;
	cout << "******  2.显示联系人 *****" << endl;
	cout << "******  3.删除联系人 *****" << endl;
	cout << "******  4.查找联系人 *****" << endl;
	cout << "******  5.修改联系人 *****" << endl;
	cout << "******  6.清空联系人 *****" << endl;
	cout << "******  0.退出系统   *****" << endl;
	cout << "**************************" << endl;
}

//联系人结构体
struct Person
{
	string m_name;
	string m_gender;
	int m_age;
	string m_phone;
	string m_address;
};

//通讯录结构体
struct AddressBooks
{
	Person person_array[MAX];//联系人数组
	int m_size;//通讯录当前联系人个数
};


//定义函数：添加联系人
void add_person(AddressBooks* abs)
{
	//先判断通讯录是否已满，满了不再添加
	if (abs->m_size == MAX)
	{
		cout << "通讯录已满，无法添加！" << endl;
		return;
	}
	else//添加具体联系人
	{
		//姓名
		string name;
		cout << "请输入姓名： " << endl;
		cin >> name;
		abs->person_array[abs->m_size].m_name = name;

		//性别
		int gender_num = 0;
		string gender;

		cout << "请输入性别： " << endl;
		cout << "1----男" << endl;
		cout << "2----女" << endl;
		while (true)
		{
			//如果输入的是1或2，可以退出循环
			//如果输入有误，重新输入
			cin >> gender_num;
			if (gender_num == 1 || gender_num == 2)
			{
				gender = (gender_num == 1 ? "男" : "女");
				abs->person_array[abs->m_size].m_gender = gender;
				break;
			}
			cout << "输入有误，请重新输入！" << endl;
		}

		//年龄
		cout << "请输入年龄： " << endl;
		int age = 0;
		cin >> age;
		abs->person_array[abs->m_size].m_age = age;

		//电话
		cout << "请输入电话： " << endl;
		string phone;
		cin >> phone;
		abs->person_array[abs->m_size].m_phone = phone;

		//地址
		cout << "请输入地址： " << endl;
		string address;
		cin >> address;
		abs->person_array[abs->m_size].m_address = address;

		abs->m_size++;
		cout << "您添加成功" << endl;
		system("pause");//按任意键继续
		system("cls");//清屏
	}
}

//定义函数：显示联系人
void show_person(AddressBooks* abs)
{
	//判断通讯录人数是否为0，并给出提示
	if (abs->m_size == 0)
	{
		cout << "*** 当前记录为空 ***" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "姓名： " << abs->person_array[i].m_name << "\t";
			cout << "性别： " << abs->person_array[i].m_gender << "\t";
			cout << "年龄： " << abs->person_array[i].m_age << "\t";
			cout << "电话： " << abs->person_array[i].m_phone << "\t";
			cout << "地址： " << abs->person_array[i].m_address << endl;
		}
	}

	system("pause");//按任意键继续
	system("cls");//清屏

}

//定义函数：检测联系人
int detect_person(AddressBooks* abs, string name)
{
	for (int i = 0; i < abs->m_size; i++)
	{
		if (abs->person_array[i].m_name == name)
		{
			return i;
		}
		
	}
	return -1;
	system("pause");//按任意键继续
	system("cls");//清屏

}

//定义函数：删除联系人
void delete_person(AddressBooks* abs)
{
	cout << "请输入你要删除的联系人姓名： " << endl;
	string name;
	cin >> name;

	//ret为-1时代表为查找到，反之查找到了
	int ret = detect_person(abs, name);
	if (ret != -1)
	{
		cout << "***** 已查询到 *****" << endl;
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->person_array[i] = abs->person_array[i + 1];
		}
		abs->m_size--;
		cout << "***** 删除成功！ *****" << endl;
	}
	else
	{
		cout << "***** 查无此人 *****" << endl;
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

//定义函数：查找联系人
void find_person(AddressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "*** 当前记录为空 ***" << endl;
	}
	else
	{
		cout << "请输入你要查找的联系人：" << endl;
		string name;
		cin >> name;

		//判断指定的联系人是否存在通讯录中
		int ret = detect_person(abs, name);
		if (ret != -1)
		{
			cout << "***** 已查询到 *****" << endl;
			cout << "姓名： " << abs->person_array[ret].m_name << "\t";
			cout << "性别： " << abs->person_array[ret].m_gender << "\t";
			cout << "年龄： " << abs->person_array[ret].m_age << "\t";
			cout << "电话： " << abs->person_array[ret].m_phone << "\t";
			cout << "地址： " << abs->person_array[ret].m_address << endl;
		}
		else
		{
			cout << "***** 查无此人 *****" << endl;
		}
	}

	system("pause");//按任意键继续
	system("cls");//清屏
}

//定义函数：修改联系人
void modify_person(AddressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "*** 当前记录为空 ***" << endl;
	}
	else
	{
		cout << "请输入你要修改的联系人" << endl;
		string name;
		cin >> name;

		//判断指定的联系人是否存在通讯录中
		int ret = detect_person(abs, name);
		if (ret != -1)
		{
			cout << "***** 已查询到 *****" << endl;
			cout << "姓名： " << abs->person_array[ret].m_name << "\t";
			cout << "性别： " << abs->person_array[ret].m_gender << "\t";
			cout << "年龄： " << abs->person_array[ret].m_age << "\t";
			cout << "电话： " << abs->person_array[ret].m_phone << "\t";
			cout << "地址： " << abs->person_array[ret].m_address << endl;

			//接下来要修改的内容
			//修改姓名
			string name;
			cout << "请输入姓名：" << endl;
			cin >> name;
			abs->person_array[ret].m_name = name;

			//修改性别
			cout << "请输入性别： " << endl;
			cout << "1----男" << endl;
			cout << "2----女" << endl;
			int gender_num = 0;

			while (true)
			{
				cin >> gender_num;
				if (gender_num == 1 || gender_num == 2)
				{
					string gender = (gender_num == 1 ? "男" : "女");
					abs->person_array[ret].m_gender = gender;
					break;
				}
				cout << "输入有误，请重新输入" << endl;
			}

			//修改年龄
			cout << "请输入年龄： " << endl;
			int age;
			cin >> age;
			abs->person_array[ret].m_age = age;


			//修改电话
			cout << "请输入电话： " << endl;
			string phone;
			cin >> phone;
			abs->person_array[ret].m_phone = phone;

			//修改住址
			cout << "请输入住址： " << endl;
			string address;
			cin >> address;
			abs->person_array[ret].m_address = address;
		}
		else
		{
			cout << "***** 查无此人 *****" << endl;
		}
	}
	system("pause");//按任意键继续
	system("cls");//清屏
}

//定义函数：清空联系人
void clear_person(AddressBooks* abs)
{
	abs->m_size = 0;
	cout << "通讯录已清空！" << endl;
	system("pause");//按任意键继续
	system("cls");//清屏
}

int main()
{
	AddressBooks abs;//创建通讯录结构体变量
	abs.m_size = 0;//初始化通讯录中当前人员个数

	int select = 0;//创建用户输入的变量

	while (true)
	{
		show_menu();//菜单的调用

		cin >> select;//用户输入功能

		switch (select)
		{
		case 0://退出系统
			cout << "欢迎下次使用" << endl;
			return 0;
			break;
		case 1://添加联系人
			add_person(&abs);
			break;
		case 2://显示联系人
			show_person(&abs);
			break;
		case 3://删除联系人
			delete_person(&abs);
			break;
		case 4://查找联系人
			find_person(&abs);
			break;
		case 5://修改联系人
			modify_person(&abs);
			break;
		case 6://清空联系人
			clear_person(&abs);
			break;
		default:
			break;

		}
	}
	return 0;
}