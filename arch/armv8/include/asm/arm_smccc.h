// © 2021 Qualcomm Innovation Center, Inc. All rights reserved.
//
// SPDX-License-Identifier: BSD-3-Clause

#define SMCCC_USE_SMC
//#define SMCCC_USE_HVC

#define SMCCC_FAST_CALL_SHIFT  31
#define SMCCC_64BIT_CALL_SHIFT 30
#define SMCCC_SERVICE_SHIFT    24
#define SMCCC_FUNCTION_SHIFT   0

#define SMCCC_SERVICE_ARM	      0
#define SMCCC_SERVICE_CPU	      1
#define SMCCC_SERVICE_SIP	      2
#define SMCCC_SERVICE_OEM	      3
#define SMCCC_SERVICE_STANDARD_SECURE 4
#define SMCCC_SERVICE_STANDARD_HYP    5
#define SMCCC_SERVICE_VENDOR_HYP      6

#define SMCCC_FUNCTION_ID(fast, call64, service_call, function)                \
	(((uint64_t)((fast) != 0) << SMCCC_FAST_CALL_SHIFT) |                  \
	 ((uint64_t)((call64) != 0) << SMCCC_64BIT_CALL_SHIFT) |               \
	 ((service_call) << SMCCC_SERVICE_SHIFT) |                             \
	 ((function) << SMCCC_FUNCTION_SHIFT))

uint64_t
arm_smccc11_call(uint64_t func_id, uint64_t param[7], uint64_t result[4]);

uint64_t
arm_smccc12_call(uint64_t func_id, uint64_t param[17], uint64_t result[18]);
