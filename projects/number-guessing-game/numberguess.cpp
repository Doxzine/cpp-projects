#include <iostream>
#include <cstdlib>
int main() {

    int guess;
    srand(time(NULL));
    int num = std::rand() % 100 + 1;

    std::cout << "Guess the number: ";
    std::cin >> guess;
   
    while (guess != num) {
        if (guess > num) {
            std::cout << "Too big!\n";
        }
        else if (guess < num) {
            std::cout << "Too small!\n";
        }
        std::cout << "Guess the number: ";
        std::cin >> guess;
        }

    if (guess == num) {
       std::cout << "You did it!\n";
       return 0;
    }
}