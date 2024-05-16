#pragma once
#include <string>
#include <cctype>


namespace input_utils {
    /// <summary>Clears the console</summary>
    inline void clearConsole() {
        system("cls");
    }

    /// <summary>Checks if the passed string <c>s</c> is a number</summary>
    /// <param name="s">The string to be checked</param>
    /// <returns><c>true</c> if <c>s</c> is a number. Otherwise, <c>false</c>.</returns>
    bool isNumber(const std::string& s) {
        std::string::const_iterator iter = s.begin();
        while (iter != s.end() && std::isdigit(*iter)) ++iter;
        return !s.empty() && iter == s.end();
    }
};