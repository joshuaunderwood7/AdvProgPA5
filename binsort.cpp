// binsory.cpp
// written by Joshua Underwood
// on 4/19/13
// for Programming Assignment 5

#include "binsort.h"
#include <iostream>
#include <fstream>


namespace Underwood
{

    std::ofstream& operator << (std::ofstream& out , const BinSort &input)
    {
        std::list<student>::const_iterator it;
        for(int i = 99; i >= 0; i--)
        {
            for(it = input.theBin[i].begin();
             it!=input.theBin[i].end(); it++)
            {
                out << it->name << " ";
                out << it->ssn << " ";
                out << it->total_score << "\n";
            }
        }
        return out;
    };

    BinSort::BinSort()
    {
        // ctor
    };

    BinSort::BinSort(char* filename)
    {
        std::ifstream in(filename);
        if(in.is_open())
        {
            student newstudent;
            while (in.good())
            {
                in >> newstudent.name;
                in >> newstudent.ssn;
                in >> newstudent.total_score;
                if(newstudent.total_score > 100) newstudent.total_score = 100;
                //if(newstudent.total_score < 0) newstudent.total_score = 0; //unsigned int. not needed
                theBin[newstudent.total_score-1].push_back(student(newstudent));
            }
            in.close();
        }
        else { std::cerr << "Error reading file " << filename << "\n";  }
    };

    BinSort::BinSort(std::list<student>& input)
    {
        std::list<student>::iterator it;
        for( it = input.begin(); it != input.end(); it++ )
        {
            theBin[it->total_score-1].push_back(*it);
        }
    };

    BinSort::~BinSort()
    {
        for(int i = 0; i < 100; i++)
            theBin[i].clear();
    };

    bool BinSort::addStudentsFromFile(char* filename)
    {
        std::ifstream in(filename);
        if(in.is_open())
        {
            student newstudent;
            while (in.good())
            {
                in >> newstudent.name;
                in >> newstudent.ssn;
                in >> newstudent.total_score;
                if(newstudent.total_score > 100) newstudent.total_score = 100;
                //if(newstudent.total_score < 0) newstudent.total_score = 0; //unsigned int. not needed
                theBin[newstudent.total_score-1].push_back(student(newstudent));
            }
            in.close();
        }
        else { return false; }
        return true;
    };

    bool BinSort::sort(std::list<student>& input)
    {
        std::list<student>::iterator it;
        for( it = input.begin(); it != input.end(); it++ )
        {
            theBin[it->total_score-1].push_back(*it);
        }
        return true;
    };

}
