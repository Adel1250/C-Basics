#include <iostream>

 int main()
 {
     int guess;
     std::cout << "\n** Simple Guess Game Applying Ternary Operator **\n\n" << "* Enter a number : ";
     std::cin >> guess;
     guess == 12 ? std::cout << "\n* Good Job !\n\n" : std::cout << "\n* Keep it up\n\n";
     std::cout << "*** Thanks ! ***\n\n";
     return 0;
 }