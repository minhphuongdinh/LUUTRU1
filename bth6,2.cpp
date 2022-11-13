#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <stdlib.h>

int main()
{ int n, key;

while(true)
 {
 	system("cls)");
 	printf("**********************************************\n");      		  			
 	printf("**		CHUONG TRINH QUAN LY SINH VIEN		**\n");
 	printf("**		1. Nhap DS sinh vien           		**\n");
 	printf("**      2. in danh sach sinh vien   		**\n");
 	printf("**      3. Sap sep theo kq cuoikhoa   		**\n");
 	printf("**      4. In sinh vien Gioi, Xuat sac      **\n");   		  			
 	printf("**      5. Tim kiem sinh vien theo MASV     **\n");  		  			
 	printf("**      0. Thoat   		  			        **\n");
 	
 	printf("\n	\t\t	AN PHIM CHON: ");
 	scanf("%d",&key);
switch(key)

	{
	case 1:
		do{
		   printf("nNHAP SO LUONG SINH VIEN: "); scanf("%d", &n);
		}while(n <=0);
		
		//goi ham de thuc hien cong viec
		printf("\nBAM PHIM BAT KY DE TIEP TUC!");
		getch();
		break;
	case 2:
		printf("\nBan phim bat ky de tiep tup!");
		getch();
		break;
	case 3:
		printf("\nBan phim bat ky de tiep tup!");
		//goi ham de thuc hien cong viec
		getch();
		break;
	case 4:
		printf("\nBan phim bat ky de tiep tup!");
		//goi ham de thuc hien cong viec
		break;		
	case 5:
		printf("\nBan phim bat ky de tiep tup!");
		//goi ham de thuc hien cong viec
		getch();
		break;
	case 0:
		exit(1);
	default:
		printf("\nKhong co chuc nang nay!");
		printf("\nBan phim bat ky de tiep tup!");
		getch();
		break;	
	}
 }
}
 	
 
