#include <iostream>

int main()
{
   for (int j=0; j<=8; j++)
   {
      if (j==5)
      {
	    /* The continue statement is encountered when
	     * the value of j is equal to 5.
	     */
	    continue;
       }

       /* This print statement would not execute for the
	* loop iteration where j ==5  because in that case
	* this statement would be skipped.
	*/
       std::cout << j;
   }
   return 0;
}
/*
0 1 2 3 4 6 7 8
*/
