#include <stdio.h>
#include <conio.h>

/* Created by Rizky Khapidsyah */

int main()
{
	char* gang[5] = {
		"Ayah",
		"Ibu",
		"Abang",
		"Kakak",
		"Adik"
	};

	int x;
	char* cptr;

	for (x = 0; x < 5; x++) {
		cptr = gang[x];

		while (*cptr) {
			putchar(*cptr);
			cptr++;
		}
		putchar('\n');
	}

	_getch();
	return(0);
}