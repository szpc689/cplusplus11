#include "hrect.h"
namespace HCPP {
	
HPoint::HPoint(const HPoint& obj)
{
	this->_x = obj._x;
	this->_y = obj._y;
}

HPoint& HPoint::operator=(const HPoint& obj)
{
	if (this == &obj)
	{
		return *this;
	}
	
	this->_x = obj._x;
	this->_y = obj._y;
}
	
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

HPoint operator+(const HPoint& left, const HPoint& right)
{
	return HPoint(left._x + right._x, left._y + right._y);
}

std::ostream& operator<< (std::ostream& obj, const HPoint& pt)
{
	obj<<"HPoint: "<<&pt<<" (x="<<pt.getX()<<", y="<<pt.getY()<<")"<<std::endl;
	return obj;
}


void HRect::setPoint(const HPoint& pt)
{
	_point = pt;
}
HPoint HRect::getPoint() const
{
	return _point;
}
		
void HRect::setWith(int with)
{
	_with = with;
}
int HRect::getWith() const
{
	return _with;
}
		
void HRect::setHight(int hight)
{
	_hight = hight;
}
int HRect::getHight() const
{
	return _hight;
}


std::ostream& operator<< (std::ostream& obj, const HRect& rect)
{
	obj<<"HRect: "<<&rect<<" (Point: "<<rect.getPoint()<<" with: "<<rect.getWith()<<" hight: "<<rect.getHight()<<")" <<std::endl;
}


}



