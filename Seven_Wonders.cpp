//
//  Seven_Wonders.cpp
//  
//
//  Created by AMAN ANAND on 2016-11-29.
//
//

#include<iostream>
#include <string>
using namespace std;
int main(){
    string a;
    cin>>a;
    int num[3]={0};
    int length=a.length();

    int counter;
    for(int i=0;i<length;i++){
        if(a[i]=='T'){
            num[0]++;
        }
        if(a[i]=='C'){
            num[1]++;
        }
        if(a[i]=='G'){
            num[2]++;
        }
    }
    
    int result=(num[0]*num[0])+(num[1]*num[1])+(num[2]*num[2])+(min(min(num[0],num[1]),num[2])*7);

    cout<<result<<endl;
    return 0;
}

