#ifndef H_Console
#define H_Console
#endif

#include <iostream>
#include <string>

struct Console
{
	void print(std::string output);

	std::string getString(std::string prompt);

	int getInt(std::string prompt);
};

