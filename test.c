#include "../unity/src/unity.h"
#include "addition.h"
#include "multiplication.h"
#include "division.h"
#include "subtraction.h"



void test_add(void){
	TEST_ASSERT_EQUAL_FLOAT(3, add(1.5,1.5));
	TEST_ASSERT_EQUAL_FLOAT(4, add(2,2));
	TEST_ASSERT_EQUAL_FLOAT(8, add(4,4));
	TEST_ASSERT_EQUAL_FLOAT(10, add(5,5));
}

void test_sub(void){
	TEST_ASSERT_EQUAL_FLOAT(0, sub(1,1));
	TEST_ASSERT_EQUAL_FLOAT(0, sub(2,2));
	TEST_ASSERT_EQUAL_FLOAT(0, sub(4,4));
	TEST_ASSERT_EQUAL_FLOAT(0, sub(5,5));
}

void test_mult(void){
	TEST_ASSERT_EQUAL_FLOAT(1, mult(1,1));
	TEST_ASSERT_EQUAL_FLOAT(4, mult(2,2));
	TEST_ASSERT_EQUAL_FLOAT(16, mult(4,4));
	TEST_ASSERT_EQUAL_FLOAT(25, mult(5,5));
}

void test_div(void){
	TEST_ASSERT_EQUAL_FLOAT(1, div(1,1));
	TEST_ASSERT_EQUAL_FLOAT(1, div(2,2));
	TEST_ASSERT_EQUAL_FLOAT(1, div(4,4));
	TEST_ASSERT_EQUAL_FLOAT(1, div(5,5));
}

void test_precission(void) {
	TEST_ASSERT_FLOAT_WITHIN(3, 2.222, add(0.111, 0.111));
	TEST_ASSERT_FLOAT_WITHIN(3, 0.666, sub(1, 0.3333));
	TEST_ASSERT_FLOAT_WITHIN(3, 10.562, mult(3.25, 3.25));
	TEST_ASSERT_FLOAT_WITHIN(3, 3.333, div(10, 3));	
}


int main(void){
	UNITY_BEGIN();
	
	RUN_TEST(test_add);
	RUN_TEST(test_mult);
	RUN_TEST(test_sub);
	RUN_TEST(test_div);
	RUN_TEST(test_precission);
	
	return UNITY_END();
}