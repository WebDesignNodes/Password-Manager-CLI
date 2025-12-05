#ifndef MENU_HPP
#define MENU_HPP

#include <string>
#include <vector>

using namespace std;

class Menu {

  public:

    static void display_Profile_Selector(vector<string> profiles);
    static void display_New_Profile_Form();
    static void display_Main_Menu();

};

#endif // MENU_HPP