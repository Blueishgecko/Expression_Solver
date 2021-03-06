#ifndef _BINARY_OP_COMMAND_H_
#define _BINARY_OP_COMMAND_H_

#include "Expr_Command.h"
#include "Stack.h"

class Binary_Op_Command : public Expr_Command
{
public:

	Binary_Op_Command(Stack<int> & s);

	~Binary_Op_Command();

	void execute(void);

	virtual int evaluate(int n1, int n2)const = 0;


private:
	Stack<int> & stack_;

};




//#include "Binary_Op_Command.cpp"




#endif // !_BINARY_OP_COMMAND_H_

