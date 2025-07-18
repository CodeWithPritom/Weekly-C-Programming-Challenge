/*
Write a C program to convert specified days into years, weeks and days. Note: Ignore leap
year. Test Data : Number of days : 1329 Expected Output : Years: 3 Weeks: 33 Days: 3
*/

#include <stdio.h>
int main()
{

  int days;
  printf("Number of days : ");
  scanf("%d",&days);

  int Years, Weeks, Days;

  Years = days / 365;
  Weeks = ( days % 365 )/7;
  Days = ( days % 365 )%7;

  printf("Years : %d\t Weeks : %d\t Days : %d\t",Years,Weeks,Days);




    return 0;
}