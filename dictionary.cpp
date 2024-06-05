//213923931
#include <iostream>
#include "dictionary.h"

Dictionary::Dictionary()= default;
Dictionary::~Dictionary()= default;

void Dictionary::insert(const std::string& input){
    for (auto& item : values) {
        if (item.getWord() == input) {
            item.increment();
            return;
        }else if(item.getWord()=="exit")return;
    }
    values.emplace_back(input);//push_front(Entry(input))
}
void Dictionary::print(){
    for (auto& i : values) {
        i.print();
    }
}
void Dictionary::search(const std::string& input)const{ //search for a word and return how many times written
    for(auto& item : values){
        if(item.getWord()==input){
            std::cout << input <<": " << item.getCount()<< std::endl;
        }
    }
}
void Dictionary::remove(const std::string &input) {
    values.remove_if([&input](const Entry& item){return item.getWord()==input;});
}

