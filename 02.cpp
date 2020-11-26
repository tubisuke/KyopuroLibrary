#include<bits/stdc++.h>
using namespace std;
int main(){

    long long a,b,x;

    cin>>a>>b>>x;

    long long cnt=0;

    if(a<=x && x<=b){
        
        a = a+(x%a);

    }

    cout<<(b-a)/x<<endl;


}