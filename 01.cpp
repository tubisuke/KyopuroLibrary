#include<bits/stdc++.h>
using namespace std;
int main(){

    int M,C;
    string D;

    while(1){

    cin>>M>>C>>D;

    if(D=="L" && M>=1){
        cout<<"[1]"<<" "<<M-1<<" "<<C<<" "<<"R"<<endl;
    }   
    
    if(D=="L" && M>=2){
        cout<<"[2]"<<" "<<M-2<<" "<<C<<" "<<"R"<<endl;
    }   
    if(D=="L" && C>=1){
        cout<<"[3]"<<" "<<M<<" "<<C-1<<" "<<"R"<<endl;
    }   
    if(D=="L" && C>=2){
        cout<<"[4]"<<" "<<M<<" "<<C-2<<" "<<"R"<<endl;
    }   
    if(D=="L" && M>=1 && C>=1){
        cout<<"[5]"<<" "<<M-1<<" "<<C-1<<" "<<"R"<<endl;
    }   
    if(D=="R" && M<=2 ){
        cout<<"[6]"<<" "<<M+1<<" "<<C<<" "<<"L"<<endl;
    }   
    if(D=="R" && M<=1){
        cout<<"[7]"<<" "<<M+2<<" "<<C<<" "<<"L"<<endl;
    }   
    if(D=="R" && C<=2){
        cout<<"[8]"<<" "<<M<<" "<<C+1<<" "<<"L"<<endl;
    }   
    if(D=="R" && C<=1){
        cout<<"[9]"<<" "<<M<<" "<<C+2<<" "<<"L"<<endl;
    }   
    if(D=="R" && M<=2 && C<=2){
        cout<<"[10]"<<" "<<M+1<<" "<<C+1<<" "<<"L"<<endl;
    }   

    }

    return 0;
}
