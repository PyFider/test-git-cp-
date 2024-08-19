#include <stdio.h>
#include <stdlib.h>

#define BUFLEN 1024
main(int argc, const char **argv) 
{
	FILE *srcf, *dstf;
	const char *srcdir, *dstdir;
	char buf[BUFLEN];

	if (argc < 3) return 1;
	srcdir = *++argv;
	dstdir = *++argv;
	srcf = fopen(srcdir, "r");
	dstf = fopen(dstdir, "w");

	for (;fgets(buf, BUFLEN, srcf);)
		fputs(buf, dstf);

	fclose(srcf);
	fclose(dstf);

	return 0;	
}
