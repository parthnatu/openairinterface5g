/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_ThresholdNR_H_
#define	_NR_ThresholdNR_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RSRP-Range.h"
#include "NR_RSRQ-Range.h"
#include "NR_SINR-Range.h"
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_ThresholdNR */
typedef struct NR_ThresholdNR {
	NR_RSRP_Range_t	*thresholdRSRP;	/* OPTIONAL */
	NR_RSRQ_Range_t	*thresholdRSRQ;	/* OPTIONAL */
	NR_SINR_Range_t	*thresholdSINR;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_ThresholdNR_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_ThresholdNR;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_ThresholdNR_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_ThresholdNR_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ThresholdNR_H_ */
#include <asn_internal.h>
