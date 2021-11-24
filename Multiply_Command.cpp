#include "Multiply_Command.h"


Multiply_Command::Multiply_Command(Stack<int> & s)
	:Binary_Op_Command(s)
{
}

Multiply_Command::~Multiply_Command(void)
{}


int Multiply_Command::evaluate(int n1, int n2)const
{
	int result = n1 * n2;
	return result;
}
