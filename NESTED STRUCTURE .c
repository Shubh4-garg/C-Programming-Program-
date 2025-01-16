//NESTED STRUCTURE.................
#include <stdio.h>
struct add{
	char city[35];
	int pin;
};
struct name { 
	int roll;
	char name[50];
	struct add s1;
};
int main() {
	struct name a1={20,"Ajay",{"Noida", 202222}};
	printf("Roll: %d\n",a1.roll);
	printf("Name: %s\n",a1.name);
	printf("City: %s\n",a1.s1.city);
	printf("Pin: %d\n",a1.s1.pin);
}