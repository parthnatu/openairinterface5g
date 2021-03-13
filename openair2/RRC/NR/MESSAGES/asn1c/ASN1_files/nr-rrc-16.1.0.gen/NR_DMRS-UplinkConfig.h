/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DMRS_UplinkConfig_H_
#define	_NR_DMRS_UplinkConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DMRS_UplinkConfig__dmrs_Type {
	NR_DMRS_UplinkConfig__dmrs_Type_type2	= 0
} e_NR_DMRS_UplinkConfig__dmrs_Type;
typedef enum NR_DMRS_UplinkConfig__dmrs_AdditionalPosition {
	NR_DMRS_UplinkConfig__dmrs_AdditionalPosition_pos0	= 0,
	NR_DMRS_UplinkConfig__dmrs_AdditionalPosition_pos1	= 1,
	NR_DMRS_UplinkConfig__dmrs_AdditionalPosition_pos3	= 2
} e_NR_DMRS_UplinkConfig__dmrs_AdditionalPosition;
typedef enum NR_DMRS_UplinkConfig__maxLength {
	NR_DMRS_UplinkConfig__maxLength_len2	= 0
} e_NR_DMRS_UplinkConfig__maxLength;
typedef enum NR_DMRS_UplinkConfig__transformPrecodingDisabled__ext1__dmrs_Uplink_r16 {
	NR_DMRS_UplinkConfig__transformPrecodingDisabled__ext1__dmrs_Uplink_r16_enabled	= 0
} e_NR_DMRS_UplinkConfig__transformPrecodingDisabled__ext1__dmrs_Uplink_r16;
typedef enum NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceGroupHopping {
	NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceGroupHopping_disabled	= 0
} e_NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceGroupHopping;
typedef enum NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceHopping {
	NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceHopping_enabled	= 0
} e_NR_DMRS_UplinkConfig__transformPrecodingEnabled__sequenceHopping;

/* Forward declarations */
struct NR_SetupRelease_PTRS_UplinkConfig;
struct NR_SetupRelease_DMRS_UplinkTransformPrecoding_r16;

/* NR_DMRS-UplinkConfig */
typedef struct NR_DMRS_UplinkConfig {
	long	*dmrs_Type;	/* OPTIONAL */
	long	*dmrs_AdditionalPosition;	/* OPTIONAL */
	struct NR_SetupRelease_PTRS_UplinkConfig	*phaseTrackingRS;	/* OPTIONAL */
	long	*maxLength;	/* OPTIONAL */
	struct NR_DMRS_UplinkConfig__transformPrecodingDisabled {
		long	*scramblingID0;	/* OPTIONAL */
		long	*scramblingID1;	/* OPTIONAL */
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NR_DMRS_UplinkConfig__transformPrecodingDisabled__ext1 {
			long	*dmrs_Uplink_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transformPrecodingDisabled;
	struct NR_DMRS_UplinkConfig__transformPrecodingEnabled {
		long	*nPUSCH_Identity;	/* OPTIONAL */
		long	*sequenceGroupHopping;	/* OPTIONAL */
		long	*sequenceHopping;	/* OPTIONAL */
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		struct NR_DMRS_UplinkConfig__transformPrecodingEnabled__ext1 {
			struct NR_SetupRelease_DMRS_UplinkTransformPrecoding_r16	*dmrs_UplinkTransformPrecoding_r16;	/* OPTIONAL */
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *ext1;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *transformPrecodingEnabled;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DMRS_UplinkConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Type_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_AdditionalPosition_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxLength_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_dmrs_Uplink_r16_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sequenceGroupHopping_20;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sequenceHopping_22;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DMRS_UplinkConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DMRS_UplinkConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DMRS_UplinkConfig_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_DMRS_UplinkConfig_H_ */
#include <asn_internal.h>
