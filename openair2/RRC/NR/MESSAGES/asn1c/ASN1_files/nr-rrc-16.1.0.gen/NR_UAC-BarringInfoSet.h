/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UAC_BarringInfoSet_H_
#define	_NR_UAC_BarringInfoSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UAC_BarringInfoSet__uac_BarringFactor {
	NR_UAC_BarringInfoSet__uac_BarringFactor_p00	= 0,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p05	= 1,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p10	= 2,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p15	= 3,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p20	= 4,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p25	= 5,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p30	= 6,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p40	= 7,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p50	= 8,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p60	= 9,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p70	= 10,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p75	= 11,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p80	= 12,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p85	= 13,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p90	= 14,
	NR_UAC_BarringInfoSet__uac_BarringFactor_p95	= 15
} e_NR_UAC_BarringInfoSet__uac_BarringFactor;
typedef enum NR_UAC_BarringInfoSet__uac_BarringTime {
	NR_UAC_BarringInfoSet__uac_BarringTime_s4	= 0,
	NR_UAC_BarringInfoSet__uac_BarringTime_s8	= 1,
	NR_UAC_BarringInfoSet__uac_BarringTime_s16	= 2,
	NR_UAC_BarringInfoSet__uac_BarringTime_s32	= 3,
	NR_UAC_BarringInfoSet__uac_BarringTime_s64	= 4,
	NR_UAC_BarringInfoSet__uac_BarringTime_s128	= 5,
	NR_UAC_BarringInfoSet__uac_BarringTime_s256	= 6,
	NR_UAC_BarringInfoSet__uac_BarringTime_s512	= 7
} e_NR_UAC_BarringInfoSet__uac_BarringTime;

/* NR_UAC-BarringInfoSet */
typedef struct NR_UAC_BarringInfoSet {
	long	 uac_BarringFactor;
	long	 uac_BarringTime;
	BIT_STRING_t	 uac_BarringForAccessIdentity;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UAC_BarringInfoSet_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uac_BarringFactor_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_uac_BarringTime_19;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UAC_BarringInfoSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UAC_BarringInfoSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UAC_BarringInfoSet_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_UAC_BarringInfoSet_H_ */
#include <asn_internal.h>
