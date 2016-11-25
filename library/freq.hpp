/*************************************************************************
 * ---Library freq---                                                *
 *  Suggested use:                                                       *
 *  --> Construct a Text Object using a list of strings in               *
 *      the constructor.                                                 *
 *  --> Use the getProportion(const std::string& word) method to find    *
 *      the proportion of a given word in the text.                      *
 *      Returns -1 if word is not present                                *
 *                                                                       *
 *************************************************************************/
#ifndef FREQ_H
#define FREQ_H
#include <list>
#include <unordered_map>

class Text{
    // Inner class def
    private:
        struct Word{
            std::string value;
            int count;
        };
    private:
        int size;
    // private methods
    private:
        std::unordered_map<std::string, Word> words;
        void insertWord(const std::string word);

    public:
        Text(const std::list<std::string>& words);
        double getProportion(const std::string& word);

};
#endif
