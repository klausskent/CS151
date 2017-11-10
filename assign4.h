#ifndef ASSIGN4_H
#define ASSIGN4_H

#include <iomanip>

using namespace std;



//Name: NumberGenerator
//Return: none
//Parameters:int,int
//FlowChart
//Label    Task                                 Goto
//01       (start: base, value)                    02
//02        [value >0]                             03
//03        NumberGenerator(base,value/ base)            05
//05        print (value % base)                   0




void  NumberGenerator(int base, int value)
{
  if (value > 0)
   {
    NumberGenerator(base, value / base);
   }
  cout << (value % base);
}


//Name: BaseConvert
//Return: none
//Parameters:int,int
//FlowChart
//Label    Task                                 Goto
//01       (start: base,value)                    02
//02        [base >=2 && base <= 9]               03
//03        NumberGenerator(base,value)           04
//04        print ("")                            05
//05


void  BaseConvert (int base , int value )
{
if (  (base >= 2) && (base <= 9) )   // base is between (2,9)
  {
    NumberGenerator(base, value);
  }
  else
  {
    cout << "";
  }
}















#endif
