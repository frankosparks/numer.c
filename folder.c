#include <stdio.h>
int main(){
int arr[5],i;
for(i=0;i<5;i++){
printf("enter number %d:",i+1);
scanf("%d",&arr[i]);
}
printf("the numbers are given below\n");
for(i=0;i<5;i++){
printf("%d\t",arr[i]);
}
}
