#include<iostream>
#include <vector>
#include <string>
std::vector<int> getCoins();
double retMoney(std::vector<int> coinQuant);
const std::vector <std::string> coinTypes = {"Pennies", "Nickles", "Dimes", "Quarters", "Loonies"};
const std::vector <double> coinVals = { 0.01,0.05,0.1,0.25,1 };

int main(int argc, char** argv)
{
	std::vector<int> coinQuant=getCoins();
	std::cout << "The value of all your coins is $" << retMoney(coinQuant) << "\n";
}

std::vector<int> getCoins()
{
	int num;
	std::vector<int> coinQuant;
	for (int i = 0; i < coinTypes.size(); i++)
	{
		std::cout << "How many " << coinTypes[i] << " do you have? ";
		std::cin >> num;
		coinQuant.push_back(num);
	}
	return coinQuant;
}

double retMoney(std::vector<int> coinQuant)
{
	double total = 0;
	for (int i = 0; i < coinTypes.size(); i++)
	{
		std::cout << "You have " << coinQuant[i] << " " << coinTypes[i] << "\n";
		total += coinVals[i] * coinQuant[i];
	}
	return total;
}