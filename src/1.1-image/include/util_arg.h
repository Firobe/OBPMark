/**
 * \file util_arg.h
 * \brief Command line argument util for Benchmark #1.1
 * \author Ivan Rodriguez-Ferrandez (BSC)
 */
#ifndef UTIL_ARG_H_
#define UTIL_ARG_H_

#include "obpmark.h"
#include "benchmark.h"

#include <chrono>
#include <sys/time.h>
#include <ctime>

/* Definitions */
#define ARG_SUCCESS 	0
#define ARG_ERROR 	-1

/* Functions */

/**
 * \brief Command line argument handler.
 */
int arguments_handler(
	int argc,
	char **argv,
	unsigned int *w_size,
	unsigned int *h_size,
	unsigned int *frames,
	bool *csv_mode,
	bool *database_mode,
	bool *print_output,
	bool *verbose_output,
	bool *random_data,
	char *input_folder
	);

/**
 * \brief Prints command line usage. 
 */
void print_usage(const char *exec_name); 

/**
 * \brief gets the linux time in microseconds.
 */
long int get_timestamp();

#endif // UTIL_ARG_H_
