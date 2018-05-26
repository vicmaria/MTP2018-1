//Nome: Victoria Maria Veloso Rodrigues         Matricula: 11811ECP003
#include <stdio.h>

int main ()
{
    int tipo, x;
    int str[64];
    char h[255];
    int* pi = (int *) h;
    char* pc = (char *) &str;
    
    printf("1- Codificar\n2- Descodificar\n");
    scanf("%d", &tipo);
    x =getchar();
    
    if(tipo == 1)
    {
        for(x=0; x<255; x++)
        {
            h[x]=0;
        }
        printf("Insira uma frase\n");
        fgets(h,255,stdin);
        for(x=0; h[x]!=0; x++)
        {
            if(h[x]==10){h[x]=0;}
        }
        for(x=0; *(pi+x)!=0; x++)
        {
            printf("%d ", *(pi+x));
        }
    }
    if(tipo == 2)
    {
        printf("Insira um numero\n");
        for(x=0;x<64;x++)
        {
            scanf("%d", &str[x]);
            if(getchar()=='\n')
            {
                break;
            }
        }
        for (x=0;*(pc+x)!=0;x++)
        {
        printf("%c", *(pc+x));
        }
    }
    return 0;
}
