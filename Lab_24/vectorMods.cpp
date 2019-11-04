#include<iostream>
#include<algorithm>
#include<vector>
#include<string>
std::vector<int> initData(int len);
void printVect(std::vector<int> vect);
int main()
{
	std::vector<int> data = initData(10);
	printVect(data);
	std::sort(data.begin(), data.end());
	std::cout << "Used std::sort\n";
	printVect(data);
	std::reverse(data.begin(), data.end());
	std::cout << "Used std::reverse\n";
	printVect(data);
	std::fill(data.begin(), data.end(), data[0]);
	std::cout << "Used std::fill\n";
	printVect(data);
}
void printVect(std::vector<int> vect)
{
	for (int val : vect)
	{
		std::cout << val << " ";
	}
}
std::vector<int> initData(int len)
{
	std::vector<int> rets;
	for (int i = 0; i < len; i++)
	{
		rets.push_back((i+99)*12 % 100);
	}
}
