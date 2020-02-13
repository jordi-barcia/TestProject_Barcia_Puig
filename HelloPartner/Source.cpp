#include <iostream>

void Repeticion() 
{
	for (int i = 0; i < 10; i++)
	{
		std::cout << "Hello World" << std::endl; // Imprimeix "Hello World 10 vegades"
	}
}
int main() 
{
	std::cout << "Hello Adrian" << std::endl;
	std::cout << "Hello Jordi" << std::endl;
	Repeticion();
	return 0;
}