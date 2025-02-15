#include <stdio.h>
#include <stdlib.h>
#include <math.h>
/*
Îáúÿâèòü âåùåñòâåííûå ïåðåìåííûå a, b è ñ è çàäàòü èõ çíà÷åíèÿ. Ïðåäïîëàãàÿ, ÷òî a, b, c åñòü êîýôôèöèåíòû êâàäðàòíîãî óðàâíåíèÿ âûâåñòè íà êîíñîëü çíà÷åíèÿ èõ êîð-íåé õ1, õ2. Ñëåäóåò ïîäîáðàòü òàêèå çíà÷åíèÿ êîýôôèöèåíòîâ, ïðè êîòîðûõ êîðíè áó-äóò ñóùåñòâîâàòü.
	Ïðèìå÷àíèå. Äëÿ âûïîëíåíèÿ çàäàíèÿ ïîòðåáóåòñÿ ôóíêöèè âû÷èñëåíèÿ êâàä-ðàòíîãî êîðíÿ (âîçâåäåíèå â ñòåïåíü), à òàê æå âûâîä äàííûõ íà êîíñîëü.
	Âîçâåäåíèå â ñòåïåíü - ïîäêëþ÷àåì çàãîëîâî÷íûé ôàéë	 math.h è èñïîëü-çóåì ôóíêöèþ pow, ïåðâûì ïàðàìåòðîì êîòîðîãî äîëæåí áûòü âîçâîäèìîå çíà÷åíèå, à âòîðûì - ñòåïåíü, òèï äàííûõ double.
	Âûâîä äàííûõ - çàãîëîâî÷íûé ôàéë stdio.h, ôóíêöèÿ printf, ïåðâûì ïàðàìåòðîì ÿâëÿåòñÿ ôîðìàòíàÿ ñòðîêà, à ïîñëåäóþùèå - ïåðåìåííûå, çíà÷åíèÿ êîòîðûõ íåîáõî-äèìî âûâåñòè.

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	double a,b,c;
	double x1,x2,d;
	printf("Vvedite a:\n");
	scanf("%lf",&a);
	printf("Vvedite b:\n");
	scanf("%lf",&b);
	printf("Vvedite c:\n");
	scanf("%lf",&c);
	
	d = pow(b,2) - 4*a*c;
	printf("d = %lf\n",d);
	if (d < 0) printf("korney net\n");
	if (d > 0) {
		x1 = -b + sqrt(d)/(2*a);
		x2 = -b - sqrt(d)/(2*a);
	
		printf("x1 = %lf\n,x1");
		printf("x2 = %lf\n,x2");
	}
	
	if (d == 0){
		x1 = -b + sqrt(d)/(2*a);
		printf("Only one koren x = %fl\n",x1);	
	}
	
	

	return 0;
}
