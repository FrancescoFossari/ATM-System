#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void main(){
    mainmenu();
    scelte();
}

void mainmenu(){
printf("\t\t***************************\n\n\t\t WELCOME IN, JOIN OUR BANK!\n\n\t\t***************************");
printf("\n\n\t\tScegli l'operazione : \n");
}

void scelte(){
   int scelta;
   printf("\n 1) Crea un account\n 2) Prelievo\n 3) Deposito\n 4) Trasferimento fondi \n\n\t\t Scelta: ");
   scanf("\t%d",&scelta);
   if(scelta==1){
    account();
   }else if(scelta==2){
   Prelievo();
   }else if(scelta==3){
   Deposito();
   }else{
   Trasferimento();
   }
}

void account(){
struct creaccount{
char *nome;
char *cognome;
int *codice;
}Creatore;

printf("\n\n\t\tCreazione del tuo account...\n\n");
printf("Inserisci il tuo nome : \n");
scanf("%s", &Creatore.nome);
printf("Inserisci il tuo cognome : \n");
scanf("%s", &Creatore.cognome);
printf("\n\n\t\tAccount creato:\n 1)Nome : %s \n 2)Cognome : %s\n 3)Codice associato all'account : %d \n\n", &Creatore.nome, &Creatore.cognome, Creatore.codice=100+rand()%1000);
system("PAUSE");
}

void Prelievo(){
float conto,scelta1;
printf("\n\n");
printf("\t******************************************\n");
printf("\n\t\tSaldo disponibile : %5.2f Euro\n\n\t******************************************\n\nQuanti soldi vuoi prelevare? :  ",conto=100+rand()%10000);
scanf("%f",&scelta1);
printf("\n\n\n\n\n\t...Prelievo effettuato... Grazie e Buona Giornata! \n\n\t******************************************\n\n\t\tSaldo attuale : %f\n\n\t******************************************\n\n\n\n",conto-scelta1);
system("PAUSE");
}

void Deposito(){
float scelta2, conto2=100+rand()%10000;
printf("\n\n\t\t******************************************");
printf("\n\n\t\tQuale cifra vuoi depositare?\n\n");
printf("\t\t");
scanf("%f",&scelta2);
printf("\n\n\n\n\t******************************************\n\n\t\tSaldo aggiornato : %5.2f Euro\n\n\t******************************************\n\n", conto2+scelta2);
printf("\n\n\n\n\n\t...Deposito effettuato... Grazie e Buona Giornata! \n\n\t**************************************************\n\n");
system("PAUSE");
}

void Trasferimento(){
float conto3= 100+rand()%10000;
printf("\n\n");
printf("\t******************************************\n");
printf("\n\t\tSaldo disponibile : %5.2f Euro\n\n\t******************************************\n\n", conto3);
char iban[20];
float scelta3;
printf("Inserisci IBAN del destinatario : ");
scanf("%s", &iban);
printf("\nInserisci la cifra da inviare : ");
scanf("%f", &scelta3);
printf("\n\n\n");
printf("\t\t*************************************************************\n");
printf("\n\t\tTRANSAZIONE ESEGUITA CON SUCCESSO !\n\n");
printf("\t\tCifra inviata all' IBAN -- %s --   = %5.2f Euro", &iban, scelta3);
printf("\n\n\t\t*************************************************************\n\n\n");
system("PAUSE");
}
