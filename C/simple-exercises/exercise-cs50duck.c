#include <stdio.h>
void hello() {
    printf ("Hello buddy!\n") ;
}

int two(int t, int y) {
    int a= t+y ;
    return a;
}

void closeprogram() {
    printf ("Closing the system...\n") ;
}

int main(void) {
    int opt, t, y ;
    printf ("+--------------------------------+\n") ;
	printf ("| Chose one option:              |\n") ;
	printf ("+--------------------------------+\n") ;
	printf ("| 1 - Say Hello                  |\n") ;
	printf ("| 2 - Add two numbers            |\n") ;
	printf ("| 3 - Exit                       |\n") ;

    scanf ("%d", &opt) ;
	switch (opt) {
		case 1:
			printf ("\nYou picked option 1...\n") ;
			hello() ;
			break;
		case 2:
			printf ("\nYou picked option 2...\n") ;
            printf ("Type the first number\n") ;
            scanf ("%d" ,&t) ;
            printf ("Type the second number\n") ;
            scanf ("%d" ,&y) ;
			two(t,y) ;
            int result = two(t,y);
            printf ("The result is %d\n" ,result) ;
			break;
		case 3:
			printf ("\nYou picked option 3...\n") ;
			closeprogram() ;
			break ;
        default :
			printf ("\nERROR! Option not included...\n") ;
	}
    return 0;
}
