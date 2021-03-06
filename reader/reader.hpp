/*************************************************************************
 * Reader module
 * use getWords(filename,mode) to get a linked list of words from a file
 * TEXT_MODE formats the text
 * DICT_MODE does not
 *************************************************************************/
#ifndef READER_H
#define READER_H
#include <iostream>
#include <fstream>
#include <list>
#include <string>
#include <sstream>
#include <iterator>

#define DICT_MODE 0
#define TEXT_MODE 1

std::list<std::string> getWords(const std::string& filename, int mode);
#endif
