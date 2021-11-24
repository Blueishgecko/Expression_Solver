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

#ifndef _CS507_FACTORY_H_
#define _CS507_FACTORY_H_

#include "Num_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Divide_Command.h"
#include "Multiply_Command.h"
//#include "Mod_Command.h"

//Header File
class Command_Factory
{
public:
    
    Command_Factory();
    ~Command_Factory(void);

    virtual Num_Command * create_num_command(int num) = 0;
    virtual Add_Command * create_add_command(void) = 0;
    virtual Subtract_Command * create_subtract_command(void) = 0;
    virtual Multiply_Command * create_multiply_command(void) = 0;
    virtual Divide_Command * create_divide_command(void) = 0;
   // virtual Mod_Command * create_mod_command(void) = 0;	

private:

    Command_Factory(const Command_Factory&);
    const Command_Factory & operator= (const Command_Factory&);

};

#include "Command_Factory.cpp"

#endif
