/* 02L01.c: This is my first C program */
#include <stdio.h>
#include <sys/time.h>

char* strcatplus( char* dest, char* src )
{
	while (*dest) dest++;
	while (*dest++ = *src++);
	return --dest;
}

int main()
{
	char randomText[1000];
	randomText[0] = '\0';
	char *p = randomText;

	struct timeval time;
	gettimeofday(&time, NULL);
	long start = ((unsigned long long)time.tv_sec * 1000000) + time.tv_usec;
	p = strcatplus( p, "John, " );
	p = strcatplus( p, "Paul, " );
	p = strcatplus( p, "George, " );
	p = strcatplus( p, "Ringo, " );
	gettimeofday(&time, NULL);
	long end = ((unsigned long long)time.tv_sec * 1000000) + time.tv_usec;
	long elapsed = end - start;
	printf( "The C program took %lu microseconds (millionths of a second)\n", elapsed );
	return 0;
}