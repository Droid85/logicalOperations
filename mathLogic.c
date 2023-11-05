#include <stdio.h>

void showTitle(char txt[], int c);

int main() {
	showTitle("Disjunction !A v B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\tv\t|\t%d\n", a, b, (!a || b));
		}
	}
	
	showTitle("Disjunction A v !B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\tv\t|\t%d\n", a, b, (a || !b));
		}
	}
	
	showTitle("Conjunction A ^ !B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t^\t|\t%d\n", a, b, (a && !b));
		}
	}

	showTitle("Implies A => !B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t=>\t|\t%d\n", a, b, (!a || !b));
		}
	}

	showTitle("Implies A => (A => !B)", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t=>\t|\t%d\n", a, b, (!a || (!a || !b)));
		}
	}

	showTitle("(!A v B) ^ B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\tv ^\t|\t%d\n", a, b, ((!a || b) && b));
		}
	}

	showTitle("A v !B v A", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\tv v\t|\t%d\n", a, b, (a || !b || a));
		}
	}

	showTitle("Implies A <=> B", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t<=>\t|\t%d\n", a, b, ((!a || b) && (a || !b)));
		}
	}

	showTitle("A <=> (A v !B)", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t<=> v\t|\t%d\n", a, b, ((!a || (!b || a)) && (a || !(!b || a))));
		}
	}

	showTitle("A <=> (A => !B)", 0);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			printf("\t%d\t|\t%d\t|\t<=> =>\t|\t%d\n", a, b, ((!a || (!a || !b)) && (a || !(!a || !b))));
		}
	}

	showTitle("A v !B v C", 1);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				printf("\t%d\t|\t%d\t|\t%d\t|\tv v\t|\t%d\n", a, b, c, (a || !b || c));
			}
		}
	}

	showTitle("A <=> (!B v C)", 1);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				printf("\t%d\t|\t%d\t|\t%d\t|\t<=> v\t|\t%d\n", a, b, c, ((!a || (!b || c)) && (a || !(!b || c))));
			}
		}
	}

	showTitle("C <=> (A ^ !B)", 1);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				printf("\t%d\t|\t%d\t|\t%d\t|\t<=> ^\t|\t%d\n", a, b, c, ((!c || (a && !b)) && (c || !(a && !b))));
			}
		}
	}

	showTitle("A <=> (C => !B)", 1);
	
	for (int a = 0; a <= 1; a++) {
		for (int b = 0; b <= 1; b++) {
			for (int c = 0; c <= 1; c++) {
				printf("\t%d\t|\t%d\t|\t%d\t|\t<=> =>\t|\t%d\n", a, b, c, ((!a || (!c || !b)) && (a || !(!c || !b))));
			}
		}
	}

	return 0;
}

void showTitle(char txt[], int c) {
	printf("============= %s =============\n", txt);
	c ? printf("\tA\t|\tB\t|\tC\t|\tlog\t|\tRES:\n") : printf("\tA\t|\tB\t|\tlog\t|\tRES:\n");
	printf("---------------------------------------------------------------\n");
}
