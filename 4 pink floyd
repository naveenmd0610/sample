#include <stdio.h>
#include <stdlib.h>
#define size 100
int stack[size],num[size],top=-1;
void push(int x)
{
    stack[++top]=x;
    return;
}
void pop()
{
    top--;
}
int main()
{
    int i,j,k,p,l,t,n;
    printf("enter size of the element\n");
    scanf(" %d",&n);
    printf("enter the elements\n");
    for(i=0;i<n;i++){
        scanf(" %d",&num[i]);
    }
    for(i=0,j=1;i<n;i++){
        if(num[i]>j)push(num[i]);
        else if(num[i]==j){
            j++;
            while(top!=-1 && stack[top]==j){
                pop();
                j++;
            }
        }
    }
    if(j==n+1)
        printf("Happy\n");
    else
        printf("Sad\n");
    return 0;
}
