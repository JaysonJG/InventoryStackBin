#ifndef INVENTORYMENU_HPP
#define INVENTORYMENU_HPP

#include "InvStack.hpp"


const int PUSH = 1, POP = 2, FINISH = 3;

class InventoryMenu
{
        
	private: 
		InvStack* stackptr;
		


    public:
        InventoryMenu();
        ~InventoryMenu();

        void displayMenu();
        void menu(int);
        void getStackSize(int&);
        void getParts();
        void addPart(Inventory);
        void takePart();
        void finish();

        
    	
       	
    
};




#endif
