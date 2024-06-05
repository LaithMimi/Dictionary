//213923931
#ifndef DICTIONARY_H
#define DICTIONARY_H

#include <cstdio>
#include <string>
#include <list>
#include "entry.h"

class Dictionary {
private:
    std::list<Entry> values;
public:
    Dictionary();
    ~Dictionary();
    void insert(const std::string& input);
    void print();
    void search(const std::string& input)const;
    void remove(const std::string& input);
};

#endif // DICTIONARY_H
