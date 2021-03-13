/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_InterFreqCAG_CellList_r16_H_
#define	_NR_InterFreqCAG_CellList_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PCI_Range;

/* NR_InterFreqCAG-CellList-r16 */
typedef struct NR_InterFreqCAG_CellList_r16 {
	long	 plmn_IdentityIndex_r16;
	struct NR_InterFreqCAG_CellList_r16__cag_CellList_r16 {
		A_SEQUENCE_OF(struct NR_PCI_Range) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} cag_CellList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_InterFreqCAG_CellList_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_InterFreqCAG_CellList_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_InterFreqCAG_CellList_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_InterFreqCAG_CellList_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PCI-Range.h"

#endif	/* _NR_InterFreqCAG_CellList_r16_H_ */
#include <asn_internal.h>
