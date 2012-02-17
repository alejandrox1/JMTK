#ifndef STRING_H
#define STRING_H

#include "types.h"

int strlen(const char *s);

void memcpy(uint8_t *dest, const uint8_t *src, uint32_t len);

void memset(uint8_t *dest, uint8_t val, uint32_t len);

int strcmp(const char *str1, const char *str2);

char *strcpy(char *dest, const char *src);

char *strcat(char *dest, const char *src);

#endif
