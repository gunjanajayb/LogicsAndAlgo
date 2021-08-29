#include <stdio.h>
#include <stdlib.h>
#define arrs 4
int cnt = 0;

void tuple(char a, char b, int c,char* arr, int loc)
{
    if(c == 0){
        cnt++;
        printf("%s\n",arr);
        return;}
    
    arr[loc] = a;
    tuple(a,b,c-1,arr,loc+1);
    arr[loc] = b;
    tuple(a,b,c-1,arr,loc+1);
}




int main()
{
    char a = 'A';
    char b = 'B';
    int c = arrs;
    char* arr = (char*)calloc(arrs+1,sizeof(char));
    int loc = 0;
    
    
    tuple(a,b,c,arr,loc);
    printf("cnt = %d",cnt);

    return 0;
}
