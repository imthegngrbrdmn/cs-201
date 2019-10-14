#include<iostream>

//Converts Celsius to Kelvin

double ctok(double c)
{
	double k = c + 273.15;	//needs to use a double to not lose precision
	return k;				//return int;
}

int ctokMain()
{
	double c = 0;
	std::cout << "Enter a value in C: "; //doesn't ask for input
	std::cin >> c;			//not using std:: and used wrong variable
	double k = ctok(c);		//variable was written as string
	if (k < 0) {return 0;}	//account for absolute zero
	std::cout << k << '\n';	//cout is lowercase also, not using std::
	return 0;				// missing return statement
}