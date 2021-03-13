/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_FailureInformation_v1610_IEs_H_
#define	_NR_FailureInformation_v1610_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_FailureInfoDAPS_r16;

/* NR_FailureInformation-v1610-IEs */
typedef struct NR_FailureInformation_v1610_IEs {
	struct NR_FailureInfoDAPS_r16	*failureInfoDAPS_r16;	/* OPTIONAL */
	struct NR_FailureInformation_v1610_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FailureInformation_v1610_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_FailureInformation_v1610_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FailureInformation_v1610_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FailureInformation_v1610_IEs_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_FailureInfoDAPS-r16.h"

#endif	/* _NR_FailureInformation_v1610_IEs_H_ */
#include <asn_internal.h>
