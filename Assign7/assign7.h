//Name    : Egide Capo-chichi
//Creation: 12/07/2017

#ifndef ASSIGN7_H
#define ASSIGN7_H
#include <string>
#include <ctime>

using namespace std;



//Name: RandomNumber()
//Parameters: int int int int[]
//Return: bool
//Flowchart:
//Label   Task                                                                      Goto
//01      (Start: max, min ,size , data[])                                          02
//02      [int large, small]                                                        03
//03      min>max                                                                   04
//04      [large=min]                                                               05
//05      [small=max]                                                               06
//06      [min<max]                                                                 07
//07      [large=max]                                                               08
//08      [small = min]                                                             09
//09      srand(time(0))                                                            10
//10      <int i = 0; i < size;i ++>                                                11
//11      [data[i]= rand() % (large-small+1) + small]                               12
//12      exit


bool RandomNumbers(int data[] , int size, int min , int max)
{
  int large, small;
  if(min>max)
  {
    large = min;
    small = max;
  }

  if(min<max)
  {
    large = max;
    small = min;
  }
  srand(time(0));

  for ( int i =0 ; i <size ; i++)
  {
    data[i] = rand()% (large - small + 1) + small; // range of value, it displays the elements randomly between large and included small
  }
   return true;
}


//Name: PrintArray()
//Parameters: int int[]
//Return: void
//Flowchart:
//Label   Task                                                                      Goto
//01      (start: data[], size)                                                      02
//02      print([)                                                                   03
//03      <int i ;i < size; i++>                                                     04
//04      print(data[i] << ",")                                                      05, 04
//05      print(])                                                                   06
//06      exit

void PrintArray (int data[] , int size)
{
 cout <<"[";
 for (int i= 0; i < size ; i++) // // it displays the elements of the array from 1 to 10
 {
   if (i == size -1)
   {
   cout << data[i];
   }
   else
   {
     cout << data[i] << ",";
   }
 }

 cout <<"]" << "";
}



//Name: sort()
//Parameters: int int[]
//Return: void
//Flowchart:
//Label   Task                                                                      Goto
//01      (Start: size , data[])                                                     02
//02      [int swap, e1, e2]                                                         03
//03      <e1=0;e1<size;e1++>                                                        04
//04      <e2=e1+1;e2<size;e2++>                                                     05
//05      <swap = data[e1]]                                                          06
//07      [data[e1]= data[e2]]                                                       07
//08      [data[e2]=swap]                                                            08
//09      exit

 void Sort (int data[] , int size)
{

  int swap,e1,e2;

  for( e1=0; e1<=size; e1++)
	{
		for(e2=e1+1 ;e2 <=size ; e2++) // descending number e2=e1+1
		{                             // ascending number do e2 = e1-1
			if(data[e1]<data[e2])
			{
				swap= data[e1];
				data[e1]=data[e2];
				data[e2]=swap;

			}

		}
  }
}



#endif
