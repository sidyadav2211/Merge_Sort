#include <stdio.h>

void sort(int [],int ,int);
void mergesort(int [],int,int);
int main(){
    int size=6;
    int arr[]={6,8,1,5,9,2};
    sort(arr,0,size);
    for ( int i = 0; i < 6; i++)
    {
     printf("%d",arr[i]);  
    }
    return 0;
    
}
void sort(int arr[],int start,int n){
    int mid;
    if(n>1){
        mid=n/2;
        sort(arr,start,mid);
        sort(arr,start+mid,n-mid);
        mergesort(arr,start,n);
    }
}

void mergesort(int arr[],int start,int n){
    int temp[40];
    int k;
    int i=start, j=start+n/2;
    int lim_i= start+n/2, lim_j=start+n;
    for(k=0;k<n;k++){
        if ((i<lim_i)&&(j<lim_j))
        {
            if (arr[i]<=arr[j])
            {
                temp[k]=arr[i];
                i++;
            }else
            {
                temp[k]=arr[j];
                j++;
            
            }
         }else if (i==lim_i)

        {
            temp[k]=arr[j];
            j++;
        }else

        {
            temp[k]=arr[i];
            i++;
        }  
        
        
    } 
    for(k=0;k<n;k++){
        arr[start+k]=temp[k];
    }
        
    
}

