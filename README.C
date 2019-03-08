/* ex4.c - main, produce, consume */
#include <xinu.h>
void produce(void), consume(void);
int32 n = 0; /* Global variables are shared by all processes */
/*------------------------------------------------------------------------ * main - Example of unsynchronized producer and consumer processes *------------------------------------------------------------------------ */
void main(void) {
resume( create(consume, 1024, 20, "cons", 0) ); resume( create(produce, 1024, 20, "prod", 0) );
}
/*------------------------------------------------------------------------ * produce - Increment n 2000 times and exit *------------------------------------------------------------------------ */
void produce(void) {
}
int32 i;
for( i=1 ; i<=2000 ; i++ ) n++;
/*------------------------------------------------------------------------ * consume - Print n 2000 times and exit *------------------------------------------------------------------------ */
void consume(void) {
}
int32 i;
for( i=1 ; i<=2000 ; i++ )
