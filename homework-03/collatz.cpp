#include<iostream>
#include<vector>
int collatz();
int main()
{
	int a;
	std::cout<<"Insert a number to begin: ";
	std::cin>>a;	
	while(a>1)
		{
			std::cout<<a<<"\t";
			a=collatz(a);
		}
	return 0;
}
int collatz(int num)
{
	if(num%2==0)
	{
		return num/2;
	}
	else
	{
		return num*3+1;
	}
}
