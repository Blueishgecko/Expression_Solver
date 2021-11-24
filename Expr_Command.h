#ifndef _EXPR_COMMAND_H_
#define _EXPR_COMMAND_H_

//Header File
class Expr_Command
{
public:

    Expr_Command();

    ~Expr_Command();

    virtual void execute(void) = 0;

};

//#include "Expr_Command.cpp"

#endif
