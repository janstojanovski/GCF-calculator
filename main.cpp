#include <iostream>

using namespace std;

long long int navtora(long long int in){
    long long int out=1;
    for(long long int i=0;i<in;i++){
        out*=2;
    }
    return out;
}

int main(){
    int n,i,j=0,k=0,najmal=navtora((sizeof(int)*8)-1)-1;
    cout<<"Kolku broevi: ";
    cin>>n;
    int a[n];
    bool sega=true;
    for(i=0;i<n;i++){
        cout<<'['<<i<<"]\tBrojka: ";
        cin>>a[i];
        najmal=min(najmal,a[i]);
    }
    cout<<endl;
    int faktori[najmal];
    for(i=1;i<=najmal;i++){
        sega=true;
        for(j=0;j<n;j++){
            if(a[i]%i!=0){
                sega=false;
            }
        }
        if(sega){
            faktori[k++]=i;
        }
    }
    for(i=0;i<k;i++){
        cout<<'['<<i<<']'<<'\t'<<faktori[i]<<endl;
    }
    cout<<endl<<"gcf(";
    for(i=0;i<n;i++){
        cout<<a[i];
        if(i+1<n){
            cout<<',';
        }
    }
    cout<<")="<<faktori[k-1]<<endl;
    return 0;
}
