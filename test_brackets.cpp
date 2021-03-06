#include <iostream>
#include "stack.hpp"

int main(int argc, char* argv[])
{
    std::string line = static_cast<std::string>(argv[1]);
    std::cout << std::boolalpha;
    try
    {
        switch(argc)
        {
            case 2:
            {
                Stack stack_;
                std::cout << stack_.readSeq(line);
                break;
            }
            default:
                throw std::invalid_argument("Must be only 2 command line arguments");
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    
    return 0;
}