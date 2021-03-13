/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_MeasReportQuantity_r16_H_
#define	_NR_SL_MeasReportQuantity_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_MeasReportQuantity_r16_PR {
	NR_SL_MeasReportQuantity_r16_PR_NOTHING,	/* No components present */
	NR_SL_MeasReportQuantity_r16_PR_sl_RSRP_r16
	/* Extensions may appear below */
	
} NR_SL_MeasReportQuantity_r16_PR;

/* NR_SL-MeasReportQuantity-r16 */
typedef struct NR_SL_MeasReportQuantity_r16 {
	NR_SL_MeasReportQuantity_r16_PR present;
	union NR_SL_MeasReportQuantity_r16_u {
		NR_RSRP_Range_t	 sl_RSRP_r16;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
	} choice;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_MeasReportQuantity_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_MeasReportQuantity_r16;
extern asn_CHOICE_specifics_t asn_SPC_NR_SL_MeasReportQuantity_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_MeasReportQuantity_r16_1[1];
extern asn_per_constraints_t asn_PER_type_NR_SL_MeasReportQuantity_r16_constr_1;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_MeasReportQuantity_r16_H_ */
#include <asn_internal.h>
