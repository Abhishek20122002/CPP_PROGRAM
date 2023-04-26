#include<iostream>
using namespace std;

class shape{
public:
    int a;
    int b;
    void get_data(int n, int m){
        a=n;
        b=m;
    }
};
class rectangle:public shape{
public:
    int rect_area(){
        int result=a*b;
        return result;
    }
};
class triangle:public shape{
public:
    int triangle_area(){
        int result=0.5*a*b;
        return result;
    }
};


int main(){
    rectangle r;
    triangle t;
    int length,breadth,base,height;
    cout<<"Enter the length and breadth of rectangle: "<<endl;
    cin>>length>>breadth;
    r.get_data(length,breadth);
    cout<<"Area of rectangle is: "<<r.rect_area()<<endl;

    cout<<"Enter the base and height of rectangle: "<<endl;
    cin>>base>>height;
    t.get_data(base,height);
    cout<<"Area of triangle is: "<<t.triangle_area()<<endl;
    return 0;
}
