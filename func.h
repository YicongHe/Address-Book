#include<iostream>
#include<string>
constexpr auto MAX = 1000;
using namespace std;

void showmenu();
struct cont
{
	string name;
	string phonenum;
};
struct addressbook
{
	cont carr[MAX];
	int size;
};
void addcon(addressbook* p);
void showcon(addressbook* p);
int whe_exi(addressbook* p, string delname);
void delcon(addressbook* p, int x);
void findcon(addressbook* p);
void upgcon(addressbook* p);
void resetcon(addressbook* p);





