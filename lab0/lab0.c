#include <stdio.h>
#include <locale.h>
void name() {
	setlocale(LC_CTYPE, "RUS");
	puts("* * * * * * * * * * * * * * * * * *");
	puts("*                                 *");
	puts("*  theme: create console app      *");
	puts("*                                 *");
	puts("*  Created by: Mihaylov Daniil    *");
	puts("*                                 *");
	puts("* * * * * * * * * * * * * * * * * *");
}
void date() {
	setlocale(LC_CTYPE, "RUS");
	puts("07 04 08");
	puts(" ---    ___");
	puts("|  |      /");
	puts("|__|     / ");
	puts(" ---    |  |");
	puts("|  |    |__|");
	puts("|__|       |");
	puts(" ---     ---");
	puts("|  |    |__|");
	puts("|__|    |__|");
}
void main()
{

	name();
	date();
	setlocale(LC_CTYPE, "RUS");
	puts("русский");
	printf("  ");
	puts("press enter to continue");
	getchar();
	puts("continue programm");
	return 0;
}

