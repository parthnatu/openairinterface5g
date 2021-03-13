/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UECapabilityInformation_IEs_H_
#define	_NR_UECapabilityInformation_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_UE_CapabilityRAT_ContainerList;

/* NR_UECapabilityInformation-IEs */
typedef struct NR_UECapabilityInformation_IEs {
	struct NR_UE_CapabilityRAT_ContainerList	*ue_CapabilityRAT_ContainerList;	/* OPTIONAL */
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_UECapabilityInformation_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UECapabilityInformation_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UECapabilityInformation_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UECapabilityInformation_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UECapabilityInformation_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UE-CapabilityRAT-ContainerList.h"

#endif	/* _NR_UECapabilityInformation_IEs_H_ */
#include <asn_internal.h>
