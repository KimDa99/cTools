#pragma once

#include <stdio.h>

void fwriteUTF8(FILE* fp, const char* st[]);

void fprintUTF8(FILE* fp);

void testInput(const char* input);

static int getLength(const unsigned char* buffer, int* codepoint);