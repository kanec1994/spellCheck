#include <iostream>
#include "textfreq.hpp"

using namespace std;
int main()
{
    cout << "Testing textfreq library \n";
    list<string> words = {"hello", "my" , "hello"};
    Text text(words);
    cout << text.getProportion("poop") << endl;
    
}
