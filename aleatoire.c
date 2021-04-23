#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<string.h>


void shuffle(char *names[], int n)
{
  char *s[n];
  for (int i = 0; i < n;)
 {
    int j = i + rand() % (n - i);
    /* Reject this shuffle if the element we're about to place
     * is the same as the previous one
     */
    if (i > 0 && strcmp(names[j], names[i-1]) == 0)
      i = 0;
    else {
      /* Otherwise, place element i and move to the next one*/
      char* t = names[i];
      names[i] = s[j];
      names[j] = t;
      ++i;
    }
  }
}



int main()
{
  int n;
  printf("Entrez la taille du tableau\n");
  scanf("%d", &n);
  char* names[n];
  for (int i = 0; i < n; i++)
  {
    scanf("%s\n", names[i]);
  }
  shuffle(names, n);
  for (int i = 0; i < n; i++)
  {
    printf("names[%d] = %s\n", i, names[i]);
  }
  return 0;
}
