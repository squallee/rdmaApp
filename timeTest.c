/*C program to get current system date and time in Linux.*/
 
#include <stdio.h>
#include <time.h>
// #include <math.h>
// #include <inttypes.h>
int main()
{
    // time_t T= time(NULL);
    // struct  tm tm = *localtime(&T);
     


    //
    // long            ms; // Milliseconds
    // time_t          s;  // Seconds
    // struct timespec spec;

    // clock_gettime(CLOCK_REALTIME, &spec);

    // s  = spec.tv_sec;
    // ms = spec.tv_nsec / 1.0e6; // Convert nanoseconds to milliseconds
    // if (ms > 999) {
    //     s++;
    //     ms = 0;
    // }

    // printf("Current time: %"PRIdMAX".%03ld seconds since the Epoch\n",
           // (intmax_t)s, ms);

    // printf("System Date is: %02d/%02d/%04d\n",tm.tm_mday, tm.tm_mon+1, tm.tm_year+1900);
  //   printf("System Time is: %02d:%02d:%02d\n",tm.tm_hour, tm.tm_min, tm.tm_sec);
 	// printf("System milliseconds: %"PRIdMAX".%ld\n", (intmax_t)s, ms);
 	// printf("ms: %ld\n", ms);
 	// int tmp = (intmax_t)s;
 	// printf("s: %d\n", tmp);
 	// float dic = tmp + ms / 1000.0;
 	// printf("sum: %f\n", dic);
	struct timespec start, end;
	clock_gettime(CLOCK_MONOTONIC_RAW, &start);
	//do stuff
    for (int i = 0; i < 10000000; i++) {
        int t = 0;
        t++;
    }
	clock_gettime(CLOCK_MONOTONIC_RAW, &end);

	int delta_us = (end.tv_sec - start.tv_sec) * 1000000 + (end.tv_nsec - start.tv_nsec) / 1000;
	printf("%d\n", delta_us);
    return 0;
}