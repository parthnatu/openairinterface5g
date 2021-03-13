/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UECapabilityEnquiry_v1560_IEs_H_
#define	_NR_UECapabilityEnquiry_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_UE_CapabilityRequestFilterCommon;
struct NR_UECapabilityEnquiry_v1610_IEs;

/* NR_UECapabilityEnquiry-v1560-IEs */
typedef struct NR_UECapabilityEnquiry_v1560_IEs {
	struct NR_UE_CapabilityRequestFilterCommon	*capabilityRequestFilterCommon;	/* OPTIONAL */
	struct NR_UECapabilityEnquiry_v1610_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UECapabilityEnquiry_v1560_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UECapabilityEnquiry_v1560_IEs;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UE-CapabilityRequestFilterCommon.h"
#include "NR_UECapabilityEnquiry-v1610-IEs.h"

#endif	/* _NR_UECapabilityEnquiry_v1560_IEs_H_ */
#include <asn_internal.h>
