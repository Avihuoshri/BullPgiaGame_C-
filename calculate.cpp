//
// Created by אביהו on 24/04/2019.
//


#include <iostream>
#include "calculate.h"

using namespace std ;

class calculate
{



    void calculateBullAndPgia()
    {
        Chooser chooser;
        Guesser guesser;
        int bullCount=0;
        int pgiaCount=0;
        int guesser_size = sizeof(guesser->guesser_key)/sizeof(*(guesser->guesser_key)) ;
        int chooser_size = sizeof(chooser->chooser_key)/sizeof(*(chooser->chooser_key)) ;

        if(guesser_size == chooser_size)
        {
            for(int i=0 ; i<guesser->size ; i++)
            {
                if(isExist[guesser->key_Guesser[i]] == true) // PGIA
                {
                    if(chooser->key_chooser[i] == guesser->key_Guesser[i])
                        bullCount++;
                    else
                    {
                        pgiaCount++;
                    }
                }

            }
        }


    }



};

