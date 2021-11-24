#include "Add_Command.h"


Add_Command::Add_Command(Stack<int> & s)
	:Binary_Op_Command(s)
{
}

Add_Command::~Add_Command()
{}


int Add_Command::evaluate(int n1, int n2)const
{
	int result = n1 + n2;
	return result;
}

