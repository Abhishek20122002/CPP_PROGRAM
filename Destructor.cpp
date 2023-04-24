#include<iostream>
using namespace std;

class demo{
private:
    int num1,num2;
public:
    demo(int n1,int n2){
        cout<<"Inside constructor"<<endl;
        num1=n1;
        num2=n2;
    }
    void display(){
        cout<<"num1= "<<num1<<endl;
        cout<<"num2= "<<num2<<endl;
    }
    ~demo(){
        cout<<"Inside Destructor"<<endl;
    }
};

int main(){
    demo obj(10,20);
    obj.display();
    return 0;
}
