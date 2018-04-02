#pragma once

#include <stdio.h>

// получение целого числа
int get_integer();
int get_integer_msg(const char *msg);

int get_integer_interval(int min, int max);
int get_integer_interval_msg(int min, int max, const char *msg);

// получение натурального числа
int get_natural();
int get_natural_msg(const char *msg);

// получение вещественного числа
double get_real();
double get_real_msg(const char *msg);