/*________ INVESTMENT PROBLEM _________*/
#define PERIOD 10
#define PRINCIPAL 5000.00
#include <stdio.h>
/*________ MAIN PROGRAM BEGINS ________*/
main()
{ /*_____ DECLARATION STATEMENTS ____*/
int year;
float amount, value, inrate;
/*_________ ASSIGNMENT STATEMENTS _______*/
amount = PRINCIPAL;
inrate = 0.11;
year = 0;
/*_______ COMPUTATION STATEMENTS ______*/
/*_______ COMPUTATION STATEMENTS USING While LOOP ______*/
 while(year <= PERIOD)
 { printf("%2d     %8.2f\n",year, amount);
	 value = amount + inrate * amount;
	 year = year + 1;
	 amount = value;
 }
/*_____ while LOOP ENDS ____*/
}
/*_______PROGRAM ENDS______*/

