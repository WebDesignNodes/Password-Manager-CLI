
// * Libraries Required

#include <iostream>
#include <string>
#include <vector>
#include <Windows.h>

// * Class Required

#include "Menu.hpp"
#include "FileManager.hpp"

#include "Menu.hpp"

// * Namespace

using namespace std;

int main() {

    // * Caracters Support

    SetConsoleOutputCP(CP_UTF8);

    vector<string> profiles = FileManager::get_Profiles();

    if (profiles.empty()) {

        Menu::display_New_Profile_Form();

    }else{

        Menu::display_Profile_Selector(profiles);

    }

    return 0;

}