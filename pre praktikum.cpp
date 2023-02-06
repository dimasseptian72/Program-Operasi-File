#include <stdio.h>
#include <conio.h>

int main()
{
	char nama[100], nim[100], jurusan[100], fakultas[100];
	
	printf("NAMA : \n");
	scanf("%[^\n^]", &nama);
	fflush(stdin);
	printf("NIM : \n");
	scanf("%[^\n^]", &nim);
	fflush(stdin);
	printf("Jurusan : \n");
	scanf("%[^\n^]", &jurusan);
	fflush(stdin);
	printf("Fakultas : \n");
	scanf("%[^\n^]", &fakultas);
	fflush(stdin);
	
    FILE *out=fopen("test.txt","w");
	fprintf(out,"%s#%s#%s#%s\n",nama,nim,jurusan,fakultas);
	fclose(out);
	printf("Sukses menambah data.");
	getchar();
	return 0;	
}