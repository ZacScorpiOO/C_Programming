#include <stdio.h>
int main(){
int  x = 5; // Integer (whole number)
float y = 5.12; // decimals (around 6-7 decimal digits before losing precision)
double yz = 5.12433423243535454 ;// decimal places (around 15-16 decimal digits without losing precision)
char z = 'V'; // charaters
float sum;

printf("%d\n",x);
printf("%.2f\n",y);
printf("%.10lf", yz);
printf("\n%c",'z');
// add x,y,yz
  sum =x+y+yz;
//output
  printf("\n%.2f", sum);

return 0;}
