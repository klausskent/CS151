//Team: <Team Name>
//Author: <Egide>
//Creation: <Date>
#ifndef DIAGONALWINNER_H
#define DIAGONALWINNER_H

#include "Archive.h"

bool diagonalWinner()
{
  /*
   if ( a == e && a == i && a != '-')
   return true;

  if ( c ==e && c == g && c != '-')
   return true;

   return false;
   */

   if (a == 'X' && e == 'X' && i == 'X' || a == 'O' && e == 'O' && i == 'O' ){

      return true ;

	}else if (c == 'X' && e == 'X' && g == 'X' || c == 'O' && e == 'O' && g == 'O') {

      return true;

	} else {
      return false;
	}

}

#endif
