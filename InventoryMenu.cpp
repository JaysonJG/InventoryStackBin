#include <iostream>
#include "InventoryMenu.hpp"

using namespace std;



InventoryMenu::InventoryMenu()
{
	int size;
	getStackSize(size);
	stackptr = new InvStack(size);

	displayMenu();

	
}

InventoryMenu::~InventoryMenu()
{
	delete stackptr;
}

void InventoryMenu::menu(int choice)
{
	switch(choice)
	{
		case 1:
			getParts();
			break;
		case 2:
			takePart();
			break;
		case 3:
			finish();
			break;
	}
}

void InventoryMenu::displayMenu()
{	
	int choice;
	
	do
	{
		stackptr->displayStackInfo();
		cout<<"\nWhat would you like to do?\n";
		cout<<"1 - Add part(s) to inventory \n";
		cout<<"2 - Take part from inventory \n";
		cout<<"3 - Finish \n";
		cout<<"Enter your choice: ";

		cin>>choice;


		while(choice < PUSH || choice > FINISH )
		{
		cout<<"\nEnter a valid choice";
		cin>>choice;
		}

		menu(choice);



	} while( choice != FINISH );
}

void InventoryMenu::getParts()
{
	
	char choice;
	int sn, ln;
	string md;
	
	bool done = false;
	int count = 0;
	


	while(!done)
	{
	cout<<"\nEnter part serial number: ";
	cin>>sn;
	cin.ignore();
	cout<<"Enter part lot number: ";
	cin>>ln;
	cin.ignore();
	cout<<"Enter manufacture date: ";
	cin>>md;
	cin.ignore();


	try
	{

	stackptr->push(Inventory(sn, ln, md));
	count++;

	cout<<"\nAdd another part?(Y/N) ";
	cin>>choice;
	done = !(choice == 'y' || choice == 'Y');

	}
	catch(InvStack::PushError)
	{

	cout<<"\nPushError:Stack is currently full";
	cout<<"\nCannot add part to inventory";
	done = true;	

	}
	
	

	}

cout<<"\nAdded "<<count<<" part(s) to inventory";

}

void InventoryMenu::addPart(Inventory part)
{
	

	try
	{

	stackptr->push(part);

	}
	catch(InvStack::PushError)
	{

	cout<<"\nPushError:Stack is currently full";
	cout<<"\nCannot add part to inventory";

	}

	


	
}

void InventoryMenu::takePart()
{
 
try
{
	Inventory part = stackptr->pop();
	part.displayInfo(); 


}
catch(InvStack::PopError)
{
	cout<<"\nPopError: Cannot pop from stack";
}

}

void InventoryMenu::finish()
{
	stackptr->displayAll();
}

void InventoryMenu::getStackSize(int& size)
{

	cout<<"\nEnter size of new stack: ";
	cin>>size;

	
}




/*bool InventoryMenu::CheckStack()
{
	bool success;
	char userInput;
	if(invStack == nullptr)
	{
		
	}

	return created;

}

void InventoryMenu::CreateStack(int size, &bool success)
{
		

		switch(userInput)
		{
			case('Y'):
			case('y'):
				int size;
				cout<<"Enter Size Of New Stack :";
				cin>>size;

				invStack = new InvStack(size);

				break;

			default:
				break;
		}	
}*/


