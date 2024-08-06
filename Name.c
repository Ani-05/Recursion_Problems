Print names 5 times


#include<stdio.h>

void multiName(char name[],int n){
    if(n>0){
        printf("%s\n", name);
        multiName(name,n-1);
    }
}

int main(){
    char name[100];
    printf("Enter your name");
    scanf("%s",&name);
    int n=5;
    multiName(name,n);
    return 0;
}
