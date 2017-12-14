#include "pass.hpp"
#include <vector>
#include <cstdlib>
#include <ctime>

void PassGen::SetDigit(int flag) {
	digit = flag;
}


void PassGen::SetSymbol(int flag) {
	symbols = flag;
}


int PassGen::GetDigit() {
	return digit;
}


int PassGen::GetSymbol(){
	return symbols;
}


void PassGen::HelpMenu(std::string argument){
    std::cerr << "Usage for "<<argument<<'\n'
            << "-d, --digit\t for numbers [0..9]\n"
            <<"-s, --symbols\t for !@#$%..";
}

std::vector<char> CreateContainer(int dflag, int sflag){
    std::vector<char> passContainer;
     // 3 posibilities for flags~
    if(dflag == 1 && sflag == 1){
        // between 1 to } all available stuff. 
        for(char i = 33 ;  i < 127; i++){
            passContainer.push_back(i);
        }
    }else if(dflag == 1 && sflag == 0){
        for(char i = 48; i < 123; i++){
            // Fuck ASCII
            if(i == 58){
                i = 65;
            }if(i == 91){
                i = 97;
            }
            passContainer.push_back(i);
        }      
        
    }else if(dflag == 0 && sflag == 1){
        for(char i = 33; i < 126; i++){
            if(i == 47)
                i = 60;
            passContainer.push_back(i);
        }
    }
    return passContainer;
}


void PassGen::GeneratePassword(int dflag=0, int sflag=0){
   // std::vector<std::string> passContainer;
    std::vector<char> passContainer = CreateContainer(dflag, sflag);
    //Randomizing the generation each time it called!
    srand(time(NULL));

    for(int i = 0; i < 15; i++){
        int x = rand() % passContainer.size();
        std::cout<<passContainer.at(x);
    }
    std::cout << "\nRand generated. Newline inserting\n";
    // Printer -> separatable.
    for(std::vector<char>::const_iterator it = passContainer.begin();
            it != passContainer.end(); ++it){
        std::cout << *it;
    }
}
