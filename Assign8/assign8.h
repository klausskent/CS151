//Name    : Egide Capo-chichi
//Creation: 12/07/2017

#ifndef ASSIGN8_H
#define ASSIGN8_H
#include <string>
using namespace std;


//Name: ComboWithout()
//Parameters: none
//Return: void
//Flowchart:
//Label   Task                                                                                                           Goto
//01      (start)                                                                                                         02
//02      colums = 0                                                                                                      03
//03      declaring and assignment char egide[] ="ABCDEFGHIKLMNOPQRSTUVWXYZ"                                              04
//04      for loop (int =0; i <24 ; i++)                                                                                  05
//05      for loop (int j =h+1 ; j <26 ; j++)                                                                             06
//06      for loop (int h=j+1 ; h<26 ; h++)                                                                               07
//07      if condition , when colums = 10 and colums different of 0                                                       08
//08      print space                                                                                                     09
//09      print egide[i])                                                                                                 10
//10      print egide[j])                                                                                                 11
//11      print egide[h])                                                                                                 12
//12      increment colums                                                                                                13
//13      exit


void ComboWithout()
{

  int colums = 0;
  char egide[] ="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

   for (int i=0 ; i < 24 ;i++)
   {
    for ( int j= i+1 ; j < 25 ; j++)
    {
      for ( int h= j+1 ; h <26 ; h++)
      {
        if (colums % 10 == 0 && colums !=0) // number of colums = 10
        {
          cout << endl;
        }
        cout << egide[i] << egide[j] << egide [h] << " ";
        colums ++;

      }


    }

  }
}


#endif
