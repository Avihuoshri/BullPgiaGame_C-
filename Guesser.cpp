#include <iostream>
#include <stdlib.h>

using namespace std ;

class Guesser
{
    public :




        int get_pgia_amount()
        {
            return num_of_pgia ;
        }

        int get_bulls_amount()
        {
            return num_of_bulls ;
        }

    private:
        int num_of_bulls ;
        int num_of_pgia ;
};


