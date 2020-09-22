#include <header.h>
#include "test.h"
int main()
{
	std::string Name;

	std::getline(std::cin, Name);

	if (toUpper(Name) == "RITCHIEL REZA" || toUpper(Name) == "RITCHIEL")
	{
		std::cout << "Hello Master! How are you?" << std::endl;	
	}
	else 
	{
		std::cout << "Hello " << Name << "." << std::endl;
	}	
	say_hello();

	std::cout << "Hello World! From say-hello version " << SAY_HELLOVERSION << std::endl; 

	return 0;
}
