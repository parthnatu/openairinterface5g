/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SpeedStateScaleFactors_H_
#define	_NR_SpeedStateScaleFactors_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SpeedStateScaleFactors__sf_Medium {
	NR_SpeedStateScaleFactors__sf_Medium_oDot25	= 0,
	NR_SpeedStateScaleFactors__sf_Medium_oDot5	= 1,
	NR_SpeedStateScaleFactors__sf_Medium_oDot75	= 2,
	NR_SpeedStateScaleFactors__sf_Medium_lDot0	= 3
} e_NR_SpeedStateScaleFactors__sf_Medium;
typedef enum NR_SpeedStateScaleFactors__sf_High {
	NR_SpeedStateScaleFactors__sf_High_oDot25	= 0,
	NR_SpeedStateScaleFactors__sf_High_oDot5	= 1,
	NR_SpeedStateScaleFactors__sf_High_oDot75	= 2,
	NR_SpeedStateScaleFactors__sf_High_lDot0	= 3
} e_NR_SpeedStateScaleFactors__sf_High;

/* NR_SpeedStateScaleFactors */
typedef struct NR_SpeedStateScaleFactors {
	long	 sf_Medium;
	long	 sf_High;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SpeedStateScaleFactors_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sf_Medium_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sf_High_7;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SpeedStateScaleFactors;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SpeedStateScaleFactors_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SpeedStateScaleFactors_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SpeedStateScaleFactors_H_ */
#include <asn_internal.h>
