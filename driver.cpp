#include "Array_Base.h"
#include "Array.h"
#include "Stack.h"

#include "Expr_Command.h"
#include "Num_Command.h"
#include "Binary_Op_Command.h"
#include "Add_Command.h"
#include "Subtract_Command.h"
#include "Multiply_Command.h"
#include "Divide_Command.h"
//#include "Mod_Command.h"


#include "Command_Factory.h"
#include "Stack_Command_Factory.h"

#include "Calculator.h"


#include <iostream>
#include <sstream>


/*Driver seems to work for the most part. Issues with the wrapper(Calculator.h) is where
 * this program is having issues. Outside of that, it seems everything else is working as 
 * intended.*/

int main(int argc, char* argv[])
{

	typedef Stack <int> stack;

	bool keepGoing = true;
	std::string entry;
	stack* s = new stack();
	Stack_Command_Factory factory(*s);
	Array <Expr_Command*> postfix;
	Calculator calc = Calculator();
	while (keepGoing)
	{
		std::cout << "Please enter a calculation or type quit :" << std::endl;
		std::cout << std::endl;
		std::cout << "~";
		std::getline(std::cin >> std::skipws, entry);
		std::cout << std::endl;
		//gives user option to quit program
		if ((entry.compare("QUIT")) == 0 || entry.compare("quit") == 0)
		{
			s->~stack();
			factory.~Stack_Command_Factory();
			postfix.~Array();
			keepGoing = false;
			break;

		}

		else
		{
			if (calc.infix_to_postfix(entry, factory, postfix))
			{
				//calc.solve(postfix);
				std::cout << "Result: " << s->top() << std::endl;
				postfix.resize(0);
				s->clear();
			}
		}
	}

	return 0;




}
