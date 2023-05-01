#include<iostream>
using namespace std;

union detail{
    int geek1;
    char geek2;
    float geek3;
};

int main(){
    union detail g1,g2,g3;

    g1.geek1=34;
    g2.geek2=34;
    g3.geek3=34.34;

    cout<<g1.geek1<<endl;
    cout<<g2.geek2<<endl;
    cout<<g3.geek3<<endl;
    return 0;
}
