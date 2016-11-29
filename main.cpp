#include <iostream>
#include "libs.hpp"

using namespace std;

int main(int argc, char** argv)
{
    cout << "Testing" << endl;
    list<string> words = getWords("sample.txt", TEXT_MODE);
    Text text(words);
    cout << "freq of " << argv[1] <<" " << text.getProportion(argv[1]) << endl;
    // test edit distance
    string str1 = argv[1]; 
    string str2 = argv[2]; 
    cout << "Edit distance is " << editDistance(str1,str2) << endl;
	string dictName = argv[3];
	//cout << "Current dictionary contents:" << endl;
	createDict(dictName);
	withinTwoEdits("aaron");
	withinTwoEdits("asdbjksa");
    return 0;
}
