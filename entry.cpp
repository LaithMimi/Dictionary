//213923931

#include "entry.h"
#include <iostream>

Entry::Entry(const std::string& input) : word(input),counter(1){}
Entry::~Entry()= default;

void  Entry::increment(){
    ++counter;//pre-increment for efficiency
}
void  Entry::print(){
    std::cout << word <<" "<< counter << std::endl;
}
std::string Entry::getWord() const {
    return word;
}