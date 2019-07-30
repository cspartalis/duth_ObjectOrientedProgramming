#include "56785.cpp"
int main() {
	Car a,b;
	b.set((char *)"duo",(char *)"abc 1234");

	Car c = trade(a,b);

	c.print();

	return 0;
}
