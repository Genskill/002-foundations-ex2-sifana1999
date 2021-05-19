#include <stdio.h>
#include <cs50.h>
int main(){
int num=0;
while (num !=1 && num !=2){
num = get_int("Enter type of pattern (1 or 2) ");
}
int rows = get_int("Number of rows");
if(num==1)
{
for(int i=0;i<rows;i++)
{
int j=i;
for(int k=rows;j<rows;j++)
{
printf("#");
}
printf("\n");
}
}
else if(num==2)
{
for(int i=0 ;i<rows;i++)
{
int k = i;
for(int j=1;j<rows-k;j++)
{
printf(" ");
}
for(int l=0;l<=k;l++)
{
printf("#");
}
printf("\n");
}
}

