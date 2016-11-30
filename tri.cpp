//
//  tri.cpp
//
//
//  Created by AMAN ANAND on 2016-11-29.
//
//

#include<iostream>
using namespace std;
int main(){
    int n1,n2,n3,res;
    cin>>n1>>n2>>n3;
    res=n2+n3;
    if(n1==res){
        cout<<n1<<"="<<n2<<"+"<<n3<<endl;
        return 0;
    }
    res=n2-n3;
    if(n1==res){
        cout<<n1<<"="<<n2<<"-"<<n3<<endl;
        return 0;
    }

    res=n2*n3;
    if(n1==res){
        cout<<n1<<"="<<n2<<"*"<<n3<<endl;
        return 0;
    }

    res=n2/n3;
    if(n1==res){
        cout<<n1<<"="<<n2<<"/"<<n3<<endl;
        return 0;
    }
    res=n1-n2;
    if(n3==res){
        cout<<n1<<"-"<<n2<<"="<<n3<<endl;
        return 0;
    }
    res=n1*n2;
    if(n3==res){
        cout<<n1<<"*"<<n2<<"="<<n3<<endl;
        return 0;
    }
    
    res=n1/n2;
    if(n3==res){
        cout<<n1<<"/"<<n2<<"="<<n3<<endl;
        return 0;
    }
    
    res=n1+n2;
    if(n3==res){
        cout<<n1<<"+"<<n2<<"="<<n3<<endl;
        return 0;
    }

    return 0;
}
