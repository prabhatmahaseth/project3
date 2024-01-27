#include <iostream>
#include <ctime>
#include <cstdlib>

// Function to generate a random choice for the computer
int createComputerChoice() {
    return rand() % 3 + 1; // 1 represents rock, 2 represents paper, 3 represents scissors
}

// Function to determine the winner of the game
void determineWinner(int userChoice, int computerChoice) {
    std::cout << "Computer chose: ";
    switch (computerChoice) {
        case 1:
            std::cout << "Rock\n";
            break;
        case 2:
            std::cout << "Paper\n";
            break;
        case 3:
            std::cout << "Scissors\n";
            break;
    }

    std::cout << "You chose: ";
    switch (userChoice) {
        case 1:
            std::cout << "Rock\n";
            break;
        case 2:
            std::cout << "Paper\n";
            break;
        case 3:
            std::cout << "Scissors\n";
            break;
    }

    if (userChoice == computerChoice) {
        std::cout << "It's a tie!\n";
    } else if ((userChoice == 1 && computerChoice == 3) ||
               (userChoice == 2 && computerChoice == 1) ||
               (userChoice == 3 && computerChoice == 2)) {
        std::cout << "You win!\n";
    } else {
        std::cout << "Computer wins!\n";
    }
}

int main() {
    srand(time(0)); // Seed for random number generation

    int userChoice;

    std::cout << "Welcome to Rock, Paper, Scissors!\n";
    std::cout << "1. Rock\n";
    std::cout << "2. Paper\n";
    std::cout << "3. Scissors\n";
    std::cout << "Enter your choice (1-3): ";
    std::cin >> userChoice;

    // Validate user input
    if (userChoice < 1 || userChoice > 3) {
        std::cout << "Invalid choice. Please enter a number between 1 and 3.\n";
        return 1; // Exit program with an error code
    }

    int computerChoice = createComputerChoice();
    determineWinner(userChoice, computerChoice);

    return 0; // Exit program successfully
}
