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
	printf("�������� �������: ");
	scanf("%2f",&money);
	//fflush(stdin);
	system("cls");
	printf("�������:%.2f\n",money);
	
	menu();
	

	scanf("%i",&num);
	switch(num){
		case 1:
			printf("E������� ����� 2.00�\n");
			synolo = espkr;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;
		}
		case 2:
			printf("E������� ���������� ����� 2.50�\n");
			synolo = espdec;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;
			}
		case 3:
			printf("���� 2.50�\n");
			synolo = late;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 4:
			printf("���������� ����� 2.50�\n");
			synolo = capkr;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 5:
			printf("���������� ����� 2.00�\n");
			synolo = stkaf;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}			
		case 6:
			printf("E�������� (�����) 1.00�\n");
			synolo = ell;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 7:
			printf("E�������� (������) 1.20�\n");
			synolo = ell2;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 8:
			printf("�������� (�����) 1.20�\n");
			synolo = esp;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 9:
			printf("�������� (������) 2.00�\n");
			synolo = esp2;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 10:	
			printf("�������� ���������� (�����) 2.00�\n");
			synolo = espdec;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 11:
			printf("�������� ���������� (������)  2.50�\n");
			synolo = espdec2;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 12:
			printf("���������� ������ (�����) 2.20�\n");
			synolo = cap;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 13:
			printf("���������� ������ (������) 2.50�\n");
			synolo = cap2;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 14:
			printf("���������� ���������� 2.80�\n");
			synolo = capdec;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 15:
			printf("����� ������� 1.80�\n");
			synolo = filt;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 16:
			printf("������ �������� 2.80�\n");
			synolo = sok;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}
		case 17:
			printf("������ ����� 2.80�\n");
			synolo = sok;
			resta = money - synolo;
			if(money < synolo){
			printf("�� ������� ��� ������.\n");
			goto arxi;
			} else if(money > synolo || money == synolo) {
			break;			
			}		
		default:
			printf("������� ��� ��� ��� ���������� ��������!\n");
			goto arxi;	
			}
			
			
	printf("\n������ ���� �� ��� ���� ���(+0.50�); y/n? ");
	fflush(stdin);
	scanf("%c",&ch);
	if(ch == 'y'){
		
		want_water(synolo);
		rest(synolo,money);
	}else{
			printf("�� ������ ����� %.2f �",synolo);
			printf("\n�� ����� ��� ����� %.2f �",resta);
	}
		
		
	return(0);	
}


