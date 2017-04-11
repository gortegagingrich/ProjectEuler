problem16() :-
	A is 2 << 999,
	addDigits(A,X),
	write(X),
	!.

addDigits(A, A) :- A<10.
addDigits(A, X) :-
	A2 is A div 10,
	R is A mod 10,
	addDigits(A2, X2),
	X is X2 + R.