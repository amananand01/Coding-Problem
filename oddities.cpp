#include<iostream>
using namespace std;
int main(){
    int t;
    cin>>t;
    int n[t];
    for(int i=0;i<t;i++){
    cin>>n[i];
    }
    for(int i=0;i<t;i++){
        if(abs(n[i])%2==0){
            cout<<n[i]<<" is "<<"even"<<endl;
        }
        else{
            cout<<n[i]<<" is "<<"odd"<<endl;
        }
    }
    return 0;
}
