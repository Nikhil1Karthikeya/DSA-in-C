#include<stdio.h>
int main(){
int nums[]={1,1,2};
int numsSize=sizeof(nums)/sizeof(nums[0]);
int k=1;
for(int i=1;i<numsSize;i++){
if(nums[i]!=nums[i-1]){
nums[k]=nums[i];
  k++;
}
}
printf("sorted array:\n");
for(int i=0;i<k;i++){
printf("%d\t",nums[i]);
}
printf("\nNumber of unique elements = %d\n", k);
}
