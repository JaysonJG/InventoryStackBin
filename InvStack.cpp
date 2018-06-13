//#include <iomanip>
#include "InvStack.hpp"






InvStack::InvStack(int size) : Stack(size) {}

void InvStack::displayStackInfo()
{
	//cout<<setw(5);
	std::cout<<"\nInventory Stack Size: "<<arraySize;
	std::cout<<"\t # of Parts in Inventory: "<<top+1;
}
void InvStack::displayAll()
{
	for(int i = 0; i <= top; ++i)
	{		
			std::cout<<"\nPart Number: "<<i+1<<"\n";
			aptr[i].displayInfo();
	}

}


