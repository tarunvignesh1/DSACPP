#include<bits/stdc++.h>

using namespace std;

struct test{
    int val1;
    string val2;
    bool val3=true;

};

int main(){

    double a,b,c,d,e;
    test my_test;
    cout<<"enter test attributes"<<endl;
    cin>>my_test.val1>>my_test.val2>>my_test.val3;
    cout<<"\nthe values are "<<endl;
    cout<<my_test.val1<<"\t"<<my_test.val2<<"\t"<<my_test.val3<<endl;

    return 0;

}