#include <iterator>
#include "textfreq.hpp"

using namespace std;

/*
 * Implementation of Text object
 */

// Constructor
Text::Text(const list<string>& words)
{
    size = 0;
    for(string word : words){
        insertWord(word);
    } 
}


// adds word to hash
// if word is already in hash, update it's count
void Text::insertWord(const string word)
{
    unordered_map<string,Word>::iterator it;
    if ((it = words.find(word)) == words.end()){ // if the word is not the map
        Word newWord = {word, 1};
        words.insert(make_pair(word,newWord)); // add it to the map
    }
    else{
       (it-> second).count ++;
    }
    size++;
}

// returns the proportion of a word in the text
// returns -1 if the word is not in the text
double Text::getProportion(const string& word)
{
    unordered_map<string,Word>::iterator it;
    if ((it = words.find(word)) == words.end()){// if the word is not the map
        return -1;
    } 
    return (it->second).count / (size * 1.0);
}
