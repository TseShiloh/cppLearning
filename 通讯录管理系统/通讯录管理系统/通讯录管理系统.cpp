#include<iostream>
#include<string>
#define MAX 100//����ͨѶ¼���ޣ������޸�
using namespace std;

//���庯������ʾ�˵�����
void show_menu()
{
	cout << "**************************" << endl;
	cout << "******  1.�����ϵ�� *****" << endl;
	cout << "******  2.��ʾ��ϵ�� *****" << endl;
	cout << "******  3.ɾ����ϵ�� *****" << endl;
	cout << "******  4.������ϵ�� *****" << endl;
	cout << "******  5.�޸���ϵ�� *****" << endl;
	cout << "******  6.�����ϵ�� *****" << endl;
	cout << "******  0.�˳�ϵͳ   *****" << endl;
	cout << "**************************" << endl;
}

//��ϵ�˽ṹ��
struct Person
{
	string m_name;
	string m_gender;
	int m_age;
	string m_phone;
	string m_address;
};

//ͨѶ¼�ṹ��
struct AddressBooks
{
	Person person_array[MAX];//��ϵ������
	int m_size;//ͨѶ¼��ǰ��ϵ�˸���
};


//���庯���������ϵ��
void add_person(AddressBooks* abs)
{
	//���ж�ͨѶ¼�Ƿ����������˲������
	if (abs->m_size == MAX)
	{
		cout << "ͨѶ¼�������޷���ӣ�" << endl;
		return;
	}
	else//��Ӿ�����ϵ��
	{
		//����
		string name;
		cout << "������������ " << endl;
		cin >> name;
		abs->person_array[abs->m_size].m_name = name;

		//�Ա�
		int gender_num = 0;
		string gender;

		cout << "�������Ա� " << endl;
		cout << "1----��" << endl;
		cout << "2----Ů" << endl;
		while (true)
		{
			//����������1��2�������˳�ѭ��
			//�������������������
			cin >> gender_num;
			if (gender_num == 1 || gender_num == 2)
			{
				gender = (gender_num == 1 ? "��" : "Ů");
				abs->person_array[abs->m_size].m_gender = gender;
				break;
			}
			cout << "�����������������룡" << endl;
		}

		//����
		cout << "���������䣺 " << endl;
		int age = 0;
		cin >> age;
		abs->person_array[abs->m_size].m_age = age;

		//�绰
		cout << "������绰�� " << endl;
		string phone;
		cin >> phone;
		abs->person_array[abs->m_size].m_phone = phone;

		//��ַ
		cout << "�������ַ�� " << endl;
		string address;
		cin >> address;
		abs->person_array[abs->m_size].m_address = address;

		abs->m_size++;
		cout << "����ӳɹ�" << endl;
		system("pause");//�����������
		system("cls");//����
	}
}

//���庯������ʾ��ϵ��
void show_person(AddressBooks* abs)
{
	//�ж�ͨѶ¼�����Ƿ�Ϊ0����������ʾ
	if (abs->m_size == 0)
	{
		cout << "*** ��ǰ��¼Ϊ�� ***" << endl;
	}
	else
	{
		for (int i = 0; i < abs->m_size; i++)
		{
			cout << "������ " << abs->person_array[i].m_name << "\t";
			cout << "�Ա� " << abs->person_array[i].m_gender << "\t";
			cout << "���䣺 " << abs->person_array[i].m_age << "\t";
			cout << "�绰�� " << abs->person_array[i].m_phone << "\t";
			cout << "��ַ�� " << abs->person_array[i].m_address << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����

}

//���庯���������ϵ��
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
	system("pause");//�����������
	system("cls");//����

}

//���庯����ɾ����ϵ��
void delete_person(AddressBooks* abs)
{
	cout << "��������Ҫɾ������ϵ�������� " << endl;
	string name;
	cin >> name;

	//retΪ-1ʱ����Ϊ���ҵ�����֮���ҵ���
	int ret = detect_person(abs, name);
	if (ret != -1)
	{
		cout << "***** �Ѳ�ѯ�� *****" << endl;
		for (int i = ret; i < abs->m_size; i++)
		{
			abs->person_array[i] = abs->person_array[i + 1];
		}
		abs->m_size--;
		cout << "***** ɾ���ɹ��� *****" << endl;
	}
	else
	{
		cout << "***** ���޴��� *****" << endl;
	}
	system("pause");//�����������
	system("cls");//����
}

//���庯����������ϵ��
void find_person(AddressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "*** ��ǰ��¼Ϊ�� ***" << endl;
	}
	else
	{
		cout << "��������Ҫ���ҵ���ϵ�ˣ�" << endl;
		string name;
		cin >> name;

		//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
		int ret = detect_person(abs, name);
		if (ret != -1)
		{
			cout << "***** �Ѳ�ѯ�� *****" << endl;
			cout << "������ " << abs->person_array[ret].m_name << "\t";
			cout << "�Ա� " << abs->person_array[ret].m_gender << "\t";
			cout << "���䣺 " << abs->person_array[ret].m_age << "\t";
			cout << "�绰�� " << abs->person_array[ret].m_phone << "\t";
			cout << "��ַ�� " << abs->person_array[ret].m_address << endl;
		}
		else
		{
			cout << "***** ���޴��� *****" << endl;
		}
	}

	system("pause");//�����������
	system("cls");//����
}

//���庯�����޸���ϵ��
void modify_person(AddressBooks* abs)
{
	if (abs->m_size == 0)
	{
		cout << "*** ��ǰ��¼Ϊ�� ***" << endl;
	}
	else
	{
		cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
		string name;
		cin >> name;

		//�ж�ָ������ϵ���Ƿ����ͨѶ¼��
		int ret = detect_person(abs, name);
		if (ret != -1)
		{
			cout << "***** �Ѳ�ѯ�� *****" << endl;
			cout << "������ " << abs->person_array[ret].m_name << "\t";
			cout << "�Ա� " << abs->person_array[ret].m_gender << "\t";
			cout << "���䣺 " << abs->person_array[ret].m_age << "\t";
			cout << "�绰�� " << abs->person_array[ret].m_phone << "\t";
			cout << "��ַ�� " << abs->person_array[ret].m_address << endl;

			//������Ҫ�޸ĵ�����
			//�޸�����
			string name;
			cout << "������������" << endl;
			cin >> name;
			abs->person_array[ret].m_name = name;

			//�޸��Ա�
			cout << "�������Ա� " << endl;
			cout << "1----��" << endl;
			cout << "2----Ů" << endl;
			int gender_num = 0;

			while (true)
			{
				cin >> gender_num;
				if (gender_num == 1 || gender_num == 2)
				{
					string gender = (gender_num == 1 ? "��" : "Ů");
					abs->person_array[ret].m_gender = gender;
					break;
				}
				cout << "������������������" << endl;
			}

			//�޸�����
			cout << "���������䣺 " << endl;
			int age;
			cin >> age;
			abs->person_array[ret].m_age = age;


			//�޸ĵ绰
			cout << "������绰�� " << endl;
			string phone;
			cin >> phone;
			abs->person_array[ret].m_phone = phone;

			//�޸�סַ
			cout << "������סַ�� " << endl;
			string address;
			cin >> address;
			abs->person_array[ret].m_address = address;
		}
		else
		{
			cout << "***** ���޴��� *****" << endl;
		}
	}
	system("pause");//�����������
	system("cls");//����
}

//���庯���������ϵ��
void clear_person(AddressBooks* abs)
{
	abs->m_size = 0;
	cout << "ͨѶ¼����գ�" << endl;
	system("pause");//�����������
	system("cls");//����
}

int main()
{
	AddressBooks abs;//����ͨѶ¼�ṹ�����
	abs.m_size = 0;//��ʼ��ͨѶ¼�е�ǰ��Ա����

	int select = 0;//�����û�����ı���

	while (true)
	{
		show_menu();//�˵��ĵ���

		cin >> select;//�û����빦��

		switch (select)
		{
		case 0://�˳�ϵͳ
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
			break;
		case 1://�����ϵ��
			add_person(&abs);
			break;
		case 2://��ʾ��ϵ��
			show_person(&abs);
			break;
		case 3://ɾ����ϵ��
			delete_person(&abs);
			break;
		case 4://������ϵ��
			find_person(&abs);
			break;
		case 5://�޸���ϵ��
			modify_person(&abs);
			break;
		case 6://�����ϵ��
			clear_person(&abs);
			break;
		default:
			break;

		}
	}
	return 0;
}