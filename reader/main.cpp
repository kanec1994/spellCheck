#include <iostream>
#include "reader.hpp"

/* An example of using getWords
 */

using namespace std;

int main()
{
    list<string> words = getWords("sample.txt", TEXT_MODE);
    cout << "Testing words\n";
    for(string word : words){
        cout << word << endl;
    }
    return 0;
}

