#include <stdio.h>
#include <locale.h>
void main()
{
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
