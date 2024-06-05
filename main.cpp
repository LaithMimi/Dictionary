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
    std::string input;
    while(true){
        std::cout << "Enter a search word (or 'exit' to quit):" << std::endl;
        getline(std::cin,input);
        if(input=="exit"){
            break;
        }
        myDictionary.search(input);
    }

    return 0;
}