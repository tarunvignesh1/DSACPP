#include <iostream>
#include "spacebar.h"
#include <string>

int main(){
    int val1,val2;
    std::string cmt;

    std::cout<<"In Main.cpp file ->>"<<std::endl;
    std::cout<<"This is spacebar encoder \n please enter the 3 set of values to print the key\n";
    std::cin>>val1>>val2>>cmt;


    spacebar obj(val1,val2,cmt);
    std::cout<<"\n Values \n val1 "<<obj.get_value1()<<"\n val2 "<<obj.get_value2()<<"\n cmt "<<obj.get_cmt();
    obj.spacebar_op();
    std::cout<<"\nPrivate key :";
    std::cout<<obj.get_value1()<<obj.get_value2()<<obj.get_cmt()<<std::endl;
return 0;
}