#include<stdio.h>
int main(){
    int nums[] = {8,3,8,1,4,8,2};
int val = 8;
int k=0;
int numsSize=7;;
for(int i=0;i<numsSize;i++){
if(nums[i]!=val){
nums[k]=nums[i];
k++;
}
}
for(int i=0;i<k;i++){
printf("%d\t",nums[i]);
}
printf("\nCOUNT:%d\n",k);
return 0;
}
