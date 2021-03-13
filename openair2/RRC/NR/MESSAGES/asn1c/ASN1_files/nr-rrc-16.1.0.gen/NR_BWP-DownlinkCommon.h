/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BWP_DownlinkCommon_H_
#define	_NR_BWP_DownlinkCommon_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_BWP.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_SetupRelease_PDCCH_ConfigCommon;
struct NR_SetupRelease_PDSCH_ConfigCommon;

/* NR_BWP-DownlinkCommon */
typedef struct NR_BWP_DownlinkCommon {
	NR_BWP_t	 genericParameters;
	struct NR_SetupRelease_PDCCH_ConfigCommon	*pdcch_ConfigCommon;	/* OPTIONAL */
	struct NR_SetupRelease_PDSCH_ConfigCommon	*pdsch_ConfigCommon;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BWP_DownlinkCommon_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_BWP_DownlinkCommon;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_DownlinkCommon_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BWP_DownlinkCommon_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_SetupRelease.h"

#endif	/* _NR_BWP_DownlinkCommon_H_ */
#include <asn_internal.h>
