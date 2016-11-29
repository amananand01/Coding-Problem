#include<iostream>
using namespace std;
int main(){
    int t;cin>>t;
    int g[50];
    int a[1000];
    int value=0;
    for(int i=0;i<t;i++){
        cin>>g[i];
        for(int j=0;j<g[i];j++){
            cin>>a[value];
            value++;
        }
    }
    int counter,val,e,q;
    for(int p=0;p<t;p++){
        for(int k=0;k<g[p];k++){
            
            for(int l=0;l<g[p];l++){
                
                if(a[counter]==a[val]){
                    e++;
                }
                val++;
            }
            if(e==0 || e==1){cout<<a[counter]<<endl;break;}
            counter++;
            val=0;
            for(int o=0;o<p;o++){
                val=val+g[o];
            }
            val=a[q];
            
            e=0;
        }
        
        counter=0;
        for(int f=0;f<=p;f++){
            counter=counter+g[f];
        }
        val=counter;
        //        cout<<"counter"<<counter<<endl;
    }
    return 0;
}
