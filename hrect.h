/*********************************************
 * 文件名：hrect.h 
 * 类名：  HRect、HPoint 
 * 文件描述：HRect 区域描述类，用来测试运算符
 * 重载 
*********************************************/

#ifndef HRECT_H
#define HRECT_H
#include <iostream>

namespace HCPP {

/*
 * HPoint 点 属性只有横竖坐标 x 标示横坐标 y标示竖坐标 
*/
class HPoint
{
	public:
		// 构造函数 
		HPoint():_x(0),_y(0){}
		HPoint(int x, int y):_x(x), _y(y){}
		
		// X 坐标轴 
		void setX(int x);
		int getX() const;
		
		// y 坐标轴
		void setY(int y);
		int getY() const; 
		
	private:
		int _x;
		int _y;
};

// 重载 << 支持HPoint
std::ostream& operator<< (std::ostream& obj, const HPoint& pt); 

class HRect
{
	public:
		HRect() = delete; // 删除默认构造函数
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

// 重载 << 支持HPoint
std::ostream& operator<< (std::ostream& obj, const HRect& pt); 



}



#endif
