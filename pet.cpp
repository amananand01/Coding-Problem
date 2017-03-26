//
//  pet.cpp
//  
//
//  Created by AMAN ANAND on 2017-01-14.
//
//

#include<iostream>
#include <algorithm>
using namespace std;

int main(){
    int a[5][4]={0};
    int sum[5]={0};
    
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            cin>>a[i][j];
        }
    }
    
    for(int i=0;i<5;i++){
        for(int j=0;j<4;j++){
            sum[i]=sum[i]+a[i][j];
        }
    }
    
//  cout<<max(max(1,3),2)<<endl;
    int maximum=sum[0];
    int ans=1;
    for(int k=0;k<5;k++){
//        cout<<sum[k]<<endl;
        if(sum[k]>maximum){
            maximum=sum[k];
            ans=k+1;
        }
    }
    cout<<ans<<" "<<maximum<<endl;
    
    return 0;
}
