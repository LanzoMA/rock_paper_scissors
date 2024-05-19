#include <string>

class Game {
public:
    void start();

private:
    std::string options[3] = {"rock", "paper", "scissors"};

    std::string userInput;
    int userChoice;

    int computerChoice;
};