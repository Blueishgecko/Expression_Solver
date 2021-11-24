#include "Divide_Command.h"


Divide_Command::Divide_Command(Stack<int> & s)
	:Binary_Op_Command(s)
{
}

Divide_Command::~Divide_Command(void)
{}


int Divide_Command::evaluate(int n1, int n2)const
{
	// COMMENT: Your code will crash if you have divide by 0.
	
	//REPLY TO COMMENT: Added if statement to check if bottom value will be 0
	if(n1 == 0)
	{
		throw std::runtime_error("Division by zero");
	}
	else
	{
		
		int result = n2 / n1;
		return result;
	}
}
