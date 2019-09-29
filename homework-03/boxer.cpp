#include <iostream>
#include <string>
#include "boxer.h"

void topBottom(std::string message, int layers);	//A function to create the top and bottom of the box (because they're the same)

void printBox(std::string message, int layers)
{
	std::string begEnd(layers, '*');				//Creates a string to be the left and right edges of the box
	
	topBottom(message, layers);
	
	std::cout << begEnd;
	for (int j = 0; j < message.length()+2; j++)
	{
		std::cout << " ";
	}

	std::cout << begEnd << "\n" 
		<< begEnd << " " << message << " " << begEnd 
		<< "\n" << begEnd;
	
	for (int j = 0; j < message.length() + 2; j++)
	{
		std::cout << " ";
	}
	std::cout << begEnd << "\n";
	
	topBottom(message, layers);
}

void topBottom(std::string message, int layers)
{
	std::string begEnd(layers, '*');				//Recreates a string to be the left and right edges of the box

	for (int i = 0; i < layers; i++)
	{
		std::cout << begEnd;
		for (int j = 0; j < message.length() + 2; j++)
		{
			std::cout << "*";
		}
		std::cout << begEnd << "\n";
	}
}