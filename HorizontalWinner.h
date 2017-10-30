//Team: <Team Name>
//Author: <Egide>
//Creation: <Date>
#ifndef HORIZONTALWINNER_H
#define HORIZONTALWINNER_H

#include "Archive.h"

bool horizontalWinner()

{
  /*
  if ( a == b && a == c && a != '-')
   return true;

  if ( d ==e && d == f && d != '-')
   return true;

  if ( g == h && g == i && g != '-')
  return true;
  */
  if (a == 'X' && b == 'X' && c == 'X' || a == 'O' && b == 'O' && c == 'O' ){

      return true ;

	}else if (d == 'X' && e == 'X' && f == 'X' || d == 'O' && e == 'O' && f == 'O') {

      return true;

	} else if (g == 'X' && h == 'X' && i == 'X' || g == 'O' && h == 'O' && i == 'O') {

      return true;

	}else {

      return false;
	}

}

#endif 
