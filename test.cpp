#include <iostream>
#include "add.h"
#include "mult.h"
#include "pow.h"
void areEquals(double exp,double got){
	if(exp!=got)
	{
		std::cout<< "Expected:"<<exp<<"but got"<<got<<std::endl;
	}
	else
	{
		std::cout<<"Test passed"<<std::endl;
	}	
	
}
int main(){
	areEquals(4,add(2,2));
	areEquals(4,multiply(2,2));
	areEquals(64,pow(8,2));
	return 0;
}
