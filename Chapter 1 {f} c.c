#include <stdio.h>
int main()
{
    int sub1,sub2,sub3,sub4,sub5,agg,per,sum;
    /* sub1=subject1,sub2=subject2,sub3=subject3,sub4=subject4,sub5=subject5,agg=aggregate marks,per=percentage*/
    printf("%dEnter the marks obtained in five subjects out of 100\n");
    scanf("%d%d%d%d%d",&sub1,&sub2,&sub3,&sub4,&sub5);
    sum=sub1+sub2+sub3+sub4+sub5;
    agg=sum/100;
    per=(sum/500)*100;
    printf("aggregate marks%d\n",agg);
    printf(" Percentage%d\n",per);
    return 0 ;

}
