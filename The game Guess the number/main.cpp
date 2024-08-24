#include <iostream>
#include <cstdlib>
#include <ctime>

int main()
{
	std::srand(std::time(0));

	int number = std::rand() % 100 + 1;

	int guess;
	int attempts = 0;

	std::cout << "Guess the number (1-100): ";
	do 
	{
		std::cin >> guess;
		++attempts;

		if (guess > number)
		{
			std::cout << "Too high! Try again: ";
		}
		else if (guess < number)
		{
			std::cout << "Too low! Try again: ";
		}
		else
		{
			std::cout << "Congratulations! You guessed the number in  " << attempts << " attempts." << std::endl;
		}
	} while (guess != number);

	return 0;
}