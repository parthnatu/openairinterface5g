/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RRCReconfiguration_v1530_IEs_H_
#define	_NR_RRCReconfiguration_v1530_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include "NR_DedicatedNAS-Message.h"
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCReconfiguration_v1530_IEs__fullConfig {
	NR_RRCReconfiguration_v1530_IEs__fullConfig_true	= 0
} e_NR_RRCReconfiguration_v1530_IEs__fullConfig;

/* Forward declarations */
struct NR_MasterKeyUpdate;
struct NR_OtherConfig;
struct NR_RRCReconfiguration_v1540_IEs;

/* NR_RRCReconfiguration-v1530-IEs */
typedef struct NR_RRCReconfiguration_v1530_IEs {
	OCTET_STRING_t	*masterCellGroup;	/* OPTIONAL */
	long	*fullConfig;	/* OPTIONAL */
	struct NR_RRCReconfiguration_v1530_IEs__dedicatedNAS_MessageList {
		A_SEQUENCE_OF(NR_DedicatedNAS_Message_t) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *dedicatedNAS_MessageList;
	struct NR_MasterKeyUpdate	*masterKeyUpdate;	/* OPTIONAL */
	OCTET_STRING_t	*dedicatedSIB1_Delivery;	/* OPTIONAL */
	OCTET_STRING_t	*dedicatedSystemInformationDelivery;	/* OPTIONAL */
	struct NR_OtherConfig	*otherConfig;	/* OPTIONAL */
	struct NR_RRCReconfiguration_v1540_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCReconfiguration_v1530_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_fullConfig_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCReconfiguration_v1530_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCReconfiguration_v1530_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCReconfiguration_v1530_IEs_1[8];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MasterKeyUpdate.h"
#include "NR_OtherConfig.h"
#include "NR_RRCReconfiguration-v1540-IEs.h"

#endif	/* _NR_RRCReconfiguration_v1530_IEs_H_ */
#include <asn_internal.h>
