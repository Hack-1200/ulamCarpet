#include<stdio.h>
 
main()
{
    int InputNumber,count,flag,CountTwo,z=0;
 
        printf("Intup Number:");
        scanf("%d",&InputNumber);
 
                for (count=2;count<InputNumber;count++)
                {
                    flag=1;
                    for(CountTwo=2;CountTwo<count;CountTwo++)
                    {
                        if (count==CountTwo) continue;
                        if (count%CountTwo==0) {flag=0; break;}
                    }
                    if(flag){
                     printf("%d\n",count);
                     z++;
                     }                  
                }
                printf("%d\n", z);
}