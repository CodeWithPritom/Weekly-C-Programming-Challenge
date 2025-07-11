/*Problem 9
Write a program that calculates the time difference between Dhaka (11:20 AM) and Mumbai (10:50 AM). Display the time difference in hours and minutes.*/


#include <stdio.h>

int main()
{
   int dh  = 11, dm = 20, mh = 10, mm = 50,dt,mt;

   dt = (11* 60) + 20;
   mt = (10*60) + 50;

   // Difference

   int diff, diffh, diffm;
   diff = dt - mt;
   diffh = diff / 60;
   diffm = diff % 60;

printf("Difference between Dhaka & Mumbai Time is : %d : %d",diffh,diffm);


    return 0;
}