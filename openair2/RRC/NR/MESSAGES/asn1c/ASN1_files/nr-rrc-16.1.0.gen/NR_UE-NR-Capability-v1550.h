/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UE_NR_Capability_v1550_H_
#define	_NR_UE_NR_Capability_v1550_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_UE_NR_Capability_v1550__reducedCP_Latency {
	NR_UE_NR_Capability_v1550__reducedCP_Latency_supported	= 0
} e_NR_UE_NR_Capability_v1550__reducedCP_Latency;

/* Forward declarations */
struct NR_UE_NR_Capability_v1560;

/* NR_UE-NR-Capability-v1550 */
typedef struct NR_UE_NR_Capability_v1550 {
	long	*reducedCP_Latency;	/* OPTIONAL */
	struct NR_UE_NR_Capability_v1560	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_NR_Capability_v1550_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reducedCP_Latency_2;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_NR_Capability_v1550;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_NR_Capability_v1550_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_NR_Capability_v1550_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UE-NR-Capability-v1560.h"

#endif	/* _NR_UE_NR_Capability_v1550_H_ */
#include <asn_internal.h>
