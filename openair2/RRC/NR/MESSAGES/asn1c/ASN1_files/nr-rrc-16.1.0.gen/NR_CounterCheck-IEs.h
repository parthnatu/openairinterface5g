/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CounterCheck_IEs_H_
#define	_NR_CounterCheck_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_DRB-CountMSB-InfoList.h"
#include <OCTET_STRING.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_CounterCheck-IEs */
typedef struct NR_CounterCheck_IEs {
	NR_DRB_CountMSB_InfoList_t	 drb_CountMSB_InfoList;
	OCTET_STRING_t	*lateNonCriticalExtension;	/* OPTIONAL */
	struct NR_CounterCheck_IEs__nonCriticalExtension {
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *nonCriticalExtension;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CounterCheck_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CounterCheck_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CounterCheck_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CounterCheck_IEs_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CounterCheck_IEs_H_ */
#include <asn_internal.h>
