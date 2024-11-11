/*A program to find the quadrant where the given coordinates lie is discussed here. Input a user-supplied point and determine the quadrant where the given coordinates lie.



DESCRIPTION



If both a and b are greater than 0 or positive, the point lies in the first quadrant, and the program outputs "Ist Quadrant". 
If a is negative and b is positive, the point lies in the second quadrant, and the program outputs "IInd Quadrant". 
If both a and b are negative, the point lies in the third quadrant, and the program outputs "IIIrd Quadrant". 
If a is positive and b is negative, the point lies in the fourth quadrant, and the program outputs "IVth Quadrant
If both a and b are equal to 0, the point lies on the origin, and the program outputs "Origin".
Input format :
The first line consists of an integer a, corresponding to the x coordinate.

The second line consists of an integer b, corresponding to the y coordinate.

Output format :
The output displays the string, representing the quadrant in which the coordinate lies.*/
#include <stdio.h>
int main(int a, int b)
{
	
	scanf("%d %d",&a,&b);
	if(a > 0 && b > 0)
		printf("Ist Quadrant");
	else if(a < 0 && b > 0)
		printf("IInd Quadrant");
	else if(a < 0 && b < 0)
		printf("IIIrd Quadrant");
	else if(a > 0 && b < 0)
		printf("IVth Quadrant");
	else
		printf("Origin");
	return 0;
}

