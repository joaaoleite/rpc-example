/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "counter.h"

static int counter = 0;

void *
limpa_1_svc(void *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	counter = 0;

	return (void *) &result;
}

void *
inc_1_svc(int *argp, struct svc_req *rqstp)
{
	static char * result;

	/*
	 * insert server code here
	 */

	counter += *argp;

	return (void *) &result;
}

int *
consulta_1_svc(void *argp, struct svc_req *rqstp)
{
	static int  result;

	/*
	 * insert server code here
	 */

	result = counter;
	
	return &result;
}
