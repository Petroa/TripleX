#include <iostream>
#include <ctime>
void StartMessage(int LevelNumber)
{
	std::cout << "Hello, you are in the Level: " << LevelNumber << std::endl;
	std::cout << "Enter the number\n";
}
bool bGameFunction(int Difficuluty)
{		
		int TestGuessA = rand() % Difficuluty + Difficuluty;
		int TestGuessB = rand() % Difficuluty + Difficuluty;
		int TestGuessC = rand() % Difficuluty + Difficuluty;

		int TestSum = TestGuessA + TestGuessB + TestGuessC;
		int TestProd = TestGuessA * TestGuessB * TestGuessC;

		// Guess Part
		int GuessA, GuessB, GuessC;
	
	
		StartMessage(Difficuluty);
	
		std::cout << "A number " << std::endl;
		std::cin >> GuessA;
		std::cout << "B number " << std::endl;
		std::cin >> GuessB;
		std::cout << "C number " << std::endl;
		std::cin >> GuessC;
		std::cout << "You entered: A = " << GuessA << std::endl;
		std::cout << "You entered: b = " << GuessB << std::endl;
		std::cout << "You entered: B = " << GuessC << std::endl;

		int GuessSum = GuessA + GuessB + GuessC;
		int GuessProd = GuessA * GuessB * GuessC;

		if (GuessSum == TestSum && GuessProd == TestProd)
		{
			std::cout << "\nYou win\n";
			return true;
		}
		else
		{
			std::cout << "\nYou Loose\n\n";
			return false;
		}	
}
int main()
{
	srand(time(NULL));
	int LevelDifficulity = 1;
	int LevelMaximum = 5;

	while (LevelMaximum >= LevelDifficulity)	
	{
		bool bChangeLevel = bGameFunction(LevelDifficulity);
		std::cin.clear();
		std::cin.ignore();

		if (bChangeLevel)
		{
			++LevelDifficulity;
		}
	}		
	std::cout << "\n ***Congratulations my frend***\n";
	return 0;
}