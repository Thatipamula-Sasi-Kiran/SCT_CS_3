#include <iostream>
#include <string>

void checkPassword(std::string pass){
    int pScore = 0;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    if (pass.length() >= 8){
        pScore++;
    }
    else {
        std::cout << "Password you entered is too short you Dumbass!!!";

        return ;
    }

    std::cout << pScore ;
}

int main() {
    std::string password;
    
    std::cout << "Enter Your Password: ";
    std::getline(std::cin, password);

    checkPassword(password);

    return 0;
}