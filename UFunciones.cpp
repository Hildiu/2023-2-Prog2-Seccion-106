//
// Created by Maria Hilda Bermejo on 4/30/20.
//

#include "UFunciones.h"

double  factorial( unsigned int num)
{
  if( num==0  || num==1)
    return 1;
  return num * factorial(num-1);
}

/*
 * 5!  =  1 x 2 x 3 x 4 x 5
 * 5!  =  5 x 4 x 3 x 2 x 1
 * fac(5)  = 120
 *
 *
 *  fac(5)  = 5 x fac(4)
 *                 4  x fac(3)
 *                        3 x fac(2)
 *                             2 x fac(1)
 *                                   1 x fac(0)     es caso base
 *                                         1
 *
 */



unsigned int   producto(unsigned int n1, unsigned int n2)
{
  if( n2 ==1)
    return n1;
  return n1 + producto(n1, n2-1);
}

/*
 * 5 * 4 =  5 + 5 + 5 + 5
 *
 * prod(5,4) = 20

 * * prod(5,4) = 5 + prod(5,3)
 *                    5  + prod(5,2)
 *                            5  + prod(5,1)   cuando n2 == 1 es el caso base
 *                                    5
*
 *
 */

unsigned int   cociente(unsigned int dividendo, unsigned int divisor)
{
  if( dividendo < divisor)
    return 0;
  return 1 + cociente(dividendo - divisor, divisor);
}

/* 13 / 4 = 13 - 3 = 10   (1)
 *          10 - 3 = 7    (2)
 *          7  - 3 = 4    (3)
 *          4  - 3 = 1    (4)
 *
 *
 *
 *
 *
 */

unsigned int sumatoria(unsigned int num)
{
  if( num==1)
    return 1;
  return num + sumatoria( num -1);

}


/*
 * num = 7    1 + 2 + 3 + 4 + 5 + 6 + 7
 *            7 + 6 + 5 + 4 + 3 + 2 + 1
 * sum(7) =   28
 *
 *  * sum(7) =   7 +  sum(6)
 *                    6  + sum(5)
 *                           5 + sum(4)
 *                                 4 + sum(3)
 *                                       3 + sum(2)
 *                                             2 + sum(1)   es el caso base
 *
 *
 */
