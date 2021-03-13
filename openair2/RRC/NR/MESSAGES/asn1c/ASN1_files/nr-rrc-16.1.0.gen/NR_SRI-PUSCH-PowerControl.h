/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SRI_PUSCH_PowerControl_H_
#define	_NR_SRI_PUSCH_PowerControl_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_SRI-PUSCH-PowerControlId.h"
#include "NR_PUSCH-PathlossReferenceRS-Id.h"
#include "NR_P0-PUSCH-AlphaSetId.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRI_PUSCH_PowerControl__sri_PUSCH_ClosedLoopIndex {
	NR_SRI_PUSCH_PowerControl__sri_PUSCH_ClosedLoopIndex_i0	= 0,
	NR_SRI_PUSCH_PowerControl__sri_PUSCH_ClosedLoopIndex_i1	= 1
} e_NR_SRI_PUSCH_PowerControl__sri_PUSCH_ClosedLoopIndex;

/* NR_SRI-PUSCH-PowerControl */
typedef struct NR_SRI_PUSCH_PowerControl {
	NR_SRI_PUSCH_PowerControlId_t	 sri_PUSCH_PowerControlId;
	NR_PUSCH_PathlossReferenceRS_Id_t	 sri_PUSCH_PathlossReferenceRS_Id;
	NR_P0_PUSCH_AlphaSetId_t	 sri_P0_PUSCH_AlphaSetId;
	long	 sri_PUSCH_ClosedLoopIndex;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRI_PUSCH_PowerControl_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_sri_PUSCH_ClosedLoopIndex_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRI_PUSCH_PowerControl;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRI_PUSCH_PowerControl_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRI_PUSCH_PowerControl_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SRI_PUSCH_PowerControl_H_ */
#include <asn_internal.h>
