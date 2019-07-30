#include <iostream>
#include <cstring>
#include "56785.cpp"
using namespace std;

int main(){
Car c,b;
char marka[99];
char pinakida[99];
strcpy (marka, "Corsa");
strcpy (pinakida, "XrI 1234");

c.print();
c.set(marka, pinakida);
c.print();

Car a= trade(c,b);
a.print();


return 0;
}