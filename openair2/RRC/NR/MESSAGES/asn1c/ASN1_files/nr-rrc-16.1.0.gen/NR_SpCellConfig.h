/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SpCellConfig_H_
#define	_NR_SpCellConfig_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ServCellIndex.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SpCellConfig__rlmInSyncOutOfSyncThreshold {
	NR_SpCellConfig__rlmInSyncOutOfSyncThreshold_n1	= 0
} e_NR_SpCellConfig__rlmInSyncOutOfSyncThreshold;

/* Forward declarations */
struct NR_ReconfigurationWithSync;
struct NR_SetupRelease_RLF_TimersAndConstants;
struct NR_ServingCellConfig;

/* NR_SpCellConfig */
typedef struct NR_SpCellConfig {
	NR_ServCellIndex_t	*servCellIndex;	/* OPTIONAL */
	struct NR_ReconfigurationWithSync	*reconfigurationWithSync;	/* OPTIONAL */
	struct NR_SetupRelease_RLF_TimersAndConstants	*rlf_TimersAndConstants;	/* OPTIONAL */
	long	*rlmInSyncOutOfSyncThreshold;	/* OPTIONAL */
	struct NR_ServingCellConfig	*spCellConfigDedicated;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SpCellConfig_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_rlmInSyncOutOfSyncThreshold_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SpCellConfig;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SpCellConfig_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SpCellConfig_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_ReconfigurationWithSync.h"
#include "NR_SetupRelease.h"
#include "NR_ServingCellConfig.h"

#endif	/* _NR_SpCellConfig_H_ */
#include <asn_internal.h>
