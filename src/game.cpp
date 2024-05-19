#include "game.hpp"
#include <iostream>
#include <random>

void Game::start() {
    std::cout << "Enter rock, paper or scissors: ";
    std::cin >> userInput;

    int option;

    if (userInput == options[0]) {
        std::cout << "You chose: rock.\n";
        option = 0;
    }

    else if (userInput == options[1]) {
        std::cout << "You chose: paper.\n";
        option = 1;
    }

    else if (userInput == options[2]) {
        std::cout << "You chose: scissors.\n";
        option = 2;
    }

    else {
        std::cout << "Unknown option... aborting...\n";
        return;
    }

    std::random_device dev;
    std::uniform_int_distribution<int> choiceDistribution(0,2);

    int computerOption = choiceDistribution(dev);

    std::cout << "Computer chose: " << options[computerOption] << '\n';
    
    if (option == computerOption) std::cout << "It's a draw!\n";
    else if ((option + 1) % 3 == computerOption) std::cout << "You lost!\n";
    else std::cout << "You won!\n";
}