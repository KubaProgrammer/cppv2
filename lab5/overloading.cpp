#include <iostream>

class Point{
private:
    double x, y;
public:
    Point(double x, double y) : x(x), y(y){}

    Point operator+(const Point& p) const{
        Point result = *this;
        return result+=p;
    }

    Point& operator+=(const Point& p){
        x += p.x;
        y += p.y;
        return *this;
    }

    Point operator-(const Point& p) const{
        Point result = *this;
        return result-=p;
    }

    Point& operator-=(const Point& p){
        y-=p.y;
        x-=p.x;
        return *this;
    }

    bool operator==(const Point& p) const{
        return x==p.x && y==p.y;
    }

    bool operator!=(const Point& p) const{
        return !(*this==p);
    }

    void viewPoint()const{
        std::cout<<"("<<x<<", "<<y<<")"<<std::endl;
    }
};
int main(){
    Point p1(3, 6);
    Point p2(7, 12);
    Point p3 = p1+p2;
    Point p4(7, 12);
    Point p5(9, 10);
    Point p6(3, 6);
    Point p7 = p5-p6;
    p3.viewPoint();
    p1+=p2;
    p1.viewPoint();
    bool equal = p2==p4;
    std::cout<<equal<<std::endl;
    bool inequal = p1!=p4;
    std::cout<<inequal<<std::endl;
    p5-=p6;
    p7.viewPoint();
    p5.viewPoint();
}