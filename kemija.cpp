#include<iostream>
#include<string>
using namespace std;
int main(){
    string a;
    getline(cin,a);
    char b[100];
    int len=a.length();
//    cout<<len<<endl;
//    cout<<a[9]<<endl;
    int value=0;
    for(int i=0;i<len;i++){
        b[value]=a[i];
//        cout<<i<<" "<<value<<b[value]<<" "<<a[i]<<endl;
        value++;
        if(a[i]=='a' || a[i]=='e' || a[i]=='i' || a[i]=='o' || a[i]=='u'){
            i=i+2;
        }
//    }
    }
    for(int j=0;j<value;j++){
        cout<<b[j];
    }
    cout<<endl;
    return 0;
}
