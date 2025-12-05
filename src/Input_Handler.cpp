
#include <iostream>
#include <string>

#include "Input_Handler.hpp"

using namespace std;

int Input_Handler::get_User_Menu_Selection() {

    int menu_selection;

    cin >> menu_selection;

    return menu_selection;
}

string Input_Handler::get_User_Text_Input() {

    string user_input;

    getline(cin >> ws, user_input);

    return user_input;
    
}