#include <iostream>
#include <string>
using namespace std;

int main(void){
    string a;
    int value=0;
    char b[250];
//    cin.ignore();
    getline(cin,a);
//    cout<<a[0]<<endl;
    for(int i=0;a[i]!='\0';i++){
        if(a[i]==a[i+1]){
//            cout<<"====="<<i<<endl;
            
        }
        else{
//            cout<<"hhh";
            b[value]=a[i];
            value++;
//            cout<<value<<endl;
//            cout<<b[i]<<endl;
        }
    }
//    cout<<"value"<<value;
    for(int j=0;j<value;j++){
    cout<<b[j];
    }
    cout<<endl;
    return 0;
}
