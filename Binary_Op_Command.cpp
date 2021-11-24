#include "Binary_Op_Command.h"

Binary_Op_Command::Binary_Op_Command(Stack<int> & s)
	:stack_(s)
{}


Binary_Op_Command::~Binary_Op_Command()
{
}

void Binary_Op_Command::execute()
{
	int n1 = this->stack_.top();
	this->stack_.pop();
	int n2 = this->stack_.top();
	this->stack_.pop();
	int result = this->evaluate(n1, n2);
	this->stack_.push(result);

	
}
