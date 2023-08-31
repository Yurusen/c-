#include <iostream>
#include <ctime>
#include <cstdlib>

std::string getUserChoice(const std::string& userInput) {
    std::string lowercaseInput = userInput;
    std::transform(lowercaseInput.begin(), lowercaseInput.end(), lowercaseInput.begin(), ::tolower);

    if (lowercaseInput == "rock" || lowercaseInput == "paper" || lowercaseInput == "scissors" || lowercaseInput == "bomb") {
        return lowercaseInput;
    } else {
        return "Error!";
    }
}

std::string getComputerChoice() {
    int randomNumber = std::rand() % 3;
    switch (randomNumber) {
        case 0:
            return "rock";
        case 1:
            return "paper";
        case 2:
            return "scissors";
        default:
            return "";
    }
}

std::string determineWinner(const std::string& userChoice, const std::string& computerChoice) {
    if (userChoice == computerChoice) {
        return "You have tied!";
    } else if (userChoice == "rock") {
        if (computerChoice == "paper") {
            return "Computer has won!";
        } else {
            return "You won!";
        }
    } else if (userChoice == "paper") {
        if (computerChoice == "scissors") {
            return "Computer has won!";
        } else {
            return "You won!";
        }
    } else if (userChoice == "scissors") {
        if (computerChoice == "rock") {
            return "Computer has won!";
        } else {
            return "You won!";
        }
    } else if (userChoice == "bomb") {
        return "You won with the MASTER WORD!";
    } else {
        return "Invalid choice!";
    }
}

int main() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));

    std::string userChoice = getUserChoice("bomb");
    std::string computerChoice = getComputerChoice();

    std::cout << "You threw " << userChoice << "\n";
    std::cout << "The computer threw " << computerChoice << "\n";
    std::cout << determineWinner(userChoice, computerChoice) << "\n";

    return 0;
}
