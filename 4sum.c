#include<stdio.h>
int main(){
    int arr[7]={ -2,-1,-1,1,2,2,1  } ;
    int target=0;
    for(int i=0; i<7; i++){
        for(int j=i+1; j<7; j++){
            for(int k=j+1; k<7; k++){
              for(int l=k+1; l<7; l++){
                  if(arr[i]+arr[j]+arr[k]+arr[l]==0){
                printf("%d %d %d %d\n",arr[i],arr[j],arr[k],arr[l]);
              }
                }
            }
        }
    }
    return 0;

}