#include"func.h"

void showmenu()
{
	cout << "1.�����ϵ��" << endl;
	cout << "2.��ʾ��ϵ��" << endl;
	cout << "3.ɾ����ϵ��" << endl;
	cout << "4.������ϵ��" << endl;
	cout << "5.�޸���ϵ��" << endl;
	cout << "6.�����ϵ��" << endl;
	cout << "0.�˳�ͨѶ¼" << endl;
}
void addcon(addressbook* p)
{
	if (p->size == MAX)
	{
		cout << "ͨѶ¼�����Ѵ����ޣ�" << endl;
	}
	else
	{
		cout << "��������ϵ��������";
		cin >> p->carr[p->size].name;
		cout << "��������ϵ�˵绰���룺";
		cin >> p->carr[p->size].phonenum;
		p->size++;
		cout << "��ӳɹ�" << endl;
		system("pause");
		system("cls");//����
	}
}
void showcon(addressbook* p)
{
	if (p->size == 0)
	{
		cout << "��������" << endl;
	}
	else
	{
		for (int i = 0; i < p->size; i++)
		{
			cout <<"����"<< p->carr[i].name << "\t"
				 <<"�绰����" << p->carr[i].phonenum << endl;
		}
	}
	system("pause");
	system("cls");
}
int whe_exi(addressbook* p, string delname)
{
	for (int i = 0; i < p->size; i++)
	{
		if (delname == p->carr[i].name)
		{
			return i;
		}
	}
	return -1;
}
void delcon(addressbook* p, int x)
{
	for (int i = 0; i < p->size; i++)
	{
		p->carr[x] = p->carr[x + 1];
		p->size--;
		cout << "ɾ���ɹ�" << endl;
	}	
	system("pause");
	system("cls");
}
void findcon(addressbook* p)
{
	cout << "������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;
	if (p->size == 0)
	{
		cout << "��������" << endl;
	}
	else
	{
		for (int i = 0; i < p->size; i++)
		{
			if (name == p->carr[i].name)
			{
				cout << p->carr[i].name << "\t"
					<< p->carr[i].phonenum << endl;
			}
			else
			{
				cout << "���޴���" << endl;
			}
		}

	}
	system("pause");
	system("cls");
}
void upgcon(addressbook* p)
{
	cout << "������Ҫ���ĵ���ϵ��" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < p->size; i++)
	{
		if (name == p->carr[i].name)
		{
			cout << "�������µ���ϵ��ʽ" << endl;
			cin >> p->carr[i].phonenum;
			cout << "���³ɹ�" << endl;
		}
		else
		{
			cout << "��������ȷ����ϵ��" << endl;
		}
	}
	system("pause");
	system("cls");
}
void resetcon(addressbook* p)
{
	cout << "����ɾ��ȫ�����ݣ�ȷ�������밴0" << endl;
	bool y = 1;
	cin >> y;
	if (y == 0)
	{
		p->size = 0;
		cout << "��ɾ��ȫ�����ݣ���лʹ�ñ�����" << endl;
	}
	else
	{
	}
	system("pause");
	system("cls");
}


