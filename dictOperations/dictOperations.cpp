#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <list>
#include "../editDist/editDist.hpp"

static std::vector<std::vector<std::string> > dictionary;
static std::list<std::string> candidates;

void createDict(std::string filename){
        std::string currWord;
        int currlen;

		//possible to make into vector of unordered maps????
        int i, j;
        for(i=0; i<12; i++){
                std::vector<std::string> temp;
                dictionary.push_back(temp);
        }

        std::ifstream testfile(filename);
        while(testfile >> currWord){
                currlen = currWord.length()-1;
                dictionary.at(currlen).push_back(currWord);
        }

        /*for(i=0; i<12; i++){
                if(dictionary.at(i).size() != 0){
                        for(j=0; j<dictionary.at(i).size(); j++){
                                std::cout << dictionary.at(i).at(j) << std::endl;
                        }
                        std::cout << std::endl;
                }
        }*/
}

bool findWord(std::string word){
	//can make constant if vector of unordered maps
	int i;
	if(word.length() > 12) return false;
	for(i=0; i<dictionary.at(word.length()-1).size(); i++){
		if(word.compare(dictionary.at(word.length()-1).at(i)) == 0){
			return true;
		}
	}
	return false;
}

void withinTwoEdits(std::string word){
	//if iteration of unordered maps possible, can still do this part easily
	bool found = findWord(word);
	if(found){
		std::cout << word << " exists in dictionary" << std::endl;
		candidates.push_back(word);
		return candidates;
	}
	else{
		std::cout << "not in dictionary" << std::endl;
		candidates.push_back("hi");
		return candidates;
	}
}
