//56785
using namespace std;

struct Person{
	int age;
	char name[30];
	bool adult;
};

void update (Person *var){
	if (var->age > 18)
		var->adult = true;
	else
		var->adult = false;
}

void showStage (unsigned short int a){
	if (a < 13)
		cout << "Child";
	else if (a < 19)
		cout << "Teenager";
	else
		cout << "Adult";
}

bool showStage (Person obj){
	if (obj.age < 13)
		cout << "Child";
	else if (obj.age < 19)
		cout << "Teenager";
	else
		cout << "Adult";
	return obj.adult;
}
