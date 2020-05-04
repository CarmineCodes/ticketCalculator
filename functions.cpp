//functions

#include"doFunctions.h"
#include<string>

string getName()
{
	cout << "Enter your name" << endl;
	string name;
	cin >> name;
	return name;
}

int getAge()
{
	cout << "Enter your age" << endl;
	int age=0;
	cin >> age;
	return age;
}

double getTicketPrice(int age)
{
	//calculates ticekt price from age input
	double ticket_Price = 0;
	double total = 0;

	if (age <= 13)
	{
		ticket_Price = 9.99;
	}
	else if (age > 13 && age < 65)
	{
		ticket_Price = 19.99;
	}
	else if(age > 65)
	{
		ticket_Price = 12.99;
	}

	total = (ticket_Price);
	
	return total;
}

	void writeTicket(string name, int age, double total)
{
	
	cout << "Your Ticket" << endl;
	cout << "Your Name: " << name << endl;
	cout << "Your Age: " << age << endl;
	cout << "Ticket Price: " << total << endl;
	
	
}

