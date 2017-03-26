//
//  Rijeci.cpp
//  
//
//  Created by AMAN ANAND on 2017-01-15.
//
//

#include<iostream>
using namespace std;

int main(){
    
    int n;
    int c=0;
    int d=1;
    int b=1;
    int a=0;
    
    cin>>n;
    
    for(int j=2;j<n;j++){
        a=c+d;
        c=d;
        d=a;
    }
    if(n==2){
        a=1;
    }
    cout<<a<<" ";
    
    c=0;
    d=1;
    
    for(int i=1;i<n;i++){
        b=c+d;
        c=d;
        d=b;
    }
    
    cout<<b<<endl;
    
    return 0;
}
