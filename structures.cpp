#include<iostream>
using namespace std;

struct student{
    int id;
    string name;
    string state;
};

int main(){
        struct student s1;

        s1.id=1;
        s1.name="Priyanshu";
        s1.state="Delhi";

        cout<<s1.id<<endl;
        cout<<s1.name<<endl;
        cout<<s1.state<<endl;
    return 0;
}
