
//Name: Egide Capo-chichi
//Creation: 11/25/2017
//Version: 5.R
//Description: Take three inputs from the user



#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

#include "guess.h"


//Name: main()
//Parameter(s): none
//Returns: int
//Label   Task                                                Goto
//01      (start)                                             02
//02      state int max,min ,limitegideguess[100];            03
//03      display "Enter two numbers:"                        04
//04      input min, max                                      05
//05      display "Enter a limit: "                           06
//06      input  limit                                        07
//07      display espace                                      08
//08      call function GuessNumber(min,max,limit,egideguess) 09
//09      (exit: 0)


int main()
{
  int max, min , limit ,egideguess[100];

  cout << "Enter two numbers: ";
  cin >> min >> max;

  cout << "Enter a limit: ";
  cin >> limit;

  cout << endl;

  GuessNumber(min, max, limit, egideguess);

  return 0;
}
