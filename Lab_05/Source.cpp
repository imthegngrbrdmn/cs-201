#include<iostream>
void switchy();
void iffy();
void main()
{
	switchy();
}
void switchy()
{
	int i = -1;
	std::cout << "Input 0 to exit and 1,2,3 for fun! Anything else for a new line\n";
	while (i != 0)
	{
		std::cin >> i;
		switch (i)
		{
		case 0:
			break;
		case 1:
			std::cout << "This ";
			break;
		case 2:
			std::cout << "is ";
			break;
		case 3:
			std::cout << "fun!";
			break;
		default:
			std::cout << "\n";
			break;
		}
	}
}