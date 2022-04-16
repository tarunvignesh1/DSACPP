//Impelemtation file for spacebar.h
#include <iostream>
#include <string>
#include "spacebar.hpp"

void spacebar::set_value1(int val){
    val1 = val;
}
void spacebar::set_value2(int val){
    val2 = val;
}
void spacebar::set_cmt(std::string cmts1){
    cmt = cmts1;
}

int spacebar::get_value1(){
    return val1;
}

int spacebar::get_value2(){
    return val2;
}
std::string spacebar::get_cmt(){
    return cmt;
}

void spacebar::spacebar_op(){
    int temp;
    temp = val1;
    val1 = (val1-val2);
    val2 = (temp-val1);
    cmt = cmt+" Done";

}





