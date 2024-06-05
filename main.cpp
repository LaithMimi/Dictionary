#include <iostream>
#include <limits>
#include "dictionary.h"
void showMenu() {
    std::cout << "1. Insert word\n";
    std::cout << "2. Search word\n";
    std::cout << "3. Remove word\n";
    std::cout << "4. Print dictionary\n";
    std::cout << "5. Exit\n";
}

int main() {
    Dictionary myDictionary;
    int choice;
    std::string input;

    do {
        showMenu();
        std::cin >> choice;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Clears the newline character from the buffer

        if (std::cin.fail() || choice < 1 || choice > 5) {
            std::cout << "Invalid choice. Please enter a number between 1 and 5.\n";
            std::cin.clear(); // Clear error state from cin
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n'); // Ignore remaining input on the line
            continue;
        }

        switch (choice) {
            case 1:
                std::cout << "Enter word to insert: \n";
                getline(std::cin, input);
                myDictionary.insert(input);
                break;
            case 2:
                std::cout << "Enter word to search: \n";
                getline(std::cin, input);
                myDictionary.search(input);
                break;
            case 3:
                std::cout << "Enter word to remove: \n";
                getline(std::cin, input);
                myDictionary.remove(input);
                break;
            case 4:
                myDictionary.print();
                break;
            default:
                break;
        }
    } while (choice != 5);

    return 0;
}