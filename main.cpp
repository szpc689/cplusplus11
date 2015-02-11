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
	
	HPoint pointFromRect = rect;
	std::cout<<pointFromRect;
	
	HPoint pt1 = pt;
	std::cout<<"pt1 : "<<pt1<<std::endl;
	HPoint pt2;
	pt2 = pt;
	std::cout<<"pt2 : "<<pt2<<std::endl;
	std::cout<<"pt1 + pt2 = "<<pt1 + pt2<<std::endl;
	
	
	return 0;
}
