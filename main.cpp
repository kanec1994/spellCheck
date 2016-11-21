#include <iostream>
#include "libs.hpp"

using namespace std;

int main(int argc, char** argv)
{
    cout << "Testing" << endl;
    list<string> words = getWords("sample.txt", TEXT_MODE);
    Text text(words);
    cout << "freq of " << argv[1] <<" " << text.getProportion(argv[1]) << endl;
    return 0;
}
