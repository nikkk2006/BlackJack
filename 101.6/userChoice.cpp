#include "userChoice.h"


char userChoice(){
    
    std::cout << "Enter your choice(hit - h, stand - s): _\b";
    char choice;

    do {
        std::cin >> choice;
    } while (choice != 'h' && choice != 's');

    return choice;
}
