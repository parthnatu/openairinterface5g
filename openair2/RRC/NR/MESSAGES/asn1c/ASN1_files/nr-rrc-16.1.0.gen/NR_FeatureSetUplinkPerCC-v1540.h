/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_FeatureSetUplinkPerCC_v1540_H_
#define	_NR_FeatureSetUplinkPerCC_v1540_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_FeatureSetUplinkPerCC-v1540 */
typedef struct NR_FeatureSetUplinkPerCC_v1540 {
	struct NR_FeatureSetUplinkPerCC_v1540__mimo_NonCB_PUSCH {
		long	 maxNumberSRS_ResourcePerSet;
		long	 maxNumberSimultaneousSRS_ResourceTx;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *mimo_NonCB_PUSCH;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FeatureSetUplinkPerCC_v1540_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_FeatureSetUplinkPerCC_v1540;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FeatureSetUplinkPerCC_v1540_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FeatureSetUplinkPerCC_v1540_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FeatureSetUplinkPerCC_v1540_H_ */
#include <asn_internal.h>
