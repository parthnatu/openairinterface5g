/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DCP_Config_r16_H_
#define	_NR_DCP_Config_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RNTI-Value.h"
#include <NativeInteger.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DCP_Config_r16__ps_WakeUp_r16 {
	NR_DCP_Config_r16__ps_WakeUp_r16_true	= 0
} e_NR_DCP_Config_r16__ps_WakeUp_r16;
typedef enum NR_DCP_Config_r16__ps_TransmitPeriodicL1_RSRP_r16 {
	NR_DCP_Config_r16__ps_TransmitPeriodicL1_RSRP_r16_true	= 0
} e_NR_DCP_Config_r16__ps_TransmitPeriodicL1_RSRP_r16;
typedef enum NR_DCP_Config_r16__ps_TransmitOtherPeriodicCSI_r16 {
	NR_DCP_Config_r16__ps_TransmitOtherPeriodicCSI_r16_true	= 0
} e_NR_DCP_Config_r16__ps_TransmitOtherPeriodicCSI_r16;

/* NR_DCP-Config-r16 */
typedef struct NR_DCP_Config_r16 {
	NR_RNTI_Value_t	 ps_RNTI_r16;
	long	 ps_Offset_r16;
	long	 sizeDCI_2_6_r16;
	long	 ps_PositionDCI_2_6_r16;
	long	*ps_WakeUp_r16;	/* OPTIONAL */
	long	*ps_TransmitPeriodicL1_RSRP_r16;	/* OPTIONAL */
	long	*ps_TransmitOtherPeriodicCSI_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DCP_Config_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ps_WakeUp_r16_6;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ps_TransmitPeriodicL1_RSRP_r16_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ps_TransmitOtherPeriodicCSI_r16_10;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DCP_Config_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DCP_Config_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DCP_Config_r16_1[7];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DCP_Config_r16_H_ */
#include <asn_internal.h>
