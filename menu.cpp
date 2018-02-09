/*****************************************************************************************
 * Program Name: menu.cpp
 * Author: Corbin stripling
 * Date: 10/08/2017
 * Description: menu.cpp is the source file for the menu function used in project one. It
 * is designed to be modular by allowing you to change the string in the array to generate
 * new menu options.
*****************************************************************************************/

#include "menu.hpp"
#include "inputValidate.hpp" 
#include<iostream>
#include<string>

int runMenu(){
	std::string menuDesc[] = {"REVERSE A STRING","SUM AN ARRAY OF INTEGERS","CALCULATE THE TRIANGULAR NUMBER OF AN INTEGER","QUIT"};

	int menuSize = 4;
	
 
	std::cout<<"*****************************************************"<<std::endl;
	std::cout<<"|                    LAB 5 MENU                     |"<<std::endl;
	std::cout<<"*****************************************************\n"<<std::endl;
	std::cout<<"Please make a selection:"<<std::endl;
	      
	for(int i = 0;i < menuSize;++i){
		int x = i + 1;
		std::cout<<"  "<<x<<" - "<<menuDesc[i]<<std::endl;
	}

  	std::cout<<"*****************************************************"<<std::endl;

	int userSelect = validateInt( 1, menuSize); 
	return userSelect;

}

