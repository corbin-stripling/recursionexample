/*****************************************************
 * File Name: single.cpp
 * Author: Corbin Stripling
 * Date: 10/29/2017
 * Description: Source file for recursive functions for Lab5.
*****************************************************/
#include"single.hpp"
#include<iostream>

void reverseTestStr(const char *testString){
	if(*testString == '\0'){
		std::cout<<"\n";
		return;
	}
	else{
		reverseTestStr(testString + 1);
		std::cout<<*testString;
	}
}

int sumIntArr(int* arrFunc2,int arrSize){
	if(arrSize <= 0){
		return 0;
	}
	else{
		return sumIntArr(arrFunc2, arrSize -1) + arrFunc2[arrSize - 1];
	}
}

int triangularNum(int N){
	if(N == 0){
		return 0;
	}
	else{
		return N + triangularNum(N - 1);
	}
} 
