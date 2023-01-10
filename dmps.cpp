#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

void *malloc(size_t size);
void in(char *S);
void out(char *S);
void fix(char *S);
void check(char *S);



int main()
{
	int key;
	char *S;
	S=(char*)malloc(256*sizeof(char));
	while(true)
   	{
        system("cls");
        printf("\t\t\t\t\t************************************\n");
		printf("\t\t\t\t\t**      THAO TAC TREN CHUOI       **\n");
		printf("\t\t\t\t\t**   1.Nhap va chuan hoa chuoi    **\n");
		printf("\t\t\t\t\t**   2.Dem tu can tim trong chuoi **\n");
		printf("\t\t\t\t\t**   0.Thoat                      **\n");
		printf("\t\t\t\t\t************************************\n");
		fflush(stdin);
		printf("\n \t\t\t\t\t\tAN PHIM CHON: ");
		scanf("%d",&key);
		switch(key)
              {
           	  case 1:
           	  		fflush(stdin);
           	  		in(S);
           	  		out(S);	
					printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
           	  		getch();
           	  		break;
			  case 2:
			  		fflush(stdin);
			  		check(S);
			  		printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
			  		getch();           	  		
					break;
			  case 0:
			  		printf("BYE BYE !");
					exit(1);
			  default:
					printf("\nKhong co chuc nang nay!");
					printf("\n\nAN PHIM BAT KY DE TIEP TUC !");
					getch();
					break;
		      }
   	  }
}


void in(char *S)
{
	 printf("NHAP CHUOI S :\n\n");
	 gets(S);
}


void out(char *S)
{
	 fix(S);
	 printf("\n\nCHUOI S DA NHAP :\n\n");
	 puts(S);
}



void fix(char *S)
{
	 strlwr(S);
	 while (*(S)==' ')
	 {
	 	   for (int i=0;i<strlen(S);i++)
	 	   {
	 	   	   *(S+i)=*(S+i+1);
	 		   *(S+strlen(S))='\0';
	 	   }
	 }
	 for (int i=0;i<strlen(S);i++)
	 {
	 	 while (*(S+i)==' ' && *(S+i+1)==' ')
	 	 {
	 	 	   for (int j=i;j<strlen(S);j++)
	 	   	   {
	 	   	   	   *(S+j)=*(S+j+1);
	 		       *(S+strlen(S))='\0';
	 	       }
	 	 }
	 }
	 *(S)=*(S)-32;
	 for (int i=0;i<strlen(S);i++)
	 {
	 	 if (*(S+i)==' '&& *(S+i+1)!=' ')
	 	 {
	 	 	*(S+i+1)=*(S+i+1)-32;
	 	 }
	 }
}

void check(char *S)
{
	 strlwr(S);
	 out(S);
	 char x[1000];
	 char tam[1000];
	 int dem=0;
	 printf("\n\nNHAP 1 KY TU CAN TIM TRONG CHUOI :\n\n"); gets(x);
	 while (strlen(x)>1)
	 {
	 	   fflush(stdin);
	 	   printf("\n\nNHAP SAI, CHI NHAP 1 KY TU. NHAP LAI KY TU :\n\n"); gets(x);
	 }
	 if (strlen(x)==1)
	 {
	 	 tam[0]=x[0];
	 	 strlwr(x);
	     for (int i=0;i<strlen(S);i++)
	     {
	 	      if (x[0]==*(S+i)) dem++;
	     }
	     if (dem==0)  printf("\n\nKHONG CO KY TU %c ton tai trong chuoi S !",tam[0]);
	     else		  printf("\n\nCO %d KY TU GIONG VOI KY TU %c DA NHAP !",dem,tam[0]);
	 }
}
