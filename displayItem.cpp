#include<iostream>

class DisplayItem
{
public:
struct Point
{
        int _x;
        int _y;
Point(int x, int y){_x = x; _y = y;};
Point(){_x = 0; _y = 0;};
//std::ostream& operator << (std::ostream& out, Point& p){out << "_x: " << p._x << " _y: " << p._y; return out;};
};
virtual void draw(){};
protected:
        Point _center;
};

class Circle :  public DisplayItem
{
public:
        Circle(){std::cout << "New Circle..." << std::endl;}
        Circle(int radius){_radius = radius;std::cout << "New Circle with radius " << radius  << std::endl;}
        void draw(){std::cout << "Draw circle with center " << _center._x << "\t" << _center._y  << "and radius " << _radius;};
private:
        unsigned int _radius;
};

int main()
{
        Circle c(3);
        c.draw();
        return 0;
}
