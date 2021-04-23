#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<time.h>

typedef struct
{
  char pseudo[10];
  int situation; // 0 si il est en vie, 1 si il est éliminé
  char *role;
}JOUEUR;

 JOUEUR saisie_joueurs(JOUEUR joueur)
{
  printf("Entrez votre pseudo :\n");
  scanf("%s", joueur.pseudo);
  joueur.situation=0;
  return joueur;
}

void affich_joueurs(JOUEUR joueur, int n)
{

    printf("joueur n°%d :\n", n+1);
    printf("pseudo : %s, situation : %d\n", joueur.pseudo, joueur.situation);

}

void voyante()
{
  printf("C'est au tour de la voyante.\n");
}

void voleur()
{
  printf("C'est au tour du voleur\n");
}

void cupidon()
{
  printf("C'est au tour de cupidon\n");
}

void loupgarou()
{
  printf("C'est au tour des loups-garous\n");
}
void sorciere()
{
  printf("C'est au tour de la sorcière\n");
}
void chasseur()
{
  printf("Le chasseur entre en action\n");
}
void amoureux()
{
  printf("Les amoureux se reveillent\n");
}
void capitaine()
{
  printf("Le village decide de qui sera le capitaine\n");
}
void elimination()
{
  printf("Le village décide de qui éliminer\n");
}



int main(int argc, char *argv)
{
  int n;
  char *t[n];
  int nbgentil = 1;
  int nbloupgarou = 1;
  int nbvoleur=0;
  int nbsorciere;
  int nbcupidon = 0;
  int nbchasseur = 0;
  printf("Entrez le nombre de joueur :\n");
  scanf("%d", &n);
  JOUEUR lg[n];
  for (int i = 0; i < n; i++)
  {
    printf("Joueur n°%d :\n", i+1);
    lg[i] = saisie_joueurs(lg[i]);
  }
  for (int i = 0; i < n; i++)
  {
    affich_joueurs(lg[i], i);
  }
  switch (n)
  {
    case 6:
    printf("Nous aurons dans cette partie 2 l...\n");
    for (int i = 0; i < 2; i++)
    {
      lg[i].role = "loup-garou";
    }
    lg[2].role = "voyante" ;
    for (int i = 3; i < n; i++)
    {
      lg[i].role = "villageois";
    }

    for (int i = 0; i < n; i++)
    {
      t[i] = lg[i].role;
    }
    case 7:
    for (int i = 0; i < 2; i++)
    {
      lg[i].role = "loup-garou";
    }
    lg[2].role = "voyante" ;
    for (int i = 3; i < n; i++)
    {
      lg[i].role = "villageois";
    }
    case 8:
    for (int i = 0; i < 2; i++)
    {
      lg[i].role = "loup-garou";
    }
    lg[2].role = "voyante" ;
    lg[3].role = "cupidon";
    lg[4].role = "chasseur";
    for (int i = 5; i < n; i++)
    {
      lg[i].role = "villageois";
    }
  }
  for (int i = 0;i < n; i++)
  {
    printf("Le joueur n°%d, %s est %s\n", i+1, lg[i].pseudo, lg[i].role);
  }
  for (int i = 0; i < n; i++)
  {
    printf("t[%d] = %s\n", i, t[i]);
  }
  printf("Que la partie commence.\n");
  int nbnuit = 1;
  while(nbgentil != 0 && nbloupgarou != 0)
  {
    if (nbnuit ==  1)
    {
      if(nbvoleur != 0)
      {
        voleur();
      }
      if(nbcupidon != 0)
      {
        cupidon();
        amoureux();
      }
    }
    voyante();
    loupgarou();
    sorciere();
    printf("Le jour se lève...\n");
    if (nbnuit ==  1)
    {
      capitaine();
    }
    elimination();
    if(nbchasseur == 0)
    {
      chasseur();
    }
    nbnuit = nbnuit + 1;
    nbgentil  = 0;
    nbloupgarou = 1;
  }
  if (nbgentil == 0)
  {
    printf("Victoire des loups-garous.\n");
  }
  if (nbloupgarou == 0)
  {
    printf("Victoire des villageois.\n");
  }
  if (nbgentil == 0 && nbloupgarou == 0)
  {
    printf("Egalité.\n");
  }
  return 0;
}












/*void cupidon()//cupidon's role
{
  int* amoureux = 2*malloc(sizeof(int));//
  if (nbtour == 1)
  printf("Cupidon se réveille, choisis les 2 personnes à mettre en couple\n");
  int nbcupidon = 2;
  for ( i = 0; i < 2; i++)
  {
    scanf("%d\n", &amoureux[i]);
  }
  printf("Tu as chosis de rendre amoureux %s et %s\n", joueur1, joueur2);
}

void mortcupidon()
{
  if (nbcupidon !=2)
  {
    int nbcupidon = 0;
  }
  printf("%s est mort, il était %s\n", amoureux1, roleamoureux1);
  printf("Etant mort de chagrin, %s étant amoureux, se tue, il était %s\n", amoureux2,rolejoueur);
}

void capitaine()
{

}

void voyante()
{

}*/
