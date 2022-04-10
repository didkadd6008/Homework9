#include <stdio.h>

int sumArrayDigits(const int* arr, size_t n){
    int sum = 0;

    int num = arr[n];

    if (num <= 9)
    {
        sum += num;
    }else 
    {
        
        while (num > 0)
        {
          
            sum += num % 10;
            num = num / 10;
        }
        
    }
    return sum;
}

int isOddEven(const int* arr, size_t n,int (*f)(const int*, size_t )){
    if (f(arr,n)% 2 == 0)
    {
        return 0;
    }else{
        return 1;
    }
    
}

int evenNumber(int n){
    if (n != 0)
        
        return n + 3*evenNumber(n-1); 
    else
        return n;
}

int oddNumber(int n){
if (n != 0)
        
        return n - evenNumber(n-1); 
    else
        return n;
}
int main(){
    int arr[]={5,23,77,123,681,9,772,16};
    int position;

    printf("Please enter entry position: \n");
    scanf("%d",&position);
    
    
    
    if (isOddEven(arr,position,sumArrayDigits) == 0)
    {
        printf("%d",arr[evenNumber(position)]);
    }else{
         printf("%d",arr[oddNumber(position)]);
    }
    
    
}