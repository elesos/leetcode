#include<iostream>
using namespace std;

int main(){
    int num, count=0;
    
    cin>>num;
    while(num > 0){
        if(num&1){
            count++;
        }
        num >>= 1;
    }
    cout<<count<<endl;
    return 0;
}