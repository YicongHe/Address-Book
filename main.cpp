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
			cout << "请输入要删除的联系人姓名" << endl;
			cin >> delname;
			int x = 0;
			x = whe_exi(&adb, delname);
			if (x == -1)
			{
				cout << "查无此人" << endl;
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
			cout << "欢迎下次使用" << endl;
			system("pause");
			return 0;
		default:
			break;
		}
	};



}