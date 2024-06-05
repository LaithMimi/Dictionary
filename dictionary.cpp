//213923931

#include "dictionary.h"


Dictionary::Dictionary()= default;
Dictionary::~Dictionary()= default;
void Dictionary::insert(const std::string& input){
    for (auto& item : values) {
        if (item.getWord() == input) {
            item.increment();
            return;
        }
    }
    values.emplace_front(input);//push_front(Entry(input))
}
void Dictionary::print(){
    for (auto& i : values) {
        i.print();
    }
}


