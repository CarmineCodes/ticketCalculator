/*
Carmine Attanasio
BCS120 Exam
May 3, 2020
*/



#include<iostream>
#include<string>
#include"doFunctions.h"

using namespace std;

int main()
{
	string name=getName();
	int age = getAge();
	double total =getTicketPrice(age);

	cout << "---------------------------------------" << endl;
	writeTicket(name,age,total);
	

	return 0;
}