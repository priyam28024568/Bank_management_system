#ifndef USERACCS_H
#define USERACCS_H
#include <string_view>
#include <iostream>
#include <vector>
#include <string>
class newuseraccs
{
public : 
    newuseraccs();
    newuseraccs(std::string& username, std::string& password);
    ~newuseraccs();

 std::vector<std::string> v;
 std::vector<std::string> N;
 
void delete_account() {

    std::cout << "confirm you want to delete your account? type yes or no" << std::endl;
    std::string answer;
    std::cin >> answer;

    if(answer == "yes"){
        std::cout << "your acc is successfully deleted " << std::endl;
    }
   else if(answer == "no"){
        std::cout << "choosen operation is cancelled " << std::endl;
   } 
   else{
        std::cout << "No valid input is provided " << std::endl;
   }

}    

};

#endif