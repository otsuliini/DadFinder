#include <iostream>
#include <string>
#include <vector>
#include <regex>
#include <cassert>

class HTML_Elements {
    public: 
    
    std::string tagName;
    std::vector<struct HTML_Elements*> children;
    
    struct HTLMLElemnt* parentElement;

};


