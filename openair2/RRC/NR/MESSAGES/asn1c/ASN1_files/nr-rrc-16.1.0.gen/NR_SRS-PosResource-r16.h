/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SRS_PosResource_r16_H_
#define	_NR_SRS_PosResource_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SRS-PosResourceId-r16.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>
#include "NR_SRS-PeriodicityAndOffset-r16.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_PosResource_r16__transmissionComb_r16_PR {
	NR_SRS_PosResource_r16__transmissionComb_r16_PR_NOTHING,	/* No components present */
	NR_SRS_PosResource_r16__transmissionComb_r16_PR_n2_r16,
	NR_SRS_PosResource_r16__transmissionComb_r16_PR_n4_r16,
	NR_SRS_PosResource_r16__transmissionComb_r16_PR_n8_r16
	/* Extensions may appear below */
	
} NR_SRS_PosResource_r16__transmissionComb_r16_PR;
typedef enum NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16 {
	NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16_n1	= 0,
	NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16_n2	= 1,
	NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16_n4	= 2,
	NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16_n8	= 3,
	NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16_n12	= 4
} e_NR_SRS_PosResource_r16__resourceMapping_r16__nrofSymbols_r16;
typedef enum NR_SRS_PosResource_r16__groupOrSequenceHopping_r16 {
	NR_SRS_PosResource_r16__groupOrSequenceHopping_r16_neither	= 0,
	NR_SRS_PosResource_r16__groupOrSequenceHopping_r16_groupHopping	= 1,
	NR_SRS_PosResource_r16__groupOrSequenceHopping_r16_sequenceHopping	= 2
} e_NR_SRS_PosResource_r16__groupOrSequenceHopping_r16;
typedef enum NR_SRS_PosResource_r16__resourceType_r16_PR {
	NR_SRS_PosResource_r16__resourceType_r16_PR_NOTHING,	/* No components present */
	NR_SRS_PosResource_r16__resourceType_r16_PR_aperiodic_r16,
	NR_SRS_PosResource_r16__resourceType_r16_PR_semi_persistent_r16,
	NR_SRS_PosResource_r16__resourceType_r16_PR_periodic_r16
} NR_SRS_PosResource_r16__resourceType_r16_PR;

/* Forward declarations */
struct NR_SRS_SpatialRelationInfoPos_r16;

/* NR_SRS-PosResource-r16 */
typedef struct NR_SRS_PosResource_r16 {
	NR_SRS_PosResourceId_r16_t	 srs_PosResourceId_r16;
	struct NR_SRS_PosResource_r16__transmissionComb_r16 {
		NR_SRS_PosResource_r16__transmissionComb_r16_PR present;
		union NR_SRS_PosResource_r16__NR_transmissionComb_r16_u {
			struct NR_SRS_PosResource_r16__transmissionComb_r16__n2_r16 {
				long	 combOffset_n2_r16;
				long	 cyclicShift_n2_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n2_r16;
			struct NR_SRS_PosResource_r16__transmissionComb_r16__n4_r16 {
				long	 combOffset_n4_16;
				long	 cyclicShift_n4_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n4_r16;
			struct NR_SRS_PosResource_r16__transmissionComb_r16__n8_r16 {
				long	 combOffset_n8_r16;
				long	 cyclicShift_n8_r16;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *n8_r16;
			/*
			 * This type is extensible,
			 * possible extensions are below.
			 */
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} transmissionComb_r16;
	struct NR_SRS_PosResource_r16__resourceMapping_r16 {
		long	 startPosition_r16;
		long	 nrofSymbols_r16;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceMapping_r16;
	long	 freqDomainShift_r16;
	struct NR_SRS_PosResource_r16__freqHopping_r16 {
		long	 c_SRS_r16;
		/*
		 * This type is extensible,
		 * possible extensions are below.
		 */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} freqHopping_r16;
	long	 groupOrSequenceHopping_r16;
	struct NR_SRS_PosResource_r16__resourceType_r16 {
		NR_SRS_PosResource_r16__resourceType_r16_PR present;
		union NR_SRS_PosResource_r16__NR_resourceType_r16_u {
			struct NR_SRS_PosResource_r16__resourceType_r16__aperiodic_r16 {
				long	*slotOffset_r16;	/* OPTIONAL */
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *aperiodic_r16;
			struct NR_SRS_PosResource_r16__resourceType_r16__semi_persistent_r16 {
				NR_SRS_PeriodicityAndOffset_r16_t	 periodicityAndOffset_sp_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *semi_persistent_r16;
			struct NR_SRS_PosResource_r16__resourceType_r16__periodic_r16 {
				NR_SRS_PeriodicityAndOffset_r16_t	 periodicityAndOffset_p_r16;
				/*
				 * This type is extensible,
				 * possible extensions are below.
				 */
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *periodic_r16;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} resourceType_r16;
	long	 sequenceId_r16;
	struct NR_SRS_SpatialRelationInfoPos_r16	*spatialRelationInfoPos_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_PosResource_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_nrofSymbols_r16_16;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_groupOrSequenceHopping_r16_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_PosResource_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_PosResource_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_PosResource_r16_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SRS-SpatialRelationInfoPos-r16.h"

#endif	/* _NR_SRS_PosResource_r16_H_ */
#include <asn_internal.h>
