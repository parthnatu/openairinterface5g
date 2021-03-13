/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_PH_InfoMCG_H_
#define	_NR_PH_InfoMCG_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_ServCellIndex.h"
#include "NR_PH-UplinkCarrierMCG.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_PH_UplinkCarrierMCG;

/* NR_PH-InfoMCG */
typedef struct NR_PH_InfoMCG {
	NR_ServCellIndex_t	 servCellIndex;
	NR_PH_UplinkCarrierMCG_t	 ph_Uplink;
	struct NR_PH_UplinkCarrierMCG	*ph_SupplementaryUplink;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_PH_InfoMCG_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_PH_InfoMCG;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_PH_InfoMCG_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_PH_InfoMCG_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_PH-UplinkCarrierMCG.h"

#endif	/* _NR_PH_InfoMCG_H_ */
#include <asn_internal.h>
