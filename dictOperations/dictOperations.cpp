#include <iostream>
#include <string>
#include <fstream>
#include <vector>

static  std::vector<std::vector<std::string> > dictionary;

void createDict(std::string filename){
        std::string currWord;
        int currlen;
        std::vector<std::vector<std::string> > dictionary;

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

        for(i=0; i<12; i++){
                if(dictionary.at(i).size() != 0){
                        for(j=0; j<dictionary.at(i).size(); j++){
                                std::cout << dictionary.at(i).at(j) << std::endl;
                        }
                        std::cout << std::endl;
                }
        }
}
