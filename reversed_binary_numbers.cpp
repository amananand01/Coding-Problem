//
//  reversed binary numbers.cpp
//  
//
//  Created by AMAN ANAND on 2016-11-29.
//
//
#include<iostream>
using namespace std;
int main(){
    int number;
    int val=0;
    int counter=0;
    int a[32];
    int result=1;
    cin>>number;
    for(int i=number;i>0;i=i/2){
        if((i%2) == 0)
            a[counter]=0;
        else
            a[counter]=1;
//        number=number/2;
        counter++;
    }
    int res=0;
//    cout<<counter<<endl;
    for(int j=counter-1;j>=0;j--){
//        cout<<a[j];
        if(a[j]==1){
            result=1 << val;
            res=res+result;
        }
        val++;
    }
    cout<<res<<endl;
//    cout<<endl;
    
//    cout<<result<<endl;
//    cout<<(1<<0)<<endl;
    return 0;
}
