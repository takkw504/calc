
testmake: addition.c multiplication.c division.c subtraction.c test.c ../unity/src/unity.c
	gcc test.c multiplication.c division.c subtraction.c addition.c ../unity/src/unity.c -o test.exe
	
run: addition.c multiplication.c division.c subtraction.c calculator.c ../unity/src/unity.c
	gcc calculator.c multiplication.c division.c subtraction.c addition.c ../unity/src/unity.c -o main.exe