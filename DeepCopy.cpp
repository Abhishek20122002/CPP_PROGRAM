#include<iostream>
using namespace std;

class box{
private:
    int length;
    int *breadth;
    int height;
public:
    box(){
        breadth=new int;
    }
    void set_dimension(int len, int brea, int hei){
        length=len;
        *breadth=brea;
        height=hei;
    }
    void show_data(){
        cout<<"Length: "<<length
            <<"\nBreadth: "<<*breadth
            <<"\nHeight: "<<height
            <<endl;
    }
    box(box& sample){
        length=sample.length;
        breadth=new int;
        *breadth=*(sample.breadth);
        height=sample.length;
    }
    ~box(){
        delete breadth;
        }
};

int main(){
    box b1;

    b1.set_dimension(10,15,20);
    b1.show_data();

    box b2=b1;
    b2.show_data();
    return 0;
}
