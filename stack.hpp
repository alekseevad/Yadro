#ifndef _STACK_HPP_
#define _STACK_HPP_

#include <vector> 
#include <string>
#include <stdexcept>

class Stack
{
private:
    std::vector<char> bracketC;
    std::vector<char> bracketR;
    std::vector<char> bracketV;

public:
    Stack();
    ~Stack();

    bool readSeq(const std::string& sequence);

};

#endif
