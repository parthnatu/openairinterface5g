/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_InterFreqCarrierFreqInfo_v1610_H_
#define	_NR_InterFreqCarrierFreqInfo_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SSB-PositionQCL-Relation-r16.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_InterFreqNeighCellList_v1610;
struct NR_SSB_MTC2_LP_r16;
struct NR_InterFreqWhiteCellList_r16;
struct NR_InterFreqCAG_CellList_r16;

/* NR_InterFreqCarrierFreqInfo-v1610 */
typedef struct NR_InterFreqCarrierFreqInfo_v1610 {
	struct NR_InterFreqNeighCellList_v1610	*interFreqNeighCellList_v1610;	/* OPTIONAL */
	struct NR_SSB_MTC2_LP_r16	*smtc2_LP_r16;	/* OPTIONAL */
	struct NR_InterFreqWhiteCellList_r16	*interFreqWhiteCellList_r16;	/* OPTIONAL */
	NR_SSB_PositionQCL_Relation_r16_t	*ssb_PositionQCL_Common_r16;	/* OPTIONAL */
	struct NR_InterFreqCarrierFreqInfo_v1610__interFreqCAG_CellList_r16 {
		A_SEQUENCE_OF(struct NR_InterFreqCAG_CellList_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *interFreqCAG_CellList_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_InterFreqCarrierFreqInfo_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_InterFreqCarrierFreqInfo_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_InterFreqCarrierFreqInfo_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_InterFreqCarrierFreqInfo_v1610_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_InterFreqNeighCellList-v1610.h"
#include "NR_SSB-MTC2-LP-r16.h"
#include "NR_InterFreqWhiteCellList-r16.h"
#include "NR_InterFreqCAG-CellList-r16.h"

#endif	/* _NR_InterFreqCarrierFreqInfo_v1610_H_ */
#include <asn_internal.h>
