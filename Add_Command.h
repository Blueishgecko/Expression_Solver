#ifndef _ADD_COMMAND_H_
#define _ADD_COMMAND_H_

#include "Binary_Op_Command.h"


//Header File
class Add_Command : public Binary_Op_Command
{
public:

    Add_Command(Stack<int> & s);
    ~Add_Command();

    virtual int evaluate(int n1, int n2)const;


};


//#include "Add_Command.cpp"



#endif // !_ADD_COMMAND_H_
