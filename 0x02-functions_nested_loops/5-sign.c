#include"main.h"

/**
 *print_sign-determineiftheinputnumber
 *greater,equalorlessthanzero.
 *
 *@n:theinputnumberasaninteger.
 *
 *Return:1isgreaterthanzero.0iszero.
 *-1islessthanzero.
 */
intprint_sign(intn)
{
	if(n>0)
	{
		_putchar(43);
		return(1);
	}
	elseif(n<0)
	{
		_putchar(45);
		return(-1);
	}
	else
	{
		_putchar(48);
		return(0);
	}
}
