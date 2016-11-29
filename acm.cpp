#include<iostream>
using namespace std;
int main(){
    int m[100],val,s;
    char q[100];
    string c[101];
    for(int i=0;i<100;i++){
        cin>>m[i];
        if(m[i]==-1){val=i;break;}
        cin>>q[i];
        cin.ignore();
        getline(cin,c[i]);
    }
    char h[val];
    h[0]=q[0];
    for(int t=0;t<val;t++){
        h[t]=q[t];}
    for(int u=0;u<val;u++){
        for(int y=u+1;y<val;y++){
            if(h[u]==h[y]){
                h[y]=0;
            }
        }
//        cout<<h[u]<<endl;
    }
    
    int f=0;
    int g=0;
    int counter=0;
    for(int j=0;j<val;j++){
        if(c[j]=="right"){s++;f=f+m[j];}
        else{
            for(int k=j;k<val;k++){
                if(h[j]==q[k]){
                    g++;
//                    cout<<"counter is: "<<counter<<endl;
                    if(c[k]=="right"){
                        counter=counter+((g-1)*20);
                        f=f+counter;
//                        cout<<"f is: "<<f<<endl;
                        break;
                    }
                }
            }
        }
        g=0;counter=0;
    }
    cout<<s<<" "<<f<<endl;
    return 0;
}
