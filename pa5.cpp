//    pa5.cpp
//    written by Joshua Underwood
//    for Programming assignment 5
//    CSCI 3320
#include <iostream>
#include <fstream>
#include <string>
#include "pa5functions.h"


int main(int argc, const char *argv[])
{
    Underwood::GREETING();
    if(argc != 2)
    {
        std::cerr  << "call program: pa5 <input file> \n output.txt is created\n";
        return 1;
    }

    if(Underwood::PROCESSFILE(argv[1],std::cout)) return 0;

    std::cerr << "could not open file\n";
    return 2;
}

