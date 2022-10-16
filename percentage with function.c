#include<stdio.h>

int calcpercentage(int science,int math,int sanskrit);

int main(){
 int sc=85;
 int math=80;
 int sanskrit=85;
 
printf("percentage:%d",calcpercentage(sc,math,sanskrit));
return 0;
}
int calcpercentage(int science,int math,int sanskrit)
{

return ((science + math + sanskrit) / 3);
}
