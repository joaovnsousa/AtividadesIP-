#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

void contadorC(char *str, int freq[])
{

  int i, j;
  char ttmp;

  for (i = 0; i < 26; i++)
  {
    freq[i] = 0;
  }

  for (j = 0; str[j] != '\0'; j++)
  {

    if (isalpha(str[j])) //isalpha decide se a letra é representada em maiuscula ou minuscula
    {

      ttmp = tolower(str[j]); //tolower recebe as letras e as devolvem na forma minuscula
      freq[ttmp - 'a']++;
    }
  }
}

int main()
{
  char string[30];
  int i, alfabeto[26];
  printf("Insira a string:\n");
  gets(string); //recebe a string
  contadorC(string, alfabeto);
  for (i = 0; i < 26; i++)
  {
    printf("\n %c \t %d", 'a' + i, alfabeto[i]);
  }

  system("pause");
  return 0;
}