#include<iostream>
#include<cmath>
using namespace std;
int main(){
    #define PI 3.14159265
    int h,v;
    cin>>h>>v;
    double a;
    a=sin((v*PI)/180);
//    cout<<a<<endl;
    int ans =h/a;
    cout<<ans+1<<endl;
    return 0;
}
