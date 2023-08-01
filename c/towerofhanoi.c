//c program for tower of hanoi
#include<stdio.h>
int toh(int n, char source,char destination ,char temporary){
    if (n>0)
    {
        toh(n-1,source,temporary,destination);
        printf("\n\t move disk %d from %c to %c.",n,source,destination);
        toh(n-1,temporary,destination,source);
    }
    return 1;
}
int main(){
    int n;
    printf("\n\t ENTER NUMBER OF DISKS:");
    scanf("%d",&n);
    toh(n,'A','C','B');
    printf("\nmaximum steps:%d",(2^n)-1);
    return 0;
}