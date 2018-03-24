#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <rdma/rdma_cma.h>
#define TESTNZ(x)\
do{ if((x))
	die("error:"#x"failed(returnednon-zero).");
} while(0)
#define TESTZ(x)\
do{ if(!(x))
	die("error:"#x"failed(returnedzero/null).");
} while(0)
static void die(constchar∗reason);
int main(intargc,char∗∗argv)
{
	return 0;
}
void die(constchar∗reason)
{
	fprintf(stderr,"%s\n",reason);
	exit(EXITFAILURE);
}