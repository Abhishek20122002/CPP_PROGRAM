#include<iostream>
using namespace std;

class wall{
//private:
    //double length;
public:
    double length;
    wall(){
        length=5.5;
        //cout<<"Creating a wall."<<endl;
        //cout<<"Length is: "<<length<<endl;
    }
};

int main(){
    wall wall1;
    cout<<"Creating a wall."<<endl;
        cout<<"Length is: "<<wall1.length<<endl;
    return 0;
}
