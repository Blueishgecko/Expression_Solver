#ifndef _SUBTRACT_COMMAND_H_
#define _SUBTRACT_COMMAND_H_

#include "Binary_Op_Command.h"


//Header File
class Subtract_Command : public Binary_Op_Command
{
public:

    Subtract_Command(Stack<int> & s);
    ~Subtract_Command(void);

    virtual int evaluate(int n1, int n2)const;


};


#include "Subtract_Command.cpp"



#endif // !_ADD_COMMAND_H_
