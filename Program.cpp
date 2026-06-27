#include <iostream>
#include <string>
#include <cctype>

int checkPassword(std::string pass){
    int pScore = 0;

    bool hasUpper = false, hasLower = false, hasDigit = false, hasSpecial = false;

    if (pass.length() >= 8){
        pScore++;
    }
    else {
        std::cout << "Password you entered is too short you Dumbass!!!";

        return 0;
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
        std::cout << "Try to enter an uppercase letter, you fucking idiot!!!\n"; return 0;
    }

    if (hasLower == true){
         pScore++;
    }
    else {
        std::cout << "Try to enter a lowercase letter, you fucking idiot!!!\n"; return 0;
    }

    if (hasDigit == true) {
        pScore++;
    }
    else {
        std::cout << "Try to enter a digit, you fucking idiot!!!\n"; return 0;
    }

    if (hasSpecial == true) {
        pScore++;
    }
    else  {
        std::cout << "Try to enter a special character, you fucking idiot!!!\n"; return 0;
    }
    
    return pScore;
}

void finalOutput(int pScore, std::string pass){
    std::cout << "\nPassword: " << pass << std::endl;
    std::cout << "Password Score: " << pScore << std::endl;

    if (pScore == 5){
        std::cout << "Your password is strong enough, you genius!\n";
    }
}

int main() {
    std::string password;
    
    std::cout << "Enter Your Password: ";
    std::getline(std::cin, password);
    
    int pScore = checkPassword(password);
    if (pScore == 5) {
        finalOutput(pScore, password);
    }

    return 0;
}