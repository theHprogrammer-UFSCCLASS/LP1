#include <stdio.h>
#include <locale.h>

int main(void)
{
    setlocale(LC_ALL, "Portuguese");
    printf("Localiza��o do programa: impress�o de caracteres e acentua��o. \n\n");

    return 0;
}