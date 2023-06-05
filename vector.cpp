#include<iostream>
#include<vector>
using namespace std;

template<class T>
void display(vector<T> &v){
    cout<<"Displaying this vector"<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
}

int main(){
    vector<int> vec1;
    display(vec1);
    vector<char> vec2(4);
    vec2.push_back('5');
    display(vec2);
    vector<char> vec3(vec2);
    display(vec3);
    vector<int> vec4(6,13);
    display(vec4);
     vector<int> vec5(6,13);
    display(vec5);
    vector<int> vec5(6,13);
    display(vec5);
    return 0;
}
