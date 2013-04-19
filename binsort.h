// binsory.h
// written by Joshua Underwood
// on 4/19/13
// for Programming Assignment 5

#include <string>
#include <list>
#include <fstream>

namespace Underwood
{
    //constants
    const unsigned int MAX_SCORE = 100;

    //forward declarations
    class BinSort;
    std::ofstream& operator << (std::ofstream& out , const BinSort &input);

    struct student
    {
        std::string name;
        unsigned long ssn;
        unsigned int total_score;
    };

    class BinSort
    {
     public:
        BinSort();
        BinSort(const char*);
        BinSort(std::list<student>&);
        ~BinSort();

        bool addStudentsFromFile(const char*);
        bool sort(std::list<student>&);

        friend std::ofstream& operator << (std::ofstream& out , const BinSort &input);

     protected:
        std::list<student> theBin[MAX_SCORE];

     private:
    };

}
