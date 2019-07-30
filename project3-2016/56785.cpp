//56785
#include <iostream>
#include <cstring>
#include <cctype>
using namespace std;

class Car{
	char brand[100];
	char plate[100];
public:
	Car();
	Car(const Car &ob);
	~Car() {};
	void print();
	void set(char *newBrand, char *newPlate);
	int check(char *str);
	friend Car trade(Car c1, Car c2);
};

inline Car::Car(){
	strcpy(brand,"Tesla");
	strcpy(plate,"AAA 0000");
}

Car::Car(const Car &ob){
	for (int i=0; i<100; i++) plate[i]= ob.plate[i];
	for (int i=0; i<100; i++) brand[i]= ob.brand[i];
}


void Car::print(){
	cout<<"Brand:"<<" "<<brand<<"\n";
	cout<<"Plate:"<<" "<<plate<<"\n";
}

int Car::check(char *str){
	int len= strlen(str);
	for (int i=0; i<3; i++)
		if ((str[i]<'a' || str[i]>'z') && (str[i]<'A' || str[i]>'Z'))
			return 0;
	if (str[3]!=' ')
		return 0;
	for (int i=4; i<8; i++)
		if (str[i]<'0' || str[i]>'9')
			return 0;
	if (len>8)
		return 0;
	return 1;
}


void Car::set(char *newBrand, char *newPlate){
	if (check(newPlate)==1){
		strcpy(brand, newBrand);
		strcpy(plate, newPlate);
		for (int i=0; i<3; i++)
			plate[i]= toupper(plate[i]);
	}
}

Car trade(Car c1, Car c2){
	char temp[10];
	cout << c1.plate;
	strcpy(temp, c1.plate);
	strcpy(c1.plate, c2.plate);
	strcpy(c2.plate, temp);
	return c1;
}
