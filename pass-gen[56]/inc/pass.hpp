#ifndef __PASS_H_INCLUDED__
#define __PASS_H_INCLUDED__

#include <iostream>
#include <string>

class PassGen {
private:
    std::string generatedPassword;
    int digit;
    int symbols;
public:
    PassGen(): digit(0), symbols(0) {};
    ~PassGen() {};
    //Set and Get Methods
    int GetDigit();
    int GetSymbol();
    void SetDigit(int flag);
    void SetSymbol(int flag);
    void HelpMenu(std::string argument);
    void GeneratePassword(int, int);

};


#endif //__PASS_H_INCLUDED__
