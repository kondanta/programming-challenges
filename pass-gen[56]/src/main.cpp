#include "pass.hpp"


int main(int argc, const char* argv[]) {
    PassGen obj;

    if (argc > 3) {
        obj.HelpMenu(argv[0]);
        return 1;
    }

    // Arguman parsing for the password gen. options.
    for (int i = 1; i < argc; i++) {
        std::string args = argv[i];
        if (args == "-d" || args == "--digit" ) {
            obj.SetDigit(1);
        }
        else if (args == "-s" || args == "--symbols") {
            obj.SetSymbol(1);

        }
    }
    
    obj.GeneratePassword(obj.GetDigit(), obj.GetSymbol());
    return 0;
}

