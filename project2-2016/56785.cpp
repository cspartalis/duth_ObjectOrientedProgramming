//56785
#include <iostream>
#include <cstring>
using namespace std;

class Account{
	char name[100];
	int accNum;
	double rest;
	double mov;
public:
	Account(const char onoma[100], int arLog, double upol);
	Account(const char onoma[100]);
	~Account();
	void print();
	int get_id();
	double get_balance();
	void withdrawal(double p);
	void transfer(Account &obj,double t);
};

inline Account::Account(const char onoma[100], int arLog, double upol){
	strcpy(name, onoma);
	accNum = arLog;
	rest = upol;
	mov=0;
}

inline Account::Account(const char onoma[100]){
	strcpy(name, onoma);
	accNum=0;
	rest=0;
	mov=0;
}

void Account::print(){
	cout<<name<<" account "<<accNum<<" has "<<rest<<" euro";
}

int Account::get_id(){
	return accNum;
}

double Account::get_balance(){
	return rest;
}

void Account::withdrawal(double p){
	if (p<=rest && p<=420){
		rest-=p;
		mov+=p;
	}
}


void Account::transfer(Account &obj,double t){
	rest-=t;
	obj.rest+=t;
	mov+=t;
}

Account::~Account(){
	if (mov>420)
		cout<<name<<" pockets are full!";
	else if (mov>0)
		cout<<name<<" pockets are empty!";
	else
		cout<<"Bye bye!";
}
