
#include "Stack_Command_Factory.h"

Stack_Command_Factory::Stack_Command_Factory(Stack<int> & s)
	:stack_(s)
{}

Stack_Command_Factory::~Stack_Command_Factory()
{}

Num_Command * Stack_Command_Factory::create_num_command(int num)
{
	
	return new Num_Command(stack_, num);

}

Add_Command * Stack_Command_Factory::create_add_command(void)
{
	return new Add_Command(this->stack_);
}

Subtract_Command * Stack_Command_Factory::create_subtract_command(void)
{
	return new Subtract_Command(this->stack_);
}

Multiply_Command * Stack_Command_Factory::create_multiply_command(void)
{
	return new Multiply_Command(this->stack_);
}

Divide_Command * Stack_Command_Factory::create_divide_command(void)
{
	return new Divide_Command(this->stack_);
}

/*Mod_Command * Stack_Command_Factory::create_mod_command(void)
{
	return new Mod_Command(this->stack_);
}*/
