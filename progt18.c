// smallest of three number

#include<stdio.h>

int main(){
    int a,b,c;

    printf("enter your three number:");
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c){
        printf("a is smallest");
    }
    else if(b<a && b<c){
        printf("b is smallest");
    }
    else{
        printf("c is smallest");
    }
    return 0;
}