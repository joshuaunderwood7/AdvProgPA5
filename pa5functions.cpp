//    pa5functions.cpp
//    written by Joshua Underwood
//    for Programming assignment 5
//    CSCI 3320
//
//    Standard functions used by PA5

#include "pa5functions.h"
#include "binsort.h"
#include <cstdio>
#include <iostream>
#include <fstream>

namespace Underwood
{

bool PROCESSFILE(const std::string input_filename, const std::string output_filename)
{
    BinSort process(input_filename.c_str());
    std::ofstream out(output_filename.c_str());
    out << process;
    out.close();
    return true;
}

bool PROCESSFILE(std::string input_filename, std::ostream &output_stream)
{
    BinSort process(input_filename.c_str());
    output_stream << process;
    return true;
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
