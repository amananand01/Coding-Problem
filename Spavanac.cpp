//
//  Spavanac.cpp
//  
//
//  Created by AMAN ANAND on 2017-01-15.
//
//

#include<iostream>
using namespace std;

int main(){
    
    int h,m,h1,m1;
    cin>>h>>m;
    
    h1=h;
    m1=m-45;
    if(m1<0){
        m1=60-(45-m);
        h1=h-1;
        if(h1<0){
            h1=23;
        }
    }
    
    cout<<h1<<" ";
    cout<<m1<<endl;
    return 0;
}
