/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_ServingCellConfigCommonSIB_H_
#define	_NR_ServingCellConfigCommonSIB_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_DownlinkConfigCommonSIB.h"
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <BIT_STRING.h>
#include <constr_SEQUENCE.h>
#include <NULL.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ServingCellConfigCommonSIB__n_TimingAdvanceOffset {
	NR_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n0	= 0,
	NR_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n25600	= 1,
	NR_ServingCellConfigCommonSIB__n_TimingAdvanceOffset_n39936	= 2
} e_NR_ServingCellConfigCommonSIB__n_TimingAdvanceOffset;
typedef enum NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell {
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms5	= 0,
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms10	= 1,
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms20	= 2,
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms40	= 3,
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms80	= 4,
	NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell_ms160	= 5
} e_NR_ServingCellConfigCommonSIB__ssb_PeriodicityServingCell;
typedef enum NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR {
	NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR_NOTHING,	/* No components present */
	NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR_dynamic,
	NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR_semiStatic
} NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR;
typedef enum NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16 {
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms0dot5	= 0,
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms1	= 1,
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms2	= 2,
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms3	= 3,
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms4	= 4,
	NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16_ms5	= 5
} e_NR_ServingCellConfigCommonSIB__ext1__discoveryBurstWindowLength_r16;

/* Forward declarations */
struct NR_UplinkConfigCommonSIB;
struct NR_TDD_UL_DL_ConfigCommon;
struct NR_HighSpeedConfig_r16;
struct NR_SemiStaticChannelAccessConfig;

/* NR_ServingCellConfigCommonSIB */
typedef struct NR_ServingCellConfigCommonSIB {
	NR_DownlinkConfigCommonSIB_t	 downlinkConfigCommon;
	struct NR_UplinkConfigCommonSIB	*uplinkConfigCommon;	/* OPTIONAL */
	struct NR_UplinkConfigCommonSIB	*supplementaryUplink;	/* OPTIONAL */
	long	*n_TimingAdvanceOffset;	/* OPTIONAL */
	struct NR_ServingCellConfigCommonSIB__ssb_PositionsInBurst {
		BIT_STRING_t	 inOneGroup;
		BIT_STRING_t	*groupPresence;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} ssb_PositionsInBurst;
	long	 ssb_PeriodicityServingCell;
	struct NR_TDD_UL_DL_ConfigCommon	*tdd_UL_DL_ConfigurationCommon;	/* OPTIONAL */
	long	 ss_PBCH_BlockPower;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_ServingCellConfigCommonSIB__ext1 {
		struct NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16 {
			NR_ServingCellConfigCommonSIB__ext1__channelAccessMode_r16_PR present;
			union NR_ServingCellConfigCommonSIB__NR_ext1__NR_channelAccessMode_r16_u {
				NULL_t	 dynamic;
				struct NR_SemiStaticChannelAccessConfig	*semiStatic;
			} choice;
			
			/* Context for parsing across buffer boundaries */
			asn_struct_ctx_t _asn_ctx;
		} *channelAccessMode_r16;
		long	*discoveryBurstWindowLength_r16;	/* OPTIONAL */
		struct NR_HighSpeedConfig_r16	*highSpeedConfig_r16;	/* OPTIONAL */
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ServingCellConfigCommonSIB_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_n_TimingAdvanceOffset_5;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_ssb_PeriodicityServingCell_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_discoveryBurstWindowLength_r16_26;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_ServingCellConfigCommonSIB;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ServingCellConfigCommonSIB_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ServingCellConfigCommonSIB_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_UplinkConfigCommonSIB.h"
#include "NR_TDD-UL-DL-ConfigCommon.h"
#include "NR_HighSpeedConfig-r16.h"
#include "NR_SemiStaticChannelAccessConfig.h"

#endif	/* _NR_ServingCellConfigCommonSIB_H_ */
#include <asn_internal.h>
