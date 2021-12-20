#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

struct str_str {
	const char *key;
	const char *value;
};

int main(int argc, char *argv[])
{
	int i;
	struct str_str table[] = {
		{ "foo", "Hello, World!\n" },
		{ "bar", "SAZANAMI BIGWAVE!\n" },
		{ "bo", "Bobobo-bo Bo-bobo!!!!!!!!!!!!!!!!!!!!!!!!!!!!!\n" },
		{ "kasu", "you-kun\n" },
		{ "arara", "arararara\n" },
	};

	if (argc < 2) {
		srand((unsigned)time(NULL));
		i = rand() % (sizeof(table) / sizeof(table[0]));
	} else {
		for (i = 0; i < sizeof(table) / sizeof(table[0]); i++)
			if (strcmp(argv[1], table[i].key) == 0)
				break;
	}

	if (i == sizeof(table) / sizeof(table[0]))
		i = 0;

	printf("%s", table[i].value);

	return 0;
}
