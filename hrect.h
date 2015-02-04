/*********************************************
 * �ļ�����hrect.h 
 * ������  HRect��HPoint 
 * �ļ�������HRect ���������࣬�������������
 * ���� 
*********************************************/

#ifndef HRECT_H
#define HRECT_H
#include <iostream>

namespace HCPP {

/*
 * HPoint �� ����ֻ�к������� x ��ʾ������ y��ʾ������ 
*/
class HPoint
{
	public:
		// ���캯�� 
		HPoint():_x(0),_y(0){}
		HPoint(int x, int y):_x(x), _y(y){}
		
		// X ������ 
		void setX(int x);
		int getX() const;
		
		// y ������
		void setY(int y);
		int getY() const; 
		
	private:
		int _x;
		int _y;
};

// ���� << ֧��HPoint
std::ostream& operator<< (std::ostream& obj, const HPoint& pt); 

class HRect
{
	public:
	protected:
};

}



#endif
