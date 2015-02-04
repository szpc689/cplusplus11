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
		HRect() = delete; // ɾ��Ĭ�Ϲ��캯��
		HRect(int x, int y, int with, int hight):_point(x, y),_with(with),_hight(hight){} 
		HRect(const HPoint& pt, int with, int hight):_point(pt),_with(with),_hight(hight){} 
		
		void setPoint(const HPoint& pt);
		HPoint getPoint() const;
		
		void setWith(int with);
		int getWith() const;
		
		void setHight(int hight);
		int getHight() const;
		
		operator HPoint() 
		{
			return _point;
		}
	private:
		HPoint _point;
		int _with;
		int _hight;
};

// ���� << ֧��HPoint
std::ostream& operator<< (std::ostream& obj, const HRect& pt); 



}



#endif
