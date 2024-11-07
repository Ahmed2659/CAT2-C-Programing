 #include <stdio.h>
/*
Author:JIBRIL AHMED ADEN
Reg CT102/G/24914/24
Date 2024/11/7
*/
  int main(){

 int i, j;

int scores[2] [2] [2] = { {{ 65, 92}, {84, 72}},{{35, 70},{59,67}} }; 

for ( i=0; i<2; i++) {

   for ( j =0; j<2; j++){

      printf("scores[%d] [%d] [%d][%d]=%d\n", i, j, scores[i] [j]);

      }

 }

 return 0;

}