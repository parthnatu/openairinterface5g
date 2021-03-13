/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_ConfigRestrictModReqSCG_H_
#define	_NR_ConfigRestrictModReqSCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_P-Max.h"
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_BandCombinationInfoSN;

/* NR_ConfigRestrictModReqSCG */
typedef struct NR_ConfigRestrictModReqSCG {
	struct NR_BandCombinationInfoSN	*requestedBC_MRDC;	/* OPTIONAL */
	NR_P_Max_t	*requestedP_MaxFR1;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_ConfigRestrictModReqSCG__ext1 {
		long	*requestedPDCCH_BlindDetectionSCG;	/* OPTIONAL */
		NR_P_Max_t	*requestedP_MaxEUTRA;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_ConfigRestrictModReqSCG__ext2 {
		NR_P_Max_t	*requestedP_MaxFR2_r16;	/* OPTIONAL */
		long	*requestedMaxInterFreqMeasIdSCG_r16;	/* OPTIONAL */
		long	*requestedMaxIntraFreqMeasIdSCG_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ConfigRestrictModReqSCG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ConfigRestrictModReqSCG;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ConfigRestrictModReqSCG_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ConfigRestrictModReqSCG_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BandCombinationInfoSN.h"

#endif	/* _NR_ConfigRestrictModReqSCG_H_ */
#include <asn_internal.h>
