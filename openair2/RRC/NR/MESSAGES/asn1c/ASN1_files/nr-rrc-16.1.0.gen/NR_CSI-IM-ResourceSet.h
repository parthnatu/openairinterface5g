/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CSI_IM_ResourceSet_H_
#define	_NR_CSI_IM_ResourceSet_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CSI-IM-ResourceSetId.h"
#include "NR_CSI-IM-ResourceId.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_CSI-IM-ResourceSet */
typedef struct NR_CSI_IM_ResourceSet {
	NR_CSI_IM_ResourceSetId_t	 csi_IM_ResourceSetId;
	struct NR_CSI_IM_ResourceSet__csi_IM_Resources {
		A_SEQUENCE_OF(NR_CSI_IM_ResourceId_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} csi_IM_Resources;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CSI_IM_ResourceSet_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_CSI_IM_ResourceSet;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CSI_IM_ResourceSet_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CSI_IM_ResourceSet_1[2];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CSI_IM_ResourceSet_H_ */
#include <asn_internal.h>
