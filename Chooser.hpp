#pragma once
#include <iostream>
#include <string>
using namespace std;
#define NUM_OF_DIGITS 10
namespace bullpgia
{
 class Chooser  
 {
  // char[] key_chooser;//
   //bool[] isExist = new bool[NUM_OF_DIGITS];
   public:
   //Chooser();
   //Chooser(string password);
   uint length;
   virtual std::string choose(uint numOfChars){return "";};

   //void generatePassword(char[] key_chooser);

 };
}