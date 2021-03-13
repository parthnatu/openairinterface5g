/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BeamFailureRecoverySCellConfig_r16_H_
#define	_NR_BeamFailureRecoverySCellConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_CandidateBeamRS_r16;

/* NR_BeamFailureRecoverySCellConfig-r16 */
typedef struct NR_BeamFailureRecoverySCellConfig_r16 {
	NR_RSRP_Range_t	*rsrp_ThresholdBFR_r16;	/* OPTIONAL */
	struct NR_BeamFailureRecoverySCellConfig_r16__candidateBeamRSSCellList_r16 {
		A_SEQUENCE_OF(struct NR_CandidateBeamRS_r16) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *candidateBeamRSSCellList_r16;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BeamFailureRecoverySCellConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BeamFailureRecoverySCellConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BeamFailureRecoverySCellConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BeamFailureRecoverySCellConfig_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CandidateBeamRS-r16.h"

#endif	/* _NR_BeamFailureRecoverySCellConfig_r16_H_ */
#include <asn_internal.h>
