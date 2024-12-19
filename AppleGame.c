#include<stdio.h>
#include<stdlib.h>
#include"applelogin.c"

int login();

int main(){

    login();

    int a=21,i,j,k=0;
	
	char c;
    
    printf("\033[0;35m");
    printf("*************Apple Game*************\n\n\n");
    printf("\033[0;37m");
    
	
    printf("\033[0;32m");
    printf("Total Apples is %d\n", a);
    printf("You can pic apples between 1 to 4.\n");
    printf("Your chance will be terminated after 3 Penalties.\n\n\n");
    
    printf("\033[0;37m");
    
    printf("Enter any key to Continue: ");
    
    getch();
    
    re:
    	
	system("cls");
    
    
    a=21;
	k=0;

    while (a>=1)
    {
    	printf("\033[0;32m");
        printf("Enter your No: ");
        printf("\033[0;37m");
        scanf("%d",&i);
        if(a==1){
        	printf("\033[0;33m");
            printf("Winner is User");
            printf("\033[0;37m");
            goto exit;
        }
        if(i<1||i>4){
        	printf("\033[0;31m");
            printf("Voilation of Rules.\n");
            k++;
            if(k==3){
            	printf("Chance Terminated\n");
			    printf("\033[0;33m");
                printf("Winner is computer.");
            	printf("\033[0;37m");
				goto exit;
			}
			printf("Please pic between 1-4\n\n\n");
			printf("\033[0;37m");
            continue;
        }
//        if(i>a){
//        	printf("Invalid No\n");
//            continue;
//		}
        a=a-i;
        
        printf("\033[0;35m");
        printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
//        printf("\033[0;37m");
        
        j=5-i;
        printf("\033[0;32m");
        printf("Computer Turn: ");
		printf("\033[0;37m");
		printf("%d\033[0;37m\n",j);
//        printf("\033[0;37m");

        a = a-j;
		printf("\033[0;35m");
		printf("Remaining: ");
		printf("\033[0;37m");
		printf("%d\n\n\n",a);
//        printf("\033[0;37m");
        
		if(a==1){
			printf("\033[0;33m");
            printf("Its Your Turn\n& Remaining Apples:1\nTherefore, Winner is Computer");
            printf("\033[0;37m");
            goto exit;
        }


    }
    exit:
    	
    printf("\n\n\nEnter 1 to Play Again & any other Key to Exit: ");
    fflush(stdin);
    scanf("%c",&c);
    
    if(c=='1')
    	goto re;
    	
//    printf("\nEnter any key to Continue: ");
//    
//    getch();
    
}
