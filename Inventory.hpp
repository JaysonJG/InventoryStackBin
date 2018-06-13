#ifndef INVENTORY_HPP
#define INVENTORY_HPP

#include<iostream>
#include<string>



class Inventory
{

    private:
        int serialNum;  //Holds the serial number for the part
        int lotNum;
        std::string manufactDate;

    public:
    	Inventory()
        {
            serialNum = lotNum = 0;
            manufactDate = "";    
        }
        
        Inventory(int sn, int ln, std::string date)
        {
            serialNum = sn;
            lotNum = ln;
            manufactDate = date;
        }
     
        void setSerialNum(int sn) { serialNum = sn;}
        void setLotNum(int ln) { lotNum = ln;}
        void setDate(std::string date) { manufactDate = date;}

        int getSerialNum() { return serialNum;}
        int getLotNum() { return lotNum;}
        std::string getDate() {return manufactDate;}
        
        void displayInfo();
        
        //function overload for output
      	friend std::ostream& operator << (std::ostream& os, const Inventory& inventory)
        {
        		os <<	inventory.serialNum << "\n"	
        		   <<	inventory.lotNum << "\n"
        	 	   <<	inventory.manufactDate << "\n";
				 
				 return os;    
		}
		//function overload for input
		friend std::istream& operator>>(std::istream& is, Inventory& inventory)
        {
        
        	is >>  	inventory.serialNum
        	   >>	inventory.lotNum
        	   >>	inventory.manufactDate;
        	   
        	//is >> 	inventory.getLotNum() >> "\n";
        	//is >> 	inventory.getDate() >> "\n";
        	return is;
    	}
        

};

#endif  
