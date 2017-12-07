#ifndef ASSIGN3_H
#define ASSIGN3

#include <iomanip>

using namespace std;



//Name: swap
//Return: VOID
//Parameters:float,float,float,float,float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y,z,w,v)                    02
//02        start roar                           03
//03        roar = x                             04
//04        x=y                                  05
//05        y = roar                             06
//07


void swap (float& x , float& y) // do the void function by reference by addding & to the float
{
  float roar;
  roar = x;
  x = y;
  y = roar;
}


//Name: maximum
//Return: float
//Parameters:float,float,float ,float , float
//FlowChart
//Label    Task                                   Goto
//01       (start: x,y,z,w,z,v)                    02
//02       (x >= y && x >= z && x >= w && x >= v)  03
//03        return x;                              04
//04       (y >= x && y >= z && y >= w && y >= v)  05
//05        return y;                              06
//06       (z >= x && z >= y && z >= w && z >= v)  07
//07        return z;                              08
//08        (w >= x && w >= y && w >= z && w >= v) 09
//09        return w;                              10
//10        return v;                              11
//11



float maximum (float x , float y, float z, float w, float v )
{
         if (x >= y && x >= z && x >= w && x >= v)
        {
            return x;

        }
        else if (y >= x && y >= z && y >= w && y >= v)
        {
            return y;

        }
        else if (z >= x && z >= y && z >= w && z >= v)
        {
            return z;

        }
        else if (w >= x && w >= y && w >= z && w >= v)
        {
            return w;

        }
        else
        {
            return v;

        }
}



//Name: median
//Return: float
//Parameters:float,float, float , float , float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y,z,w,v)                          02
//02        [x>y]                                      03
//03        swap(x,y)                                  04
//04        [x>z]                                      05
//05        swap(x,z)                                  06
//06        [x>w]                                      07
//07        swap(x,w)                                  08
//08        [y>z]                                      09
//09        swap(y,z)                                  10
//10        [y>w]                                      11
//11        swap(y,w)                                  12
//12        [y>v]                                      13
//13        swap(z,w)                                  14
//14        [z,v]                                      15
//15        swap(z,v)                                  16
//16        [w>v]                                      17
//17        swap(w,v)                                  18
//18        return z;                                  19
//19


float median (float x , float y , float z ,float w , float v)
{
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return z;
}


//Name: firstQuartile
//Return: float
//Parameters:float,float, float , float , float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y,z,w,v)                          02
//02        [x>y]                                      03
//03        swap(x,y)                                  04
//04        [x>z]                                      05
//05        swap(x,z)                                  06
//06        [x>w]                                      07
//07        swap(x,w)                                  08
//08        [y>z]                                      09
//09        swap(y,z)                                  10
//10        [y>w]                                      11
//11        swap(y,w)                                  12
//12        [y>v]                                      13
//13        swap(z,w)                                  14
//14        [z,v]                                      15
//15        swap(z,v)                                  16
//16        [w>v]                                      17
//17        swap(w,v)                                  18
//18        return y;                                  19
//19

float firstQuartile (float x , float y , float z , float w, float v)
{
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return y;

}

//Name: minimum
//Return: float
//Parameters:float,float,float ,float , float
//FlowChart
//Label    Task                                   Goto
//01       (start: x,y,z,w,z,v)                    02
//02       (x <= y && x <= z && x <= w && x <= v)  03
//03        return x;                              04
//04       (y <= x && y <= z && y <= w && y <= v)  05
//05        return y;                              06
//06       (z <= x && z <= y && z <= w && z <= v)  07
//07        return z;                              08
//08        (w <= x && w <= y && w <= z && w <= v) 09
//09        return w;                              10
//10        return v;                              11
//11


   float minimum (float x , float y , float z , float w , float v)
   {

   if (x <= y && x <= z && x <= w && x <= v)
        {
            return x;

        }
        else if (y <= x && y <= z && y <= w && y <= v)
        {
            return y;

        }
        else if (z <= x && z <= y && z <= w && z <= v)
        {
            return z;

        }
        else if (w <= x && w <= y && w <= z && w <= v)
        {
            return w;

        }
        else
        {
            return v;

        }
   }


//Name: thirdQuartile
//Return: float
//Parameters:float,float, float , float , float
//FlowChart
//Label    Task                                 Goto
//01       (start: x,y,z,w,v)                          02
//02        [x>y]                                      03
//03        swap(x,y)                                  04
//04        [x>z]                                      05
//05        swap(x,z)                                  06
//06        [x>w]                                      07
//07        swap(x,w)                                  08
//08        [y>z]                                      09
//09        swap(y,z)                                  10
//10        [y>w]                                      11
//11        swap(y,w)                                  12
//12        [y>v]                                      13
//13        swap(z,w)                                  14
//14        [z,v]                                      15
//15        swap(z,v)                                  16
//16        [w>v]                                      17
//17        swap(w,v)                                  18
//18        return w;                                  19
//19

  float thirdQuartile (float x , float y , float z , float w , float v)
 {
  if (x>y)
  {
    swap(x,y);
  }
  if (x>z)
  {
    swap(x,z);
  }
  if (x>w)
  {
  swap(x,w);
  }
  if (x>v)
  {
    swap(x,v);
  }
  if (y>z)
  {
    swap(y,z);
  }
  if (y>w)
  {
    swap(y,w);
  }
  if (y>v)
  {
    swap(y,v);
  }
  if (z>w)
  {
    swap(z,w);
  }
  if (z>v)
  {
    swap(z,v);
  }
  if (w>v)
  {
    swap(w,v);
  }

 return w;

}

#endif
