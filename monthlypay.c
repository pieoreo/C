#include<stdio.h>

float average(int length, int array[]);

int main(void)
{
  //get monthly pay number from user
  int n = get_int("monthlypays: ");
  
  //declare monthlypays array and input value from user
  int monthlypays[n];
  for(int i = 0; i<n; i++)
  {
    monthlypays[i] = get_int("monthlypay %i: ", i+1);
  }
  //print average
  printf("Average: %.1f\n", average(n,scores));
}

//function to calculating average
float average(int length, int array[])
{
  int sum = 0;
  for(int i=0; i<length; i++)
  {
    sum += array[i];
  }
  return (float)sum/ (float)length;
}  
  
