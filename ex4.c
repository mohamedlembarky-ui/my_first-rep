#include<stdio.h>


typedef struct{
    int jj ;
    char mm[15];
    int aa;

} date ;
void affiche(date *dp){
    printf("%d",dp->jj);
    printf("%s",dp->mm);
    printf("%d",dp->aa);
}
void demmandedate(date *dp){
    printf("donner le jour");
    scanf("%d",&dp->jj);
    printf("donner le nom du mois ");
    scanf("%s",dp->mm);
    printf("donner l'anné ");
    scanf("%d",&dp->aa)
}
int numeromois(char nom[]){
char [12][15]={janvier,fevrier}    
        
        
}