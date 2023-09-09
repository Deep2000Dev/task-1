#include <iostream>
#include <ctime>

int main() {
    // Seed the random number generator with the current time
    unsigned int seed = static_cast<unsigned int>(time(NULL));
    srand(seed);

    // Generate a random number between 1 and 100
    int secretNumber = rand() % 100 + 1;
    int userGuess;
    int attempts = 0;

    std::cout << "Welcome to the Guess the Number game!" << std::endl;
    std::cout << "I have selected a random number between 1 and 100." << std::endl;

    while (true) {
        std::cout << "Guess the number: ";
        std::cin >> userGuess;
        attempts++;

        if (userGuess == secretNumber) {
            std::cout << "Congratulations! You guessed the correct number " << secretNumber << " in " << attempts << " attempts." << std::endl;
            break;
        } else if (userGuess < secretNumber) {
            std::cout << "Too low. Try again." << std::endl;
        } else {
            std::cout << "Too high. Try again." << std::endl;
        }
    }
   

    return 0;
}
