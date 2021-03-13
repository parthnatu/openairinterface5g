/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PLMN_RAN_AreaCell_H_
#define	_NR_PLMN_RAN_AreaCell_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CellIdentity.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PLMN_Identity;

/* NR_PLMN-RAN-AreaCell */
typedef struct NR_PLMN_RAN_AreaCell {
	struct NR_PLMN_Identity	*plmn_Identity;	/* OPTIONAL */
	struct NR_PLMN_RAN_AreaCell__ran_AreaCells {
		A_SEQUENCE_OF(NR_CellIdentity_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ran_AreaCells;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PLMN_RAN_AreaCell_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PLMN_RAN_AreaCell;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PLMN_RAN_AreaCell_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PLMN_RAN_AreaCell_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PLMN-Identity.h"

#endif	/* _NR_PLMN_RAN_AreaCell_H_ */
#include <asn_internal.h>
