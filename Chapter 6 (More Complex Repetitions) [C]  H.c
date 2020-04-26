#include <stdio.h>
int main(){
    int initial,final,a,b,c;
    printf("Enter the range in which you want to search for Pythagorean Triplets:\nInitial: ");
    scanf("%d",&initial);
    printf("\nFinal: ");
    scanf("%d",&final);
    printf("The Pythogorean Triplets in the given range are as follows:\n____________________________________________________________\n");
    for(a=initial;a<=final;a++){
        for(b=a;b<=final;b++){
            for(c=b;c<=final;c++){
                if(c*c==a*a+b*b){
                    printf("%d , %d , %d\n",a,b,c);
                }
            }
        }
    }
}
