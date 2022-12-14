#include "consoleManager.h"
#include <iostream>
#include <iomanip> //this library is needed for setw

using namespace std;

void consoleManager::printf(string color, string text)
{
	cout << "\033[" << color << "m" << text << endl;
}

void consoleManager::centerprintf(string color, string text)
{
	cout << setw(35); // modify the number to align it to the center
	cout << "\033[" << color << "m" << text << endl; // should be centered now
}

void consoleManager::clearConsole()
{
	cout << "\x1B[2J\x1B[H";
}

void consoleManager::Get()
{
	// pause console
	cin.get();
}