/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_FailureInfoRLC_Bearer_H_
#define	_NR_FailureInfoRLC_Bearer_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_CellGroupId.h"
#include "NR_LogicalChannelIdentity.h"
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_FailureInfoRLC_Bearer__failureType {
	NR_FailureInfoRLC_Bearer__failureType_rlc_failure	= 0,
	NR_FailureInfoRLC_Bearer__failureType_spare3	= 1,
	NR_FailureInfoRLC_Bearer__failureType_spare2	= 2,
	NR_FailureInfoRLC_Bearer__failureType_spare1	= 3
} e_NR_FailureInfoRLC_Bearer__failureType;

/* NR_FailureInfoRLC-Bearer */
typedef struct NR_FailureInfoRLC_Bearer {
	NR_CellGroupId_t	 cellGroupId;
	NR_LogicalChannelIdentity_t	 logicalChannelIdentity;
	long	 failureType;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_FailureInfoRLC_Bearer_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_failureType_4;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_FailureInfoRLC_Bearer;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_FailureInfoRLC_Bearer_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_FailureInfoRLC_Bearer_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_FailureInfoRLC_Bearer_H_ */
#include <asn_internal.h>
