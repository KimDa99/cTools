#define _CRT_SECURE_NO_WARNINGS

// ====================================== //
#define ONE_BYTE_MAX 0x7F

#define TWO_BYTE_MIN 0xC0
#define TWO_BYTE_MAX 0xDF

#define THREE_BYTE_MIN 0xE0
#define THREE_BYTE_MAX 0xEF

#define FOUR_BYTE_MIN 0xF0
#define FOUR_BYTE_MAX 0xF7
// ====================================== //

#include "utfull.h"
#include <stdio.h>
#include <windows.h>;

// fp passed on in "w+" mode
void fwriteUTF8(FILE* fp, const char* st[])
{

}

void fprintUTF8(FILE* fp)
{

}

void testInput(const char* input)
{
	unsigned char buffer[4];
	int codepoint;
	int bytes_read;

	while (*input)
	{

	}
}

static int getLength(const unsigned char* buffer, int* codepoint)
{


	return 0;
}