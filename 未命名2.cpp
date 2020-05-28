#include <stdio.h>
void Func(int m);
int main()
{
 double s = 1.5;
 double f = 3.6;
  char c ;
 Func(3);
 int i = 1;
 while (i++)
 {
  if (i == 23)
   break;
  
 }
 int done = 0;
 if (done == 1)
  printf("OK!\n");
 float average = 9 / 10;
 float t = 0.5;
 float r = 100 / t;
 i = 0;
 while (i < 3)
 {
  printf("%d\t", i);
  i++;
 }
 scanf("%c", &c);
 switch (c)
 {
 case 'A':
  printf("The score is 90~100\n");
 case 'B':
  printf("The score is 80~90\n");
 default:
  printf("Wrong input\n");
 }
 unsigned short playerIDs[5] = { 101,102,103,104,105 };
 for (int i = 0; i < 5; i++)
  printf("Player ID is: %d\t", playerIDs[i]);
 return 0;
}
void Func(int m)
{
 printf("·ÖÊý");
}
