/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UE_NR_Capability_v1570_H_
#define	_NR_UE_NR_Capability_v1570_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_NRDC_Parameters_v1570;
struct NR_UE_NR_Capability_v1610;

/* NR_UE-NR-Capability-v1570 */
typedef struct NR_UE_NR_Capability_v1570 {
	struct NR_NRDC_Parameters_v1570	*nrdc_Parameters_v1570;	/* OPTIONAL */
	struct NR_UE_NR_Capability_v1610	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_NR_Capability_v1570_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_NR_Capability_v1570;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_NR_Capability_v1570_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_NR_Capability_v1570_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_NRDC-Parameters-v1570.h"
#include "NR_UE-NR-Capability-v1610.h"

#endif	/* _NR_UE_NR_Capability_v1570_H_ */
#include <asn_internal.h>
