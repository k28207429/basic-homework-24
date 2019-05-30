#include <stdio.h>
#include <stdlib.h>
struct course

{

	char name[12];  
	int cal;
	int comp;
	int prog;

} p;




int main(void)

{

    FILE *pFile;
	printf("用唯讀模式讀取couse.txt(結構體)\n");
	printf("讀取內容為：\n");
	pFile=fopen("course.txt", "r");
    if (pFile==NULL)

    {
        printf("開啟失敗\n");
        exit(1);

	}   

    else

    {
    	while (fscanf(pFile, "%[^,],%d,%d,%d", p.name, &p.cal, &p.comp, &p.prog)!=EOF) 
    	    printf("%s\t %d\t %d\t %d", p.name, p.cal, p.comp, p.prog); 

	}
	printf("\n");

    fclose(pFile);

    system("pause");

    return 0;

}

