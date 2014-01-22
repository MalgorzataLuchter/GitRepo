#include <iostream>
#include "pow.h"
#include "mult.h"
#include "add.h"
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	std::cout<<pow(add(multiply(2,2),4),3)<<std::endl;
	return 0;
}
