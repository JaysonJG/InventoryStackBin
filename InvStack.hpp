#ifndef INVSTACK_HPP
#define INVSTACK_HPP

#include "Stack.hpp"
#include "Inventory.hpp"

class InvStack : public Stack<Inventory>

{

	public:
		InvStack(int);

		void displayStackInfo();
		void displayAll();

};

#endif

