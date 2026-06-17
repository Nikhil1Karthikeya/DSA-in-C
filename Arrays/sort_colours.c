#include<stdio.h>
int main(){
int nums[] = {2,0,2,1,1,0};
int numsSize = 6;
for(int i=0;i<numsSize-1;i++){
    int swapped=0;
for(int j=0;j<numsSize -i-1;j++){
if(nums[j]>nums[j+1]){
int temp=nums[j+1];
nums[j+1]=nums[j];
nums[j]=temp;
swapped=1;
}
}
if(swapped==0){
break;
}
}
for(int i=0;i<numsSize;i++){
printf("%d\t",nums[i]);
}
}
