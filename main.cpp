#include <iostream>
#include "hrect.h"
using namespace HCPP;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	HPoint pt(1,2);
	std::cout<<pt;
	
//	HRect rect(1,2,3,4);
//	std::cout<<rect;
	HRect rect{1,2,3,4};
	std::cout<<rect;
	
	return 0;
}
