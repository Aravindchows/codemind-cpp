#include<iostream>
#include<math.h>
using namespace std;
int fun(int n){
    for(int i=2;i<sqrt(n)+1;i++){
        if(n%i==0)
        return 0;
    }return 1;
}
int main(){
    int n;
    cin>>n;
    if (fun(n)){
        cout<<"prime";
    }else{
        cout<<"not a prime";
    }
}