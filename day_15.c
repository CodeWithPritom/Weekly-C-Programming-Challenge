/*
Write a C program to input marks of five subjects Physics, Chemistry, Biology, Mathematics and Computer. Calculate average marks and then grade according to following:
Marks >= 90 : Grade A
Marks >=80 : Grade B
*/

#include <stdio.h>
int main()
{
  int phy=100, chem=100, bio=100, math=100, comp=100, marks;
//operation
marks = (phy+chem+bio+math+comp)/5;


  
  if(marks >= 90)  // marks = marks > 90
  {
    printf("Grade A");
  }else if(marks >= 80)
  {
    printf("Grade B");
  }



    return 0;
}