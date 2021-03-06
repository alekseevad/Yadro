#include "stack.hpp"

Stack::Stack()
{ }

Stack::~Stack()
{ }

bool Stack::readSeq(const std::string& sequence)
{
    for(char const &i : sequence)
    {
        switch(i)
        {
            case '{':
            {
                bracketV.push_back(i);
                break;
            }

            case '[':
            {
                bracketR.push_back(i);
                break;
            }

            case '(':
            {
                bracketC.push_back(i);
                break;
            }

            case ')':
            {
                if(bracketC.size() == 0)
                {
                    return false;
                }
                else
                {
                    bracketC.pop_back();
                }
                break;
            }

            case ']':
            {
                if(bracketR.size() == 0)
                {
                    return false;
                }
                else
                {
                    bracketR.pop_back();
                }
                break;
            }

            case '}':
            {
                if(bracketV.size() == 0)
                {
                    return false;
                }
                else
                {
                    bracketV.pop_back();
                }
                break;
            }

            default:
                throw std::invalid_argument("Such brackets doesn't supported");
                break;
        }
    }
    if((bracketC.size() == 0) && (bracketR.size() == 0) && (bracketR.size() == 0)) return true;
    return false;
}
