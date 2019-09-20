#include<iostream>

void mileskm() 
{
	float miles;
	std::cout << "Please enter the number of miles you would like to convert to kilometers. ";
	std::cin >> miles;
	std::cout << miles << " miles is " << miles * 1.609 << " kilometers";
}