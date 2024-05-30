#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    // Initialize random seed
    std::srand(std::time(0));

    // Variables to store user input and random number
    int cash, userNumber, randomNumber;

    // Ask the user to enter the amount of cash
    std::cout << "Enter the amount of cash you want to bet: ";
    std::cin >> cash;

    // Check for valid input
    if (cash <= 0) {
        std::cout << "Invalid amount of cash. Please enter a positive number.\n";
        return 1;
    }

    // Ask the user to select a number between 1 and 10
    std::cout << "Select a number between 1 and 10: ";
    std::cin >> userNumber;

    // Check for valid input
    if (userNumber < 1 || userNumber > 10) {
        std::cout << "Invalid number. Please select a number between 1 and 10.\n";
        return 1;
    }

    // Generate a random number between 1 and 10
    randomNumber = (std::rand() % 10) + 1;

    // Display the generated number
    std::cout << "The generated number is: " << randomNumber << std::endl;

    // Determine if the user wins or loses
    if (userNumber == randomNumber) {
        cash *= 10;  // User wins 10 times the bet amount
        std::cout << "Congratulations! You won " << cash << " units of cash!\n";
    } else {
        cash = 0;  // User loses all their money
        std::cout << "Sorry, you lost. Better luck next time.\n";
    }

    return 0;
}
