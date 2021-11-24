#include "Calculator.h"
#include "Stack.h"
#include <cstdio>
#include <cstdlib>
#include <exception>
#include <iostream>
#include <string>
#include <cctype>

Calculator::Calculator()
{
}
Calculator::~Calculator()
{

}
int Calculator::prec(char input) 
{ 
	switch(input)
	{
		case '^':
			return 4;
		case '*':
		case '/':
			return 3;
		case '+':
		case '-':
		case '%':
			return 2;
		case '(':
			return 1;
		
		default:
			return -1;
	}

}

//function for infix to postfix, was never able to debug some of the issues I was having with, ended up 
//just trashing most of what I have. Couldn't keep the program from closing on empty exception for some reason 
bool Calculator::infix_to_postfix (const std::string & infix,Command_Factory & factory, Array <Expr_Command *> & postfix) 
{
	std::istringstream input(infix); 
	Expr_Command * cmd = 0; 
	int place = 0;
	Stack <Expr_Command *> temp;
	Stack <int> order;
	
	bool parentheses = false;
	std::string s_token;
	while (getline(input,s_token,' ' ))
	{}
}

//solve function that execute the expressions
/*void Calculator::solve(Array<Expr_Command *> & postfix)
{
	for(size_t i = 0; i < postfix.size(); i++)
	{
		postfix.get(i).execute();
	}
}*/		 
