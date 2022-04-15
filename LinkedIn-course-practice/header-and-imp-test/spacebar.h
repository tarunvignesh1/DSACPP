#pragma once
#include <string>
//Class spacebar will hold 3 members 2 integers and 1 str, and perform some basic operations 
class spacebar{
    public:
        // constructor
        spacebar(int value1,int value2, std::string cmts){
            val1 = value1;
            val2 = value2;
            cmt = cmts;
        }
        // Getter and setter
        void set_value1(int val);
        void set_value2(int val);
        void set_cmt(std::string cmts1);
        int get_value1();
        int get_value2();
        std::string get_cmt();
        // operations
        void spacebar_op();

        // private members
    private:

        int val1,val2;
        std::string cmt;

};