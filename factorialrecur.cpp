#include<bits/stdc++.h>

using namespace std;

int facto(int a){

    if(a<=1){
        return 1;
    }
    return facto(a-1)*a;
}

int main(){
    cout<<facto(5);
}


