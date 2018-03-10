#include <iostream>
#include <stack>
#include <string>
#include "Evaluator.h" // The Evaluator Class is in this file

using namespace std;


// We call this in the main function
void eval() {
	stack<double> numberStack;
	stack<char> operatorStack;

	//If character exists to be read
		// (1)If character is operand push on the operand stack, if character is (, push on the operator stack.
		// (2)Else if character is operator
			// (2.1) While the top of the operator stack is not of smaller precedence than this character.
			// (2.2) Pop operator from operator stack.
			// (2.3) Pop two operands (op1 and op2) from operand stack.
			// (2.4) Store op1 op op2 on the operand stack back to (2.1).
		// (3) Else if character is ')', do the same as 2.2 - 2.4 till you encounter '('.
	//Else (no more character left to read)
		//Pop operators untill operator stack is not empty.
		//Pop top 2 operands and push op1 op op2 on the operand stack.
		//Return the top value from operand stack.
}

// Main
int main() {

	Evaluator eval;
	int result = eval.eval("!!!3+2");

	return 0;

}