#include <iostream>
#include "56785.cpp"
using namespace std;

int main (){
	Person x;
	bool b;
	
	x.age = 4;
	update (&x);
	cout << x.adult;
	
	showStage (x.age);
	
	cout << showStage(x);
	
	return 0;
}