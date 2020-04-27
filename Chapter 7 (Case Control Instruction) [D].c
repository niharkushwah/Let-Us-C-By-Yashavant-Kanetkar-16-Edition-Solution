      #include<stdio.h>
      int main()
      {
        int class,fail;
        printf("Enter the class = ");
        scanf("%d",&class);
        printf("Enter the number of subjects student got failed = ");
        scanf("%d",&fail);
        switch(class)
        {
          case 1:
            switch(fail)
            {
              case 0:
              case 1:
              case 2:
              case 3:
                printf("You've got grace of 5 marks per subject");
                break;
               default:
               printf("You didn't got any grace");
               break;
             }
             break;
           case 2:
             switch(fail)
             {
               case 0:
               case 1:
               case 2:
               printf("You've got grace of 4 marks per subject");
               break;
               default:
               printf("You didn't got any grace");
               break;
              }
              break;
           case 3:
              switch(fail)
              {
               case 0:
               case 1:
               printf("You've got grace of 3 marks per subject");
               break;
               default:
               printf("You didn't got any grace");
               break;
               }
               break;
               default:
               printf("Wrong Choice. Please try again!!");
               break;
              }
              return 0;
              }
