/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BH_RLC_ChannelConfig_r16_H_
#define	_NR_BH_RLC_ChannelConfig_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BH-RLC-ChannelID-r16.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BH_RLC_ChannelConfig_r16__reestablishRLC_r16 {
	NR_BH_RLC_ChannelConfig_r16__reestablishRLC_r16_true	= 0
} e_NR_BH_RLC_ChannelConfig_r16__reestablishRLC_r16;

/* Forward declarations */
struct NR_BH_LogicalChannelIdentity_r16;
struct NR_RLC_Config;
struct NR_LogicalChannelConfig;

/* NR_BH-RLC-ChannelConfig-r16 */
typedef struct NR_BH_RLC_ChannelConfig_r16 {
	struct NR_BH_LogicalChannelIdentity_r16	*bh_LogicalChannelIdentity_r16;	/* OPTIONAL */
	NR_BH_RLC_ChannelID_r16_t	 bh_RLC_ChannelID_r16;
	long	*reestablishRLC_r16;	/* OPTIONAL */
	struct NR_RLC_Config	*rlc_Config_r16;	/* OPTIONAL */
	struct NR_LogicalChannelConfig	*mac_LogicalChannelConfig_r16;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BH_RLC_ChannelConfig_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_reestablishRLC_r16_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BH_RLC_ChannelConfig_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BH_RLC_ChannelConfig_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BH_RLC_ChannelConfig_r16_1[5];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_BH-LogicalChannelIdentity-r16.h"
#include "NR_RLC-Config.h"
#include "NR_LogicalChannelConfig.h"

#endif	/* _NR_BH_RLC_ChannelConfig_r16_H_ */
#include <asn_internal.h>
