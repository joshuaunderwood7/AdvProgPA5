#ifndef PA5FUNCTIONS
#define PA5FUNCTIONS

#include <cstdlib>
#include <string>
#include <iostream>

namespace Underwood
{
    bool PROCESSFILE(std::string input_filename, std::string output_filename);
    bool PROCESSFILE(std::string input_filename, std::ostream &output_stream);
    bool GREETING(void);
    bool ENTER_TO_CONTINUE(void);
}


#endif
