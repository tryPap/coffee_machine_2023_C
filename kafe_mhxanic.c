#include <stdio.h>
#include <stdlib.h>
#include "want_water.h"
#include "menu.h"



int num;
char ch;
float money,resta;
float synolo = 0;
float esp = 1.2;
float esp2 = 1.60;
float espkr = 2;
float espdec = 2.5;
float espdec2 = 2.5;
float late = 2.5;
float stkaf = 2;
float cap = 2.2;
float cap2 = 2.5;
float capkr = 2.5;
float capdec = 2.8;
float ell = 1;
float ell2 = 1.2;
float filt = 1.8;
float sok = 2.8;


int main(){
	system("color 02" );
	system("chcp 1253");	
	system("cls");	
arxi:	
	printf("Εισάγετε χρήματα: ");
	scanf("%2f",&money);
	//fflush(stdin);
	system("cls");
	printf("Χρήματα:%.2f\n",money);
	
	menu();
	

	scanf("%i",&num);
	switch(num){
		case 1:
			printf("Eσπρέσσο κρύος 2.00€\n");
			synolo = espkr;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;
		}
		case 2:
			printf("Eσπρέσσο ντεκαφεϊνέ κρύος 2.50€\n");
			synolo = espdec;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;
			}
		case 3:
			printf("Λάτε 2.50€\n");
			synolo = late;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 4:
			printf("Καπουτσίνο κρύος 2.50€\n");
			synolo = capkr;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 5:
			printf("Στιγμιαίος καφές 2.00€\n");
			synolo = stkaf;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}			
		case 6:
			printf("Eλληνικός (μονός) 1.00€\n");
			synolo = ell;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 7:
			printf("Eλληνικός (διπλός) 1.20€\n");
			synolo = ell2;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 8:
			printf("Εσπρέσσο (μονός) 1.20€\n");
			synolo = esp;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 9:
			printf("Εσπρέσσο (διπλός) 2.00€\n");
			synolo = esp2;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 10:	
			printf("Εσπρέσσο ντεκαφεϊνέ (μονός) 2.00€\n");
			synolo = espdec;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 11:
			printf("Εσπρέσσο ντεκαφεϊνέ (διπλός)  2.50€\n");
			synolo = espdec2;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 12:
			printf("Καπουτσίνο ζεστός (μονός) 2.20€\n");
			synolo = cap;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 13:
			printf("Καπουτσίνο ζεστός (διπλός) 2.50€\n");
			synolo = cap2;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 14:
			printf("Καπουτσίνο ντεκαφεϊνέ 2.80€\n");
			synolo = capdec;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 15:
			printf("Καφές φίλτρου 1.80€\n");
			synolo = filt;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 16:
			printf("Ρόφημα σοκολάτα 2.80€\n");
			synolo = sok;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 17:
			printf("Ρόφημα κακάο 2.80€\n");
			synolo = sok;
			resta = money - synolo;
			if(money < synolo){
			printf("Τα χρήματα δεν αρκούν.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}		
		default:
			printf("Επέλεξε μια από τις υπάρχουσες επιλογές!\n");
			goto arxi;	
			}
			
			
	printf("\nΘέλετε νερό με τον καφέ σας(+0.50€); y/n? ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch == 'y'){
		
		want_water(synolo);
		rest(synolo,money);
	}else{
			printf("Το σύνολο είναι %.2f €",synolo);
			printf("\nΤα ρέστα σας είναι %.2f €",resta);
	}
		
		
	return(0);	
}


