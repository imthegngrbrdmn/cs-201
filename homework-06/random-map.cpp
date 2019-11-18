/*
Millard Arnold V
CS-201
November 17th, 2019
Homework 06, creates a histogram of different random number generators & prints them.
*/
#include <iostream>
#include <iomanip>
#include <string>
#include <map>
#include <random>
#include <stdlib.h>

int RandomBetweenU(int first, int last);
int RandomBetweenN(int first, int last);
int RandomBetween(int first, int last);
void PrintDistribution(std::map<int,int> &numbers);

int ra()//main()
{
	int min = 1;
	int max = 7;
	std::map<int, int> histU;
	for (int n = 0; n < 10000; ++n) {
		++histU[RandomBetweenU(min,max)];
	}
	std::cout << "Uniform distribution from "<<min<<" to "<<max<<"\n";
	for (auto p : histU) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	std::map<int, int> histN;
	for (int n = 0; n < 10000; ++n) {
		++histN[RandomBetweenN(min, max)];
	}
	std::cout << "Normal distribution from " << min << " to " << max << "\n";
	for (auto p : histN) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	std::map<int, int> hist;
	for (int n = 0; n < 10000; ++n) {
		++hist[RandomBetween(min, max)];
	}
	std::cout << "Random distribution from " << min << " to " << max << "\n";
	for (auto p : hist) {
		std::cout << std::fixed << std::setprecision(1) << std::setw(2)
			<< p.first << ' ' << std::string(p.second / 200, '*') << '\n';
	}
	return 0;
}

/*
Get a uniform random number between first & last
*/
int RandomBetweenU(int first, int last) 
{
	std::random_device rd;
	std::default_random_engine gen(rd());	//choose a random seed
	std::uniform_int_distribution<> dis(first, last);
	return dis(gen);

}
/*
Get a normal random number between first & last with mean of avg(first,last) and standard deviation of range/4
*/
int RandomBetweenN(int first, int last)
{
	float range = (last - first) / 2;
	std::random_device rd;
	std::default_random_engine gen(rd());	//choose a random seed
	std::normal_distribution<> dis((double)first+range, range/2);
	int value;
	while (true)
	{
		value = std::round(dis(gen));
		if (value<=last && value>=first)	//if the number is out of bounds, try again.
		{
			return value;
		}
	}
	
}
/*
Get a random number between first & last using the rand function
*/
int RandomBetween(int first, int last)
{
	return rand() % last - first + first;
}
/*
Given a map, populate with uniform random values.
*/
void PrintDistribution(std::map<int, int>& numbers)
{
	for (int n = 0; n < 10000; ++n) {
		++numbers[RandomBetweenU(1, 10)];
	}
}