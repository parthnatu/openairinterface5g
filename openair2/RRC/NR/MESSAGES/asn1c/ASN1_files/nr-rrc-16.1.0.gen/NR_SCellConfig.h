/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SCellConfig_H_
#define	_NR_SCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SCellIndex.h"
#include <constr_SEQUENCE.h>
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SCellConfig__ext2__sCellState_r16 {
	NR_SCellConfig__ext2__sCellState_r16_activated	= 0
} e_NR_SCellConfig__ext2__sCellState_r16;
typedef enum NR_SCellConfig__ext2__secondaryDRX_GroupConfig_r16 {
	NR_SCellConfig__ext2__secondaryDRX_GroupConfig_r16_true	= 0
} e_NR_SCellConfig__ext2__secondaryDRX_GroupConfig_r16;

/* Forward declarations */
struct NR_ServingCellConfigCommon;
struct NR_ServingCellConfig;
struct NR_SSB_MTC;

/* NR_SCellConfig */
typedef struct NR_SCellConfig {
	NR_SCellIndex_t	 sCellIndex;
	struct NR_ServingCellConfigCommon	*sCellConfigCommon;	/* OPTIONAL */
	struct NR_ServingCellConfig	*sCellConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_SCellConfig__ext1 {
		struct NR_SSB_MTC	*smtc;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	struct NR_SCellConfig__ext2 {
		long	*sCellState_r16;	/* OPTIONAL */
		long	*secondaryDRX_GroupConfig_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext2;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sCellState_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_secondaryDRX_GroupConfig_r16_11;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SCellConfig_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ServingCellConfigCommon.h"
#include "NR_ServingCellConfig.h"
#include "NR_SSB-MTC.h"

#endif	/* _NR_SCellConfig_H_ */
#include <asn_internal.h>
