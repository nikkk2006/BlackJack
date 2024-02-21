#include "userChoice.h"


bool userChoice(){
    
    char choice;

    do {
        std::cout << "Enter your choice(hit - h, stand - s): _\b";
        std::cin >> choice;
    } while (choice != 'h' && choice != 's');

    return (choice == 'h') ? true : false;
}
