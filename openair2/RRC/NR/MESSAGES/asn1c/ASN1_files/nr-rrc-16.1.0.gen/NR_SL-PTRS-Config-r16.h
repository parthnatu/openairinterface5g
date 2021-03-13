/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_PTRS_Config_r16_H_
#define	_NR_SL_PTRS_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SL_PTRS_Config_r16__sl_PTRS_RE_Offset_r16 {
	NR_SL_PTRS_Config_r16__sl_PTRS_RE_Offset_r16_offset01	= 0,
	NR_SL_PTRS_Config_r16__sl_PTRS_RE_Offset_r16_offset10	= 1,
	NR_SL_PTRS_Config_r16__sl_PTRS_RE_Offset_r16_offset11	= 2
} e_NR_SL_PTRS_Config_r16__sl_PTRS_RE_Offset_r16;

/* NR_SL-PTRS-Config-r16 */
typedef struct NR_SL_PTRS_Config_r16 {
	struct NR_SL_PTRS_Config_r16__sl_PTRS_FreqDensity_r16 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_PTRS_FreqDensity_r16;
	struct NR_SL_PTRS_Config_r16__sl_PTRS_TimeDensity_r16 {
		A_SEQUENCE_OF(long) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *sl_PTRS_TimeDensity_r16;
	long	*sl_PTRS_RE_Offset_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_PTRS_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sl_PTRS_RE_Offset_r16_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_PTRS_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_PTRS_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_PTRS_Config_r16_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SL_PTRS_Config_r16_H_ */
#include <asn_internal.h>
