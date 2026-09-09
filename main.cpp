#include <iostream>
#include "useraccs.h"

//let's store the accounts entered by the user 

int main(){
    std::string username;
    std::string password;
    int i = 1;
     std::cout << "WELCOME TO BANK OF C++ " << std::endl;
   while (i <= 5) {
        std::cout << "1. create new account" << std::endl;
        std::cout << "2. Delete existing account" << std::endl;
     int option;
     std::cout << "choose option : " << std::endl;
     std::cin >> option;
     if(option == 1){
        std::cout << "enter the username : " << std::endl;
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
     std::getline(std::cin, username);
     std::cout << "enter the password : " << std::endl;
     std::getline(std::cin, password);

     newuseraccs new_account(username,password);

     }else{
        std::cout << "no account exist yet" << std::endl;
     }
     std::cout << std::endl;
   }


    return 0;
}