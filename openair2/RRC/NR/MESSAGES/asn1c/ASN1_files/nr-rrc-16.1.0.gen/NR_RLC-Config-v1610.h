/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RLC_Config_v1610_H_
#define	_NR_RLC_Config_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_DL-AM-RLC-v1610.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_RLC-Config-v1610 */
typedef struct NR_RLC_Config_v1610 {
	NR_DL_AM_RLC_v1610_t	 dl_AM_RLC_v1610;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RLC_Config_v1610_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RLC_Config_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RLC_Config_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RLC_Config_v1610_1[1];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RLC_Config_v1610_H_ */
#include <asn_internal.h>
