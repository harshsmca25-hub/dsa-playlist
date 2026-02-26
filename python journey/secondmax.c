#include<stdio.h>
int main(){
    int fmax=0;
    int smax;
    int arr[5]={1,2,3,4,5};
    for(int i=0; i<5; i++){
         if (arr[i]> fmax){
            fmax=arr[i];
         }
         for(int i=0; i<=4; i++){
            if(fmax<arr[i])  fmax=smax;
         }
         
        }
        printf("%d",smax);
        return 0;
}