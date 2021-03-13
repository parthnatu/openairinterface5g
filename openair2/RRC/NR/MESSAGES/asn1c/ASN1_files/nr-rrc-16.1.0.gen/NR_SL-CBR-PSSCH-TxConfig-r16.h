/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_CBR_PSSCH_TxConfig_r16_H_
#define	_NR_SL_CBR_PSSCH_TxConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SL_PSSCH_TxParameters_r16;

/* NR_SL-CBR-PSSCH-TxConfig-r16 */
typedef struct NR_SL_CBR_PSSCH_TxConfig_r16 {
	long	*sl_CR_Limit_r16;	/* OPTIONAL */
	struct NR_SL_PSSCH_TxParameters_r16	*sl_TxParameters_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_CBR_PSSCH_TxConfig_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_CBR_PSSCH_TxConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_CBR_PSSCH_TxConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_CBR_PSSCH_TxConfig_r16_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-PSSCH-TxParameters-r16.h"

#endif	/* _NR_SL_CBR_PSSCH_TxConfig_r16_H_ */
#include <asn_internal.h>
