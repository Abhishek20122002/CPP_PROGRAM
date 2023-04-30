#include<iostream>
using namespace std;

class box{
private:
    int length;
    int breadth;
    int height;
public:
    void set_dimension(int length1, int breadth1, int height1){
        length=length1;
        breadth=breadth1;
        height=height1;
    }
    void show_data(){
        cout<<"Length: "<<length
            <<"\nBreadth: "<<breadth
            <<"\nHeight: "<<height
            <<endl;
    }
};

int main(){
    box b1,b3;

    b1.set_dimension(10,15,20);
    b1.show_data();

    box b2=b1;
    b2.show_data();

    b3=b1;
    b3.show_data();
}
