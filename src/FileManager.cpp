
// * Libraries Required

#include <cstdlib>
#include <fstream>
#include <filesystem>
#include <iostream>
#include <string>
#include <vector>

// * Class Required

#include "FileManager.hpp"
#include "Utils.hpp"

using namespace std;

string FileManager::get_Secure_Base_Path() {

    const char *appdata_path = getenv("APPDATA");

    if (!appdata_path) {
        cerr << "Error: La variable de entorno APPDATA no está definida."
             << std::endl;
        return "";
    }

    filesystem::path base_path(appdata_path);
    base_path /= "Web Design Nodes";
    base_path /= "Password Manager";

    try {

        filesystem::create_directories(base_path);

    } catch (const filesystem::filesystem_error &e) {

        cerr << "Error al crear el directorio: " << e.what() << endl;
        return "";
    }

    return base_path.string();
}

vector<string> FileManager::get_Profiles() {

    // * Getting Directory Path

    string path_str = FileManager::get_Secure_Base_Path();

    // * Validating Directory Path

    if (path_str.empty()) {

        return {};
    }

    filesystem::path base_path(path_str);
    vector<string> profiles;

    // * Loading Profiles

    try {

        for (const auto &entry : filesystem::directory_iterator(base_path)) {

            // * Validating Directory Content Type

            if (entry.is_regular_file()) {

                string file_name = entry.path().filename().string();

                profiles.push_back(Utils::remove_Extension_From_File_Name(file_name));
                
            }
        }

    } catch (const filesystem::filesystem_error &e) {

        cerr << "Error al leer el directorio: " << e.what() << endl;
        return {};

    }

    return profiles;

}

bool FileManager::create_New_Profile(string profile_name) {

    // * Getting Directory Path

    string path_str = FileManager::get_Secure_Base_Path();

    // * Validating Directory Path

    if (path_str.empty()) {

        return false;

    }

    filesystem::path full_path(path_str + "/" + profile_name + ".dat");
    
    cout<<full_path.string();

    // * Creating Profile File

    try {
        
        // * Creating and Opening File 

        std::ofstream outfile(full_path);

        outfile.close();

        return true;

    } catch(const filesystem::filesystem_error & e) {

        std::cerr << e.what() << '\n';

        return false;

    }
    
    return false;

}