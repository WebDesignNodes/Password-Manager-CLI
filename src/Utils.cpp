
// * Libraries Required

#include <string>

// * Class Required

#include "Utils.hpp"

using namespace std;

string Utils::remove_Extension_From_File_Name(string raw_filename) {

    size_t last_dot = raw_filename.find_last_of('.');

    if (last_dot != string::npos && last_dot != 0) {

        return raw_filename.substr(0, last_dot);

    }

    return raw_filename;

}