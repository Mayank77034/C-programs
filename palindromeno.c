#include<stdio.h> 
int main (){            
    int n,reversed=0,original,remainder;
    printf("enter a no.");                    //palendrome no.=5555   imp. Q.
    scanf("%d",&n);
    original=n;
    while(n!=0){
        remainder=n%10;
        reversed=reversed*10+remainder;
        n=n/10;
        if(original==reversed){
            printf("%d",reversed);
        }
        else{
            printf("%d",reversed);
        }
    }
}