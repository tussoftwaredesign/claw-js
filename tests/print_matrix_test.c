#include "unity/unity.h"
#include "../include/claw.h"

static struct claw_mat int8_mat;
static struct claw_mat uint8_mat;
static struct claw_mat int16_mat;
static struct claw_mat uint16_mat;
static struct claw_mat int32_mat;
static struct claw_mat uint32_mat;
static struct claw_mat int64_mat;
static struct claw_mat uint64_mat;
static struct claw_mat flt32_mat;
static struct claw_mat flt64_mat;

void setUp()
{
	int64_t val = 2;
	uint64_t uval = 2;
	double fltval = 2.0;
	claw_create_matrix_fill(&int8_mat, 10, 10, CLAW_INT8, &val);
	claw_create_matrix_fill(&uint8_mat, 10, 10, CLAW_UINT8, &uval);
	claw_create_matrix_fill(&int16_mat, 10, 10, CLAW_INT16, &val);
	claw_create_matrix_fill(&uint16_mat, 10, 10, CLAW_UINT16, &uval);
	claw_create_matrix_fill(&int32_mat, 10, 10, CLAW_INT32, &val);
	claw_create_matrix_fill(&uint32_mat, 10, 10, CLAW_UINT32, &uval);
	claw_create_matrix_fill(&int64_mat, 10, 10, CLAW_INT64, &val);
	claw_create_matrix_fill(&uint64_mat, 10, 10, CLAW_UINT64, &uval);
	claw_create_matrix_rand_unit(&flt32_mat, 10, 10, CLAW_FLT32);
	claw_create_matrix_rand_unit(&flt64_mat, 10, 10, CLAW_FLT64);
}

void tearDown()
{
	claw_free(&int8_mat);
	claw_free(&uint8_mat);
	claw_free(&int16_mat);
	claw_free(&uint16_mat);
	claw_free(&int32_mat);
	claw_free(&uint32_mat);
	claw_free(&int64_mat);
	claw_free(&uint64_mat);
	claw_free(&flt32_mat);
	claw_free(&flt64_mat);
}

void print_mat_int8()
{
	claw_print_matrix(stdout, &int8_mat);
}

void print_mat_uint8()
{
	claw_print_matrix(stdout, &uint8_mat);
}

void print_mat_int16()
{
	claw_print_matrix(stdout, &int16_mat);
}

void print_mat_uint16()
{
	claw_print_matrix(stdout, &uint16_mat);
}

void print_mat_int32()
{
	claw_print_matrix(stdout, &int32_mat);
}

void print_mat_uint32()
{
	claw_print_matrix(stdout, &uint32_mat);
}

void print_mat_int64()
{
	claw_print_matrix(stdout, &int64_mat);
}

void print_mat_uint64()
{
	claw_print_matrix(stdout, &uint64_mat);
}

void print_mat_flt32()
{
	claw_print_matrix(stdout, &flt32_mat);
}

void print_mat_flt64()
{
	claw_print_matrix(stdout, &flt64_mat);
}

int main()
{
	UNITY_BEGIN();
	RUN_TEST(print_mat_int8);
	RUN_TEST(print_mat_uint8);
	RUN_TEST(print_mat_int16);
	RUN_TEST(print_mat_uint16);
	RUN_TEST(print_mat_int32);
	RUN_TEST(print_mat_uint32);
	RUN_TEST(print_mat_int64);
	RUN_TEST(print_mat_uint64);
	RUN_TEST(print_mat_flt32);
	RUN_TEST(print_mat_flt64);
	return UNITY_END();
}
