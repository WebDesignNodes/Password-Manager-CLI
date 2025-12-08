// FileManager.hpp
#ifndef FILEMANAGER_HPP
#define FILEMANAGER_HPP

#include <string>
#include <vector>

using namespace std;

class FileManager {

  public:
    static vector<string> get_Profiles();
    static bool create_New_Profile(string profile_name);

  private:
    static string get_Secure_Base_Path();
};

#endif // FILEMANAGER_HPP