#include <iostream>
#include "dictionary.h"

int main() {
    Dictionary myDictionary;

    myDictionary.insert("Crime and Punishment");
    myDictionary.insert("War and Peace");
    myDictionary.insert("Crime and Punishment");
    myDictionary.insert("War and Peace");
    myDictionary.insert("Crime and Punishment");
    myDictionary.insert("Jane Eyre");
    myDictionary.insert("The Great Gatsby");
    myDictionary.insert("Jane Eyre");
    myDictionary.insert("Moby-Dick");
    myDictionary.insert("The Catcher in the Rye");


    // Print the dictionary contents
    std::cout << "Dictionary contents:" << std::endl;
    myDictionary.print();

    return 0;
}