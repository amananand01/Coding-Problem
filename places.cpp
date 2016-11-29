#include<iostream>
//#include<string.h>
//#include<stdio.h>
using namespace std;
int main(){
    int t;
    int n[10000];
    string city[10000];
    int counter=0;
    int val=0;
    int g=0;
    cin>>t;
    for(int d=0;d<t;d++){
        cin>>n[d];
        cin.ignore();
        for(int i=0;i<n[d];i++){
            getline(cin,city[val]);
            val++;
        }
    }
    for(int j=0;j<t;j++){
        for(int k=0;k<n[j];k++){
            for(int l=k;l<n[j];l++){
                if((l+1)>n[j]){break;}
                if(city[k+g].compare(city[l+1+g]) ==0){
                    counter++;break;
                }
            }
        }
        g=g+n[j];
        cout<<n[j]-counter<<endl;
        counter=0;
    }
    return 0;
}
