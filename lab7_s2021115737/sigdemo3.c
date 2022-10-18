#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int time;
void f(int);

int main()
{
	void f(int);			
    time = 0;

	signal(SIGINT, f);	
    printf("you can't stop me!\n");
	while(1){
        sleep(1);
        time++;
        printf("haha\n");
    }

    return 0;
}

void f(int signum)
{
    printf("Currently elapsed time: %d sec(s)\n",time);
}
