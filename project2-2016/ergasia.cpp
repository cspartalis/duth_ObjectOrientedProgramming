#include <iostream>
#include <cstdlib>
#include <cstring>
#include "56785.cpp"
using namespace std;

int main(){

	Account a("Giorgos",2, 600), b("Avi",1,800), c("nikos");
	a.print();
	cout<<"\n";
	b.print();
	cout<"\n\n";
	cout<<"\n";
	a.withdrawal(419.5);
	cout<<a.get_balance();
	cout<<"\n\n";
	b.transfer(a,600);
	a.print();
	cout<<"\n";
	b.print();
	cout<<"\n";
	return 0;
	
}