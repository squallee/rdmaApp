#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>
#include<rdma/rdmacma.h>
#defineTESTNZ(x)\
do{ if((x))
	die("error:"#x"failed(returnednon-zero).");
} while(0)
#defineTESTZ(x)\
do{ if(!(x))
	die("error:"#x"failed(returnedzero/null).");
} while(0)
static void die(constchar∗reason);
int main(intargc,char∗∗argv)
{
	return0;
}
voiddie(constchar∗reason)
{
	fprintf(stderr,"%s\n",reason);
	exit(EXITFAILURE);
}