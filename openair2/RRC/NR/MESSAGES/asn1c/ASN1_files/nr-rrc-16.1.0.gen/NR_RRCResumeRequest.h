/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RRCResumeRequest_H_
#define	_NR_RRCResumeRequest_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RRCResumeRequest-IEs.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RRCResumeRequest */
typedef struct NR_RRCResumeRequest {
	NR_RRCResumeRequest_IEs_t	 rrcResumeRequest;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCResumeRequest_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCResumeRequest;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCResumeRequest_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCResumeRequest_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RRCResumeRequest_H_ */
#include <asn_internal.h>
