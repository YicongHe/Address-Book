#include"func.h"

int main(){
	addressbook adb;
	adb.size = 0;
	int select;
	while (1){
		showmenu();
		cin >> select;
		switch (select)
		{
		case 1:
			addcon(&adb);
			break;
		case 2:
			showcon(&adb);
			break;
		case 3:
		{
			string delname;
			cout << "������Ҫɾ������ϵ������" << endl;
			cin >> delname;
			int x = 0;
			x = whe_exi(&adb, delname);
			if (x == -1)
			{
				cout << "���޴���" << endl;
				system("pause");
				system("cls");
			}
			else
			{
				delcon(&adb, x);
			}
		}
			break;
		case 4:
			findcon(&adb);
			break;
		case 5:
			upgcon(&adb);
			break;
		case 6:
			resetcon(&adb);
			break;
		case 0:
			cout << "��ӭ�´�ʹ��" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	};



}