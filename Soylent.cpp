//
//  Soylent.cpp
//  
//
//  Created by AMAN ANAND on 2017-01-15.
//
//

#include<iostream>
using namespace std;

int main(){
    int t;
    int c[10000]={0};
    cin>>t;
    int ans=0;
    for(int i=0;i<t;i++){
        cin>>c[i];
    }
    for(int i=0;i<t;i++){
        if(c[i]%400==0){
                ans=c[i]/400;
        }
        else{
            ans=(c[i]/400)+1;
        }
        
        cout<<ans<<endl;
    }
//    if(t==0){
//        cout<<ans<<endl;
//    }
    
    return 0;
}
