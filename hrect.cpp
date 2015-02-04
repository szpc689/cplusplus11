#include "hrect.h"
namespace HCPP {
	
void HPoint::setX(int x)
{
	this->_x = x;
}
int HPoint::getX() const
{
	return this->_x;
}
		
void HPoint::setY(int y)
{
	this->_y = y;
}
int HPoint::getY() const
{
	return this->_y;
}

std::ostream& operator<< (std::ostream& obj, const HPoint& pt)
{
	obj<<"HPoint: "<<&pt<<" (x="<<pt.getX()<<", y="<<pt.getY()<<")"<<std::endl;
	return obj;
}



}



