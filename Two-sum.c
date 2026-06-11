#include<stdio.h>
int main(){
int n;
printf("ENTER THE SIZE OF THE ARRAY:\n");
scanf("%d",&n);
int arr[n];
printf("enter the elements:\n");
for(int i=0;i<n;i++){
scanf("%d",&arr[i]);
}
int target;
printf("ENTER THE TARGET ELEMENT:\n");
scanf("%d",&target);
printf("The indices whose elements add up to the target are:\n");
for(int i=0;i<n;i++){
for(int j=i+1;j<n;j++){
if(arr[i]+arr[j]==target){
printf("[%d %d]",i,j);
return 0;
}
}
}
return 0;
}
