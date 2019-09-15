#include<iostream>
#include<iomanip>
void main()
{
	float vects[2][3];
	float cross[3];
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			std::cout << "For vector " << i + 1 << ", input the vector value at index: " << j;
			cin >> vects[i, j];
		}
	}
	cross[0] = vects[0, 1] * vects[1, 2] - vects[1, 1] * vects[0, 2];
	cross[1] = -1*(vects[0, 0] * vects[1, 2] - vects[1, 0] * vects[0, 2]);
	cross[2] = vects[0, 0] * vects[1, 1] - vects[1, 0] * vects[0, 1cross[0] = vects[0, 1] * vects[1, 2] - vects[1, 1] * vects[0, 2];

	std::cout << "\n(" << vects[0][0] << "," << vects[0][1] << "," << vects[0][2] << ") crossed with ("
		<< vects[1][0] << "," << vects[2][1] << "," << vects[3][2] << ") is ("
		<< cross[0] << "," << cross[1] << "," << cross[2] << ")";
}