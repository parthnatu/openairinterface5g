/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CSI_RS_Resource_Mobility_H_
#define	_NR_CSI_RS_Resource_Mobility_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CSI-RS-Index.h"
#include <NativeInteger.h>
#include <constr_CHOICE.h>
#include "NR_SSB-Index.h"
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CSI_RS_Resource_Mobility__slotConfig_PR {
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_NOTHING,	/* No components present */
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_ms4,
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_ms5,
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_ms10,
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_ms20,
	NR_CSI_RS_Resource_Mobility__slotConfig_PR_ms40
} NR_CSI_RS_Resource_Mobility__slotConfig_PR;
typedef enum NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR {
	NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR_NOTHING,	/* No components present */
	NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR_row1,
	NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR_row2
} NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR;

/* NR_CSI-RS-Resource-Mobility */
typedef struct NR_CSI_RS_Resource_Mobility {
	NR_CSI_RS_Index_t	 csi_RS_Index;
	struct NR_CSI_RS_Resource_Mobility__slotConfig {
		NR_CSI_RS_Resource_Mobility__slotConfig_PR present;
		union NR_CSI_RS_Resource_Mobility__NR_slotConfig_u {
			long	 ms4;
			long	 ms5;
			long	 ms10;
			long	 ms20;
			long	 ms40;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} slotConfig;
	struct NR_CSI_RS_Resource_Mobility__associatedSSB {
		NR_SSB_Index_t	 ssb_Index;
		BOOLEAN_t	 isQuasiColocated;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *associatedSSB;
	struct NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation {
		NR_CSI_RS_Resource_Mobility__frequencyDomainAllocation_PR present;
		union NR_CSI_RS_Resource_Mobility__NR_frequencyDomainAllocation_u {
			BIT_STRING_t	 row1;
			BIT_STRING_t	 row2;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} frequencyDomainAllocation;
	long	 firstOFDMSymbolInTimeDomain;
	long	 sequenceGenerationConfig;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CSI_RS_Resource_Mobility_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CSI_RS_Resource_Mobility;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_RS_Resource_Mobility_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CSI_RS_Resource_Mobility_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CSI_RS_Resource_Mobility_H_ */
#include <asn_internal.h>
