// -*- C++ -*-
// $Id: Stack.h 380 2010-02-08 05:10:33Z hillj $

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
 //==============================================================================

#ifndef _CS507_STACK_COMMAND_FACTORY_H_
#define _CS507_STACK_COMMAND_FACTORY_H_

#include "Command_Factory.h"
#include "Stack.h"



//Header File
class Stack_Command_Factory : public Command_Factory
{
public:

    Stack_Command_Factory(Stack<int> & s);
    ~Stack_Command_Factory(void);

    virtual Num_Command * create_num_command(int num);
    virtual Add_Command * create_add_command(void);
    virtual Subtract_Command * create_subtract_command(void);
    virtual Multiply_Command * create_multiply_command(void);
    virtual Divide_Command * create_divide_command(void);
    //virtual Mod_Command * create_mod_command(void);

private:

    Stack <int>& stack_;

};

//#include "Stack_Command_Factory.cpp"

#endif


