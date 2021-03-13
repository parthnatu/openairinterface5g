/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasurementTimingConfiguration_v1550_IEs_H_
#define	_NR_MeasurementTimingConfiguration_v1550_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BOOLEAN.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasurementTimingConfiguration_v1610_IEs;

/* NR_MeasurementTimingConfiguration-v1550-IEs */
typedef struct NR_MeasurementTimingConfiguration_v1550_IEs {
	BOOLEAN_t	 campOnFirstSSB;
	BOOLEAN_t	 psCellOnlyOnFirstSSB;
	struct NR_MeasurementTimingConfiguration_v1610_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasurementTimingConfiguration_v1550_IEs_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasurementTimingConfiguration_v1550_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasurementTimingConfiguration_v1550_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasurementTimingConfiguration_v1550_IEs_1[3];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasurementTimingConfiguration-v1610-IEs.h"

#endif	/* _NR_MeasurementTimingConfiguration_v1550_IEs_H_ */
#include <asn_internal.h>
