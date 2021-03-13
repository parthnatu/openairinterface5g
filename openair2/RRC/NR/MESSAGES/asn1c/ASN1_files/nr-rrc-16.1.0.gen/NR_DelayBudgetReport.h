/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DelayBudgetReport_H_
#define	_NR_DelayBudgetReport_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DelayBudgetReport_PR {
	NR_DelayBudgetReport_PR_NOTHING,	/* No components present */
	NR_DelayBudgetReport_PR_type1
	/* Extensions may appear below */
	
} NR_DelayBudgetReport_PR;
typedef enum NR_DelayBudgetReport__type1 {
	NR_DelayBudgetReport__type1_msMinus1280	= 0,
	NR_DelayBudgetReport__type1_msMinus640	= 1,
	NR_DelayBudgetReport__type1_msMinus320	= 2,
	NR_DelayBudgetReport__type1_msMinus160	= 3,
	NR_DelayBudgetReport__type1_msMinus80	= 4,
	NR_DelayBudgetReport__type1_msMinus60	= 5,
	NR_DelayBudgetReport__type1_msMinus40	= 6,
	NR_DelayBudgetReport__type1_msMinus20	= 7,
	NR_DelayBudgetReport__type1_ms0	= 8,
	NR_DelayBudgetReport__type1_ms20	= 9,
	NR_DelayBudgetReport__type1_ms40	= 10,
	NR_DelayBudgetReport__type1_ms60	= 11,
	NR_DelayBudgetReport__type1_ms80	= 12,
	NR_DelayBudgetReport__type1_ms160	= 13,
	NR_DelayBudgetReport__type1_ms320	= 14,
	NR_DelayBudgetReport__type1_ms640	= 15,
	NR_DelayBudgetReport__type1_ms1280	= 16
} e_NR_DelayBudgetReport__type1;

/* NR_DelayBudgetReport */
typedef struct NR_DelayBudgetReport {
	NR_DelayBudgetReport_PR present;
	union NR_DelayBudgetReport_u {
		long	 type1;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DelayBudgetReport_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_type1_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DelayBudgetReport;
extern asn_CHOICE_specifics_t asn_SPC_NR_DelayBudgetReport_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DelayBudgetReport_1[1];
extern asn_per_constraints_t asn_PER_type_NR_DelayBudgetReport_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DelayBudgetReport_H_ */
#include <asn_internal.h>
