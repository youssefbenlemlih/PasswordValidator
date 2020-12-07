#include <iostream>
#include <string>
#include "functions.h"
using namespace std;

int main() {
    bool validPasswordEntered = false;
    do{
        // Getting the user's input
        std::cout << "Enter a password" << std::endl;
        string password;
        getline(std::cin, password);
        //Check if the passwordentered is valid
        if (isValid(password))
        {
            cout<<"Your password is VALID"<<endl;
            validPasswordEntered= true;
        }
        else
        {
            cout<<"Your password is INVALID"<<endl;
        }
    } while (!validPasswordEntered);

    return 0;
}
