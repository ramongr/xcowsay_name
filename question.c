#include <stdio.h>
#include <stdlib.h>


int main()
{
    FILE *fp;
    char name[255];
    fp=fopen("Cow","w+");
    
    printf("What's your name?\n");
    fgets(name,254,stdin);
    
    fprintf(fp,"Hello! I'm %s",name);
    
    fclose(fp);
    system("xcowsay < Cow");

    system("rm Cow");
    
    return 0;
}
