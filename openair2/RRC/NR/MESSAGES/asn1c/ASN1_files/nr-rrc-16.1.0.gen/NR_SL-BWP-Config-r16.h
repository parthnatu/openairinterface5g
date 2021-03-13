/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SL_BWP_Config_r16_H_
#define	_NR_SL_BWP_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BWP-Id.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SL_BWP_Generic_r16;
struct NR_SL_BWP_PoolConfig_r16;

/* NR_SL-BWP-Config-r16 */
typedef struct NR_SL_BWP_Config_r16 {
	NR_BWP_Id_t	 sl_BWP_Id;
	struct NR_SL_BWP_Generic_r16	*sl_BWP_Generic_r16;	/* OPTIONAL */
	struct NR_SL_BWP_PoolConfig_r16	*sl_BWP_PoolConfig_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SL_BWP_Config_r16_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_SL_BWP_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SL_BWP_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SL_BWP_Config_r16_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SL-BWP-Generic-r16.h"
#include "NR_SL-BWP-PoolConfig-r16.h"

#endif	/* _NR_SL_BWP_Config_r16_H_ */
#include <asn_internal.h>
