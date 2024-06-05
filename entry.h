//213923931

#ifndef ENTRY_H
#define ENTRY_H

#include <cstdio>
#include <string>

class Entry {
private:
// has two private member variables,
//These private members are only accessible within the class.
    std::string word;
    int counter;
public:
    //constructor to initialize an Entry object.
    Entry(const std::string& input);
    ~Entry();
    void increment();
    void print();
    std::string getWord()const;
};

#endif // ENTRY_H
