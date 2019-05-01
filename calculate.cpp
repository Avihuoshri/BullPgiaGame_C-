#include <iostream>
#include "calculate.hpp"
#include <string>
#define ZERO_TO_NINE 10


using namespace std;

namespace bullpgia
{
//void calculateBullAndPgia()

    //Chooser chooser;
    //Guesser guesser;
    //int BullCount=0;
    //int PgiaCount=0;
    //if(guesser->size == sizeof(chooser->key_chooser)/sizeof(*(chooser->key_chooser)))
    //{
    //    for(int i=0;i<guesser->size;i++)
        //{
            //if(isExist[guesser->key_Guesser[i]] == true) // PGIA
            //{
                //if(chooser->key_chooser[i] == guesser->key_Guesser[i])
                //BullCount++;
              //  else
            //    {
          //      PgiaCount++;
        //        }
      //      }
            
    //    }
  //  }
//}


bool isExist(bool digits[ZERO_TO_NINE] , int num )
{
  if(digits[num] == true)
    return true ;
  else
    return false ;
}


const string calculateBullAndPgia(const std::string choice, const std::string guess)
{
  int bull = 0 ;
  int pgia = 0 ;
  bool digits[ZERO_TO_NINE] ; 
  for(int i = 0 ; i < choice.length() ; i++)
  {
    digits[(int) choice[i]] = true ;
  }


  for(int i = 0 ; i < guess.length() ; i++)
  {
    if(guess.at(i) == choice[i])
    {
      bull++ ; 
    }
    else
    {
      if(isExist(digits , guess[i]))
        pgia++ ; 

    }
  }
  const string result = "Bull : "+to_string(bull)+ "       Pgia : " +to_string(pgia)   ;
  cout<<result<<endl ;
  return result ; 
}
}
/*int main()
{
  bullpgia::calculateBullAndPgia("1234","1134") ; 
  return 0 ;
}*/