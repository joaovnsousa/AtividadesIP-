#include <stdio.h>
#include <string.h>

typedef struct //struct para os horarios
{
  int horas, minutos, segundos;

} tHorario;

typedef struct //struct para as datas
{
  int dia, mes, ano;

} tData;

typedef struct //struct para os compromissos
{
  char compromisso[49]; // array usado armazenar os compromissos
  tHorario hora;
  tData data;

} tCompromisso;

int main(void)
{
  int i, m, a, quantos;
  printf("Digite a quantidade de compromissos: \n");
  scanf("%d", &quantos);
  tCompromisso instancia[quantos];
  printf("Cadastre as datas(dia-mes-ano):\n");
  for (i = 0; i < quantos; i++)
  {
    scanf("%d", &instancia[i].data.dia); //usei os '.' para acessar o conteúdo das structs
    scanf("%d", &instancia[i].data.mes); // [i], já que o usuário quem escolhe a quantidade
    scanf("%d", &instancia[i].data.ano);
  }
  printf("Cadastre os horarios(horas-minutos-segundos):\n");
  for (i = 0; i < quantos; i++)
  {
    scanf("%d", &instancia[i].hora.horas);
    scanf("%d", &instancia[i].hora.minutos);
    scanf("%d", &instancia[i].hora.segundos);
  }
  printf("Cadastre as instancias:\n");
  for (i = 0; i < quantos; i++)
  {
    scanf("%s", instancia[i].compromisso);
  }
  printf("\n---------------------------------------------------------------------------------\n");
  printf(" Instancia\t\tDia\tMes\tAno\tHoras\tMinutos\tSegundos\n");
  printf("---------------------------------------------------------------------------------\n");

  for (i = 0; i < quantos; i++)
  {
    printf(" %s\t\t\t%d\t%d\t%d\t%d\t%d\t%d\n", instancia[i].compromisso, instancia[i].data.dia, instancia[i].data.mes, instancia[i].data.ano, instancia[i].hora.horas, instancia[i].hora.minutos, instancia[i].hora.segundos);

    printf("---------------------------------------------------------------------------------\n");
  }

  printf("Digite o Mes e o Ano do compromisso de analise:\n");
  scanf("%d %d", &m, &a);

  for (i = 0; i < quantos; i++)
  {
    if (instancia[i].data.ano == a && instancia[i].data.mes == m)
    {
      printf("Compromissos marcados: \n");
      printf("\n---------------------------------------------------------------------------------\n");
      printf(" Instancia\t\tDia\tMes\tAno\tHoras\tMinutos\tSegundos\n");
      printf("---------------------------------------------------------------------------------\n");

      printf(" %s\t\t\t%d\t%d\t%d\t%d\t%d\t%d\n", instancia[i].compromisso, instancia[i].data.dia, instancia[i].data.mes, instancia[i].data.ano, instancia[i].hora.horas, instancia[i].hora.minutos, instancia[i].hora.segundos);

      printf("---------------------------------------------------------------------------------\n");
    }
  }

  return 0;
}