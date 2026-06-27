#include <iostream>
#include <string>
#include <cctype>

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

    for (int i = 0; i < pass.length(); i++) {
        //char c = pass[i];

        if (std::isupper(pass[i])){
            hasUpper = true;
        }
        else if (std::islower(pass[i])){
            hasLower = true;
        }
        else if (std::isdigit(pass[i])){
            hasDigit = true;
        }
        else if (std::ispunct(pass[i])){
            hasSpecial = true;
        }
    }

    if (hasUpper == true){ 
        pScore++;
    }
    else {
        std::cout << "Try to enter an uppercase letter, you fucking idiot!!!\n"; return ;
    }

    if (hasLower == true){
         pScore++;
    }
    else {
        std::cout << "Try to enter a lowercase letter, you fucking idiot!!!\n"; return ;
    }
    
    if (hasDigit == true) {
        pScore++;
    }
    else {
        std::cout << "Try to enter a digit, you fucking idiot!!!\n"; return ;
    }

    if (hasSpecial == true) {
        pScore++;
    }
    else  {
        std::cout << "Try to enter a special character, you fucking idiot!!!\n"; return ;
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