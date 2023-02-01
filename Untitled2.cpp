#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
int main()
	{ FILE * fp;
	char filename[67], ch;
	printf ( "filename: " );
	gets (filename);
	
if ((fp = fopen (filename,"r")) == NULL)//	mo tap tin moi de doc
		  {
			printf ("open file orror \n");
			exit (1);
		  }
		
f']komhrewhile ((ch = getc(fp)) !=EOF )// doc den khi het tap tin
		printf ("%c",ch);
fclose (fp);
return 0;
}	
	
