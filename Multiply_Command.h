#ifndef _MULTIPLY_COMMAND_H_
#define _MULTIPLY_COMMAND_H_

#include "Binary_Op_Command.h"


//Header File
class Multiply_Command : public Binary_Op_Command
{
public:

    Multiply_Command(Stack<int> & s);
    ~Multiply_Command(void);

    virtual int evaluate(int n1, int n2)const;


};


//#include "Multiply_Command.cpp"



#endif // !_MULTIPLY_COMMAND_H_
