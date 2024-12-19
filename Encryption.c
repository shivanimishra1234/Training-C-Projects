#include<stdio.h>
int main()
{
	int i,opt;
	FILE *f=NULL;
	int key;
	char ch;
	f=fopen("Desktop:Abha.txt","w");
	if (f!=NULL)
	{
		printf("file created ");
	}
	else
	{
		printf("File cant,t be created");
	}
	while(ch!='\n'){
		ch=getchar();
		fputc(ch-1,f);
	}
	printf("Changes made ");
	fclose(f);
	printf("File saved.");
	f=fopen("Desktop:Abha.txt","r");
    ch=fgetc(f);
printf("Enter 1 to see the text:");
scanf("%d",&opt);
if(opt==1){
while(ch!=EOF){

    fputc(ch,stdout);
    ch=fgetc(f);
}
}
if(opt==100){
 while(ch!=EOF){

    fputc(ch+1,stdout);
    ch=fgetc(f);
}   
}


return 0;
}
