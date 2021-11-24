// -*- C++ -*-
// $Id: Mod_Command.h 

//==============================================================================
/**
 * Honor Pledge:
 *
 * I pledge that I have neither given nor received any help
 * on this assignment.
 */
//==============================================================================

#ifndef _CS363_MOD_COMMAND_H_
#define _CS363_MOD_COMMAND_H_

/**
 * @class Mod_Command
 *
 * 
 */

#include "Binary_Op_Command.h"
 
class Mod_Command : public Binary_Op_Command
{
	public:
		///Copy constructor
		Mod_Command (Stack <int> & s);
		
		///Destructor
		~Mod_Command (void);
		
		///Return n1%n2
		virtual int evaluate (int n1, int n2) const;
};

//#include "Mod_Command.cpp"

#endif
