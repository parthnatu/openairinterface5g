/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RRCSetupComplete_v1610_IEs_H_
#define	_NR_RRCSetupComplete_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCSetupComplete_v1610_IEs__iab_NodeIndication_r16 {
	NR_RRCSetupComplete_v1610_IEs__iab_NodeIndication_r16_true	= 0
} e_NR_RRCSetupComplete_v1610_IEs__iab_NodeIndication_r16;
typedef enum NR_RRCSetupComplete_v1610_IEs__idleMeasAvailable_r16 {
	NR_RRCSetupComplete_v1610_IEs__idleMeasAvailable_r16_true	= 0
} e_NR_RRCSetupComplete_v1610_IEs__idleMeasAvailable_r16;
typedef enum NR_RRCSetupComplete_v1610_IEs__mobilityHistoryAvail_r16 {
	NR_RRCSetupComplete_v1610_IEs__mobilityHistoryAvail_r16_true	= 0
} e_NR_RRCSetupComplete_v1610_IEs__mobilityHistoryAvail_r16;
typedef enum NR_RRCSetupComplete_v1610_IEs__mobilityState_r16 {
	NR_RRCSetupComplete_v1610_IEs__mobilityState_r16_normal	= 0,
	NR_RRCSetupComplete_v1610_IEs__mobilityState_r16_medium	= 1,
	NR_RRCSetupComplete_v1610_IEs__mobilityState_r16_high	= 2,
	NR_RRCSetupComplete_v1610_IEs__mobilityState_r16_spare	= 3
} e_NR_RRCSetupComplete_v1610_IEs__mobilityState_r16;

/* Forward declarations */
struct NR_UEMeasurementsAvailable_r16;

/* NR_RRCSetupComplete-v1610-IEs */
typedef struct NR_RRCSetupComplete_v1610_IEs {
	long	*iab_NodeIndication_r16;	/* OPTIONAL */
	long	*idleMeasAvailable_r16;	/* OPTIONAL */
	struct NR_UEMeasurementsAvailable_r16	*ueMeasurementsAvailable_r16;	/* OPTIONAL */
	long	*mobilityHistoryAvail_r16;	/* OPTIONAL */
	long	*mobilityState_r16;	/* OPTIONAL */
	struct NR_RRCSetupComplete_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCSetupComplete_v1610_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_iab_NodeIndication_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_idleMeasAvailable_r16_4;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mobilityHistoryAvail_r16_7;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_mobilityState_r16_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCSetupComplete_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCSetupComplete_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCSetupComplete_v1610_IEs_1[6];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UEMeasurementsAvailable-r16.h"

#endif	/* _NR_RRCSetupComplete_v1610_IEs_H_ */
#include <asn_internal.h>
