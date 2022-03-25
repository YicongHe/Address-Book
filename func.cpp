#include"func.h"

void showmenu()
{
	cout << "1.添加联系人" << endl;
	cout << "2.显示联系人" << endl;
	cout << "3.删除联系人" << endl;
	cout << "4.查找联系人" << endl;
	cout << "5.修改联系人" << endl;
	cout << "6.清空联系人" << endl;
	cout << "0.退出通讯录" << endl;
}
void addcon(addressbook* p)
{
	if (p->size == MAX)
	{
		cout << "通讯录人数已达上限！" << endl;
	}
	else
	{
		cout << "请输入联系人姓名：";
		cin >> p->carr[p->size].name;
		cout << "请输入联系人电话号码：";
		cin >> p->carr[p->size].phonenum;
		p->size++;
		cout << "添加成功" << endl;
		system("pause");
		system("cls");//清屏
	}
}
void showcon(addressbook* p)
{
	if (p->size == 0)
	{
		cout << "暂无数据" << endl;
	}
	else
	{
		for (int i = 0; i < p->size; i++)
		{
			cout <<"姓名"<< p->carr[i].name << "\t"
				 <<"电话号码" << p->carr[i].phonenum << endl;
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
		cout << "删除成功" << endl;
	}	
	system("pause");
	system("cls");
}
void findcon(addressbook* p)
{
	cout << "请输入要查找的联系人" << endl;
	string name;
	cin >> name;
	if (p->size == 0)
	{
		cout << "暂无数据" << endl;
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
				cout << "查无此人" << endl;
			}
		}

	}
	system("pause");
	system("cls");
}
void upgcon(addressbook* p)
{
	cout << "请输入要更改的联系人" << endl;
	string name;
	cin >> name;
	for (int i = 0; i < p->size; i++)
	{
		if (name == p->carr[i].name)
		{
			cout << "请输入新的联系方式" << endl;
			cin >> p->carr[i].phonenum;
			cout << "更新成功" << endl;
		}
		else
		{
			cout << "请输入正确的联系人" << endl;
		}
	}
	system("pause");
	system("cls");
}
void resetcon(addressbook* p)
{
	cout << "您将删除全部数据，确认无误请按0" << endl;
	bool y = 1;
	cin >> y;
	if (y == 0)
	{
		p->size = 0;
		cout << "已删除全部数据，感谢使用本程序" << endl;
	}
	else
	{
	}
	system("pause");
	system("cls");
}


