#include "56785.cpp"
void foo(Account a){}
int main(){
	Account a("Xristos",5, 500.0);
	a.withdrawal(1000.0);
	foo(a);
	a.withdrawal(400.0);
	foo(a);
	a.withdrawal(50.0);
	return 0;
}
