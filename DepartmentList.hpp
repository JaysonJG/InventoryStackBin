#ifndef DEPARTMENTLIST_HPP
#define DEPARTMENTLIST_HPP


#include "Inventory.hpp"
#include "InvStack.hpp"

using namespace std;

struct Department
{
	string departmentName;
	InvStack stack;
	
}

template<class T>
class List
{
	private:
	T *departments;
	int size;
	
	public:
		List(int s)
		 { 		
			departments = new T[s];
			size = s;
		}
		~List() { delete departments;}
		

	
	
	
}

