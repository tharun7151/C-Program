#include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.14
int main()
{
         float r,l,b,CA,RA;
         printf("Enter radius(r):");
         scanf("%f",&r);
         printf("Enter lenth of rectangle(I):");
         scanf("%f",&l);
         printf("Enter breadth of rectangle(b):");
         scanf("%f",&b);
         /*Calculating Area of the circle*/
         CA=PI*r*r;
         /*Calculating Area of the Rectangle*/
         RA=l*b;
         printf("Area of the circle =%0.3F\n",CA);
         printf("Area of the Rectangle =%0.3f",RA);
		 getch();
		 return(0);
		 
}
		 
