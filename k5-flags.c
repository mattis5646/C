#include <stdio.h>
int main(int argc, char *argv[])
{
/* funktsioon printf () formaadib soovitud andmed ekraanile. Funktsioon ei oma kindlat arvu parameetreid, seega parameetrite arv on muutuv, mis on ka üks plusse c keeles. C keeles on mitmeid tüübimääranguid ja lippe, millega saab määrata väljastava arvu tüübi ( komakohad, täisarv, täht/sümbol) ja lippude abil kuidas konverteeritud numbreid ekraanil formateeritakse (joondamine paremale, vasakule, ei eemaldata liigseid nulle jne). Formaadimäärang algab sümbloiga % millele järgnev andmetüüpi määrav sümbol. 
Järgnevalt näited tüübimäärangute kohta d; f; s; o; X; e, ning lipud 0; -;_; + */
	
	printf(" \nTüübimäärangud:\n\n");
	
	/* d */

	printf("d= positiivne või negatiivne täisarv: \n");
	/*d-väljundab täisarvu, ei kasuta komakohti need ümmardatakse */
	printf("   kasutame, kui väljundit tahame täisarvuna:\n\n");
	printf("näide 1\n");	
	int a;
	int b;
	int F;
	a= 1;
	b=4;
	F=a+b;
	printf("F= 1 + 4= %d\n", F);
	printf("näide 2\n");
	int c= 1.10;
	int d= 5.34;
	int N;
	N= c+d;
	printf("N= 1.10 + 5.34= %d\n", N);
	printf("kui algandmed komakohtadega,väljund ümmardatakse:\n\n\n");
	
	/*f*/

	printf("f= arvestab komakohti\n\n");
	/* f- ujukomaga arv*/
	float e;
	float f;
	float V;
	e= 2;
	f= 6;
	V= e+f;
	printf("näide 1\n");
	printf("V= 6 + 8= %.2f\n", V);
	/* liites täisarvud annab väljund ikkagi komakohad */
	printf("näide 2\n");
	/*anname algandmed komakohtadega*/
	float g;
	float h;
	float B;
	g= 2.45389;
	h= 9.67545;
	B=g+h;
	printf("V= 2.45389 + 9.67545=  %.2f\n\n\n", B);
	
	/* s- väljund tähtedega/sümbolitega */

	printf("s= väljund tähtedega\n\n");
	printf("näide 1\n");
	int palk = 2;
	char nimi[20] = "Rene";
	printf("eelmises kuus teenis %s %d eur\n", nimi, palk);
	printf("näide 2\n");
	int vanus = 20;
	printf("nimi: %s\nvanus: %d\n\n\n",nimi, vanus);

	/* o- arv kaheksand süsteemis*/

	printf("o= arv väljastatakse kaheksand arvsüsteemis\n");
	printf("%o \n\n", 1.9);
	
	/* X- arvud 16-nend süsteemis 1-10 ja A-F*/

	printf("X- arv väljastatakse 16-nend süsteemis\n");
	printf("%X \n\n", 145);

	/*e-kahekordse täpsusega kümmnendmurd*/

	printf("e- arv väljastatakse kahekordsetäpsusega kümmnendmurruna\n");
	printf("%e\n\n", 56);
	
	/*flags= -; _; 0; + */
	printf("flags: näiteid ei too kuna liiga elementaarsed\n\n");
	
	printf("- -joondab kõik tulemused vasakule\n");
	printf("+ -positiivsed ja negatiivsed numbrid hakkavad vastava märgiga\n");
	printf("_ -(tühik), eraldab arve väljundis, positiivne arv algab märgi asemel tühikuga\n");
	printf("0 -väljundisse tühiku asemel 0-e trükkida\n");
	
	
}
