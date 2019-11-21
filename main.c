#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i;
	char input[100];
	
	FILE* fp;
	
	fp=fopen("smaple.txt","w");
	for(i=0;i<3;i++)
	{
		printf("input a word:");
		scanf("%s", input);
		fprintf(fp, "%s", input);
	}	

	fclose(fp);
	return 0;
}
