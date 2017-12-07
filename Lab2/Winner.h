//Team: <Team Name>
//Author: <Egide>
//Creation: <Date>
#ifndef WINNER_H
#define WINNER_H

#include "Archive.h"

bool winner()

{

if (verticalWinner() == true)
{

         return true;

	}

	else if (horizontalWinner() == true)
	{

		return true;
	}

	else if (diagonalWinner() == true)
	{


         return true;

	}
	else
	{

		return false;
	}

}

#endif 
