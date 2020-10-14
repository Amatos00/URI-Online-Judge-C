#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main() {
	int Q,n1=0,n2=0,n5=0,n10=0,n20=0,n50=0,n100=0;
	scanf("%d",&Q);
	printf("%d\n", Q);

	while(Q>0)
	 {
		if (Q>=100)

		{ Q=Q-100; n100=n100+1; }

		else if (Q>=50) { Q=Q-50; n50=n50+1; }
		else if (Q>=20) { Q=Q-20; n20=n20+1; }
		else if (Q>=10) { Q=Q-10; n10=n10+1; }
		else if (Q>=5) { Q=Q-5; n5=n5+1; }
		else if (Q>=2) { Q=Q-2; n2=n2+1; }
		else if (Q>=1) { Q=Q-1; n1=n1+1; }
		else { Q=Q-1; n1=n1+1; }
	}

        printf("%d nota(s) de R$ 100,00\n", n100);

        printf("%d nota(s) de R$ 50,00\n", n50);

        printf("%d nota(s) de R$ 20,00\n", n20);

        printf("%d nota(s) de R$ 10,00\n", n10);

        printf("%d nota(s) de R$ 5,00\n", n5);

        printf("%d nota(s) de R$ 2,00\n", n2);

        printf("%d nota(s) de R$ 1,00\n",n1);

    return 0;
}

