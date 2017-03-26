//
//  line_them_up.cpp
//  
//
//  Created by AMAN ANAND on 2017-01-08.
//
//

#include <iostream>
using namespace std;
int main(){
    int n, ans;
    cin>>n;
    cin.ignore();
    string a[100];
    for (int i=0;i<n;i++){
        getline(cin,a[i]);
    }

    ans=1;
    for (int i=0;i<n;i++){
        if(a[i]>a[i+1] && (i+1)!=n){
//            cout<<i<<endl;
            if(ans==1 && i!=0){ans=2; break; }
            ans=0;
        }
        else if(a[i]<a[i+1] &&  (i+1)!=n){
//            cout<<"======"<<endl;
            if(ans==0){ ans=2; break; }
            ans=1;
        }
    }
    
    if(ans==1){ cout<<"INCREASING"<<endl; }
    else if (ans==0){ cout<<"DECREASING"<<endl; }
    else if(ans==2) { cout<<"NEITHER"<<endl; }
    
    return 0;
}
