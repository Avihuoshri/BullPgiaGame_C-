#pragma once
#include <iostream>
#include <string>
using namespace std;

namespace bullpgia
{


class Guesser
{

    
    public:
       // Guesser();
       // Guesser(string password);

        uint length;
        //char[] key_Guesser;//
        virtual std::string guess(){return "";};
        virtual void startNewGame(uint size){};
        virtual void learn(std::string chars){};


};


}