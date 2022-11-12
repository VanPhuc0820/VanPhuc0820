#include<stdio.h>
#include<conio.h>
#include<string.h>
#include<ctype.h>
#include<cstdlib>
int chuanhoa(char s[50]);
int demkt(char s[50]);
int demtu(char s[50]);
void ghep(char s[50],char s2[50]);
int main()
{
	char s[50],s2[50];
	printf("\nNhap chuoi :");
	gets(s);
	chuanhoa(s);
	printf("\nChuoi chuan hoa: ");
	puts(s);
	demtu(s);
	demkt(s);
	ghep(s,s2);
	{ char s[50],s2[50],key;
while(true)
{
	system("cls");
	printf("**************************************************\n");
	printf("** 		THAO TAC TREN CHUOI             **\n");
	printf("** 		1. Nhap va chuan hoa chuoi      **\n");
	printf("** 		2. Dem so tu trong chuoi        **\n");
	printf("** 		3. Ghep chuoi                   **\n");
	printf("** 		4. Kiem tra doi xung            **\n");
	printf("** 		5. In chuoi dao nguoc           **\n");
	printf("**		0. Thoat                        **\n");
	printf("**************************************************\n");
	fflush(stdin);
	printf("\n \t\t AN PHIM CHON: ");
	scanf("%d",&key);
	switch(key)
{
	case 1:
	fflush(stdin);
	//goi ham de thuc hien cong viec tuong ung
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
	case 2:
	  //goi ham thuc de hien cong viec tuong ung
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
	case 3:
	printf("\nBam phim bat ky de tiep tuc!");
	//goi ham thuc de hien cong viec tuong ung
	getch();
	break;
	case 4:
	printf("\nBam phim bat ky de tiep tuc!");
	//goi ham thuc de hien cong viec tuong ung
	break;
	case 5:
	printf("\nBam phim bat ky de tiep tuc!");
	//goi ham thuc de hien cong viec tuong ung
	getch();
	break;
	case 0:
	exit(1);
	default:
	printf("\nKhong co chuc nang nay!");
	printf("\nBam phim bat ky de tiep tuc!");
	getch();
	break;
   }
  }
 } 
 
}
int xoa(char s[90],int vitrixoa)
{
	int n=strlen(s);
	for (int i=vitrixoa;i<n;i++)
	s[i]=s[i+1];
	s[n-1]='\0';
}
int xoakt(char s[50])
{
	for(int i=0;i<strlen(s);i++)
	if(s[i]==' '&& s[i+1]==' ')
	{
		xoa(s,i);
		i--;
	}
	
	if(s[0]==' ')
	xoa(s,0);
	if(s[strlen(s)-1]==' ')
	xoa(s,strlen(s)-1);
}
int chuanhoa(char s[50])
{
	int i=0;
	strlwr(s);
	xoakt(s);
	s[0]=s[0]-32;
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' '&& s[i+1]!=' ')
		s[i+1]=s[i+1]-32;
	}
}
int demtu(char s[50])
{
	int demtu=1;
	strlwr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==' ')
		demtu++;
	}
	printf("\nSo tu %d",demtu);
}
int demkt(char s[50])
{
	int demkytu=0;
	int demtu=0;
	char c,c1;
	printf("\nNhap mot ky tu:");
	scanf("%c",&c);
	fflush(stdin);
	strupr(s);
	for(int i=0;i<strlen(s);i++)
	{
		if(s[i]==toupper(c))
		demkytu++;
	}
	printf("\nSo ky tu %d",demkytu);
}
void ghep(char s[50],char s2[50])
{
	int i,j,size,size1,size2;
	fflush(stdin);
	printf("\nNhap chuoi s2:");
	gets(s2);
	chuanhoa(s2);
	size1 =strlen(s);
	size2 =strlen(s);
	size =size1+size2;
	j=0;
	for(i=size1;i<size;i++)
	{
		s[i] = s2[j];
		j++;
	}
	s[i]='\0';
	printf("\nKet qua khi noi chuoi la:\n");
	printf("%s",s);
}
