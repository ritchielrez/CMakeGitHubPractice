#include "header.h"

std::string toUpper(std::string str)
{
	int length = str.length();

	for (int i = 0; i < length; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			str[i] -= 32;
		}
	}

	return str;
}

void say_hello(void)
{
	std::cout << "Hello World! From say-hello version " << SAY_HELLOVERSION << std::endl; 
}