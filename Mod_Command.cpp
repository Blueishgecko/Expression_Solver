// $Id: Mod_Command.cpp 

// Honor Pledge:
//
// I pledge that I have neither given nor received any help
// on this assignment.

//
// Mod_Command
//

#include "Mod_Command.h"


//
// Mod_Command (Stack <int> &)
//
Mod_Command::Mod_Command (Stack <int> & s)
: Binary_Op_Command (s)
{
}

//
// ~Mod_Command
//
Mod_Command::~Mod_Command (void)
{
}

//
// evaluate
//
int Mod_Command::evaluate (int n1, int n2) const
{
	if ( n2 == 0 )
	{
		throw std::runtime_error("Division by zero");
	}
	
	return n1 % n2;
} 
