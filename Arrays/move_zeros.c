#include<stdio.h>
int main(){
int nums[] = {0};
int numsSize=1;
int k=0;
for(int i=0;i<numsSize;i++){
if(nums[i]!=0){
int temp=nums[i];
nums[i]=nums[k];
nums[k]=temp;
k++;
}
}
for(int i=0;i<numsSize;i++){
printf("%d\t",nums[i]);
}
}
