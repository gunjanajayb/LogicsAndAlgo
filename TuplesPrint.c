/* 
This is the program to print tuples using 2 character/digit into n places.
For example: as of now 2 characters are 'A' and 'B' (it can be any digit also)
if "arrs" macro is 4 then it will print following output

AAAA
AAAB
AABA
AABB
ABAA
ABAB
ABBA
ABBB
BAAA
BAAB
BABA
BABB
BBAA
BBAB
BBBA
BBBB

This output is permutaion of putting 2 character/digit in 4 places.
i.e. there are 16 ways of creating permuation of 2 characters/digit
for 4 places. It is called tuples
*/



#include <stdio.h>
#include <stdlib.h>
#define arrs 4

void tuple(char a, char b, int c,char* arr, int loc)
{
    if(c == 0){
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

    return 0;
}
