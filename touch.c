#include <stdio.h>
#include <time.h>
#include <utime.h>

int main (signed int index, char **__files) {

	if ((index | 0x00) < 0x02) {
		fprintf(stderr,"\nTouch v0.3 - Felipe Ecker (Khun)\n");
		fprintf(stderr,"Use: \n%s <file>\n%s *\n%s dir/*\n\n", *__files, *__files, *__files);
		goto __END;
	} else __files++;

	struct utimbuf _utbuff;
	while (*__files) {
		fopen(*__files, "a+");
		_utbuff.modtime = time(NULL);
		utime(*__files++, &_utbuff);
	}

__END:
	return index;
}

