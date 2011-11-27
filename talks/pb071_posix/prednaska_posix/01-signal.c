#include <signal.h>
#include <stdlib.h>
#include <stdio.h>
#include <setjmp.h>

int int_stage = 0;
int got_signal = 0;
jmp_buf return_to_top_level;

void sigint(int parameter)
{
	(void)parameter;
	got_signal = 1;
	int_stage++;
}

void sigterm(int parameter)
{
	(void)parameter;
	got_signal = 1;
	int_stage = 4;
}


int main()
{
//	signal(SIGINT,SIG_IGN);
	signal(SIGINT,sigint);
	signal(SIGTERM,sigterm);

	while(1)
	{
		if (got_signal)
		{
			signal(SIGINT,sigint);
			got_signal = 0;

			switch(int_stage)
			{
			case 0:
				puts("Ne, mne nezabijes.");
				break;
			case 1:
				puts("Mne fakt nezabijes.");
				break;
			case 2:
				puts("Nech toho....");
				break;
			case 3:
				puts("Not tak jo, zabijes, ale nedelej to.");
				break;
			default:
				puts("Au....");
				exit(1);
			}
		}
	}

	return 0;
}
