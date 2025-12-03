#include "../Include/Console.hpp"
#include <conio.h>  

namespace BenScr {
	std::string Console::ReadLine() {
		std::string input;
		std::getline(std::cin, input);
		return input;
	}

	char Console::ReadKey() {
		return _getch();
	}

	void Console::Clear() {
		{
#ifdef _WIN32
			system("cls");
#else
			system("clear");
#endif
		}
	}
}