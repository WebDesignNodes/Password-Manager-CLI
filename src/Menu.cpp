
// * Libraries Required

#include <string>
#include <vector>

// * Class Required

#include "FileManager.hpp"
#include "Input_Handler.hpp"
#include "Menu.hpp"

using namespace std;

void Menu::display_Profile_Selector(vector<string> profiles) {

    cout<<"Password Manager - Profile Selector"<<endl<<endl;

    int profiles_counter = 1;

    for (const string &profile : profiles) {

        cout << profiles_counter << ") " << profile << endl;
        profiles_counter++;

    }

    cout<<profiles_counter<<") Crear nuevo perfil"<<endl<<endl;

    int user_selection;

    cout<<"Ingresa tu seleccion: ";
    user_selection = Input_Handler::get_User_Menu_Selection();


}

void Menu::display_New_Profile_Form() {

    cout<<"Password Manager - New Profile Form"<<endl<<endl;

    string profile_name;

    cout << "Escribe el nombre del perfil: ";

    profile_name = Input_Handler::get_User_Text_Input();

    // * Creating Profile

    FileManager::create_New_Profile(profile_name);

    string profile_password;

    cout << "Escribe el nombre del perfil: ";

    profile_password = Input_Handler::get_User_Text_Input();

    cout << "Must create: " << profile_password;
}

void Menu::display_Main_Menu() {

    int menu_user_selection;

    do {

        cout << "Password Managerasdasdas" << endl
             << endl
             << "0) Cerrar" << endl
             << "1) Explorar Contraseñas" << endl
             << "2) Guardar Contraseña" << endl
             << "3) Generar Contraseña" << endl
             << endl
             << "Ingresa tu seleccion: ";

        menu_user_selection = Input_Handler::get_User_Menu_Selection();

    } while (menu_user_selection != 0);
}