#include "isogram.h"

namespace isogram {
    bool is_isogram(std::string s) {


        if(s.empty())
            return true;

        if(s.length() == 1)
            return false;

        // remove all the dashes
        s.erase(std::remove(s.begin(), s.end(),'-'), s.end());
        // remove all the spaces
        s.erase(std::remove(s.begin(), s.end(),' '), s.end());
        // make all characters lower
        std::transform(s.begin(), s.end(), s.begin(), ::tolower);

        int original_length = s.length();

        std::set <char> name_set(begin(s), end(s));

        int set_length = name_set.size();

        return original_length == set_length;
    }
}  // namespace isogram
