/**************************************************************
 * File Name: main.cpp
 * Author: Corbin Stripling
 * Date: 10/29/2017
 * Description: main file for lab5
**************************************************************/
#include"single.hpp"
#include"inputValidate.hpp"
#include"menu.hpp"
#include<iostream>
#include<string>
int main(){
	
	int select = 0;

	while(select != 4){

		select = runMenu();

		if(select == 1){  //Takes user string and uses recursive function to print it backwards
			std::string testString;
			std::cout<<"Enter some text to reverse:";
			std::cin.ignore(); 
			std::getline(std::cin,testString);
			const char* testStringArr = testString.c_str();
			reverseTestStr(testStringArr);
			std::cout<<std::endl;
		}
		else if(select == 2){//Takes user input of integers and sums them using a recursive function
			int arrSize;
	
			std::cout<<"Enter the number of integers to sum:"<<std::endl;
			arrSize = validateInt(1,1000000);
			int arrFunc2[arrSize];
			std::cout<<"Enter your numbers to sum:"<<std::endl;
			for(int i = 0; i < arrSize;i++){
				arrFunc2[i] = validateInt(1,1000000);
			}
	
			std::cout<<sumIntArr(arrFunc2, arrSize)<<std::endl;
		}
		else if(select == 3){//Uses recursive function to find triangular number of user input
			std::cout<<"Enter a number to find the triangular number:"<<std::endl;
			int numberToSum = validateInt(1,1000000);	
			std::cout<<triangularNum(numberToSum)<<std::endl;
		}
		else if(select == 4){//Exits program
			std::cout<<"See, recursion can be fun!!!"<<std::endl;
			return 0;
		}
	}
}
