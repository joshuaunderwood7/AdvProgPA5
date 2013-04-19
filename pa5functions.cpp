//    pa5functions.cpp
//    written by Joshua Underwood
//    for Programming assignment 5
//    CSCI 3320
//
//    Standard functions used by PA5

#include "pa5functions.h"
#inlcude "binsort.h"
#include <cstdio>
#include <iostream>
#include <fstream>

namespace Underwood
{

bool PROCESSFILE(char* input_filename, char* output_filename)
{
    BinSort process(input_filename);
    std::ofstream out(output_filename);
    out << process;
    out.close();

}

bool GREETING(void)
{
    std::cout << "Greetings user." << std::endl
              << "This program was made for CSCI 3320 "
              << "Program Assignment 5 Spring 2013:" << std::endl
              << "By: Joshua Underwood"
              << std::endl << std::endl;
    return true;
}


bool ENTER_TO_CONTINUE(void)
{
    std::cout << "Press ENTER to continue.\n"; std::getchar();
    return true;
}

}
