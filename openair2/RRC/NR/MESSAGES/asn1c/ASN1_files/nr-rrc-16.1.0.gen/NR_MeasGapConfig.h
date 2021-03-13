/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasGapConfig_H_
#define	_NR_MeasGapConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SetupRelease_GapConfig;

/* NR_MeasGapConfig */
typedef struct NR_MeasGapConfig {
	struct NR_SetupRelease_GapConfig	*gapFR2;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_MeasGapConfig__ext1 {
		struct NR_SetupRelease_GapConfig	*gapFR1;	/* OPTIONAL */
		struct NR_SetupRelease_GapConfig	*gapUE;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasGapConfig_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasGapConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasGapConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasGapConfig_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_MeasGapConfig_H_ */
#include <asn_internal.h>
