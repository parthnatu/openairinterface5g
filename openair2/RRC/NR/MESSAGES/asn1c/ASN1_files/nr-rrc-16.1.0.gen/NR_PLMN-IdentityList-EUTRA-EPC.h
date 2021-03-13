/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PLMN_IdentityList_EUTRA_EPC_H_
#define	_NR_PLMN_IdentityList_EUTRA_EPC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PLMN_Identity;

/* NR_PLMN-IdentityList-EUTRA-EPC */
typedef struct NR_PLMN_IdentityList_EUTRA_EPC {
	A_SEQUENCE_OF(struct NR_PLMN_Identity) list;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PLMN_IdentityList_EUTRA_EPC_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PLMN_IdentityList_EUTRA_EPC;
extern asn_SET_OF_specifics_t asn_SPC_NR_PLMN_IdentityList_EUTRA_EPC_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PLMN_IdentityList_EUTRA_EPC_1[1];
extern asn_per_constraints_t asn_PER_type_NR_PLMN_IdentityList_EUTRA_EPC_constr_1;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PLMN-Identity.h"

#endif	/* _NR_PLMN_IdentityList_EUTRA_EPC_H_ */
#include <asn_internal.h>
