#include <iostream>
#include <vector>
int game()
{
	std::vector<int> secrets = { 1,2,3,4 };
	std::vector<int> guesses;
	int guess;
	int bulls = 0;
	int cows = 0;
	while (true)
	{
		for (int i = 0; i < 4; i++)
		{
			std::cout << "Guess value at " << i << ": ";
			std::cin >> guess;
			guesses.push_back(guess);
		}
		for (int i=0;i<4;i++)
		{
			if (secrets[i] == guesses[i]) bulls++;
			else if (guesses[i] == secrets[0] || guesses[i] == secrets[1] || guesses[i] == secrets[2] || guesses[i] == secrets[3]) cows++;
		}
		std::cout << bulls << " bulls and " << cows << " cows\n";
		if (bulls == 4) return 0;
		cows = 0;
		bulls = 0;
		guesses.clear();
	}
}