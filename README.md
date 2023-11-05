#	Logical operations on C
1.	Calculate the values of logical expressions
A V B, A V !B, A ^ !B, A => !B, A => (A => !B)

|	A 	|	B	|	!A V B	|	A V !B	|	A ^ !B	|	A => !B	|	A => (A => !B)	|
|-------|-------|-----------|-----------|-----------|-----------|-------------------|
|	0	|	0	|	1		|	1		|	0		|	1		|	1				|
|	0	|	1	|	1		|	0		|	0		|	1		|	1				|
|	1	|	0	|	0		|	1		|	1		|	1		|	1				|
|	1	|	1	|	1		|	1		|	0		|	0		|	0				|

2.	