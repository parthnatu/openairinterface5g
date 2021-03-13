/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_UE_MRDC_CapabilityAddXDD_Mode_H_
#define	_NR_UE_MRDC_CapabilityAddXDD_Mode_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_MeasAndMobParametersMRDC_XDD_Diff;
struct NR_GeneralParametersMRDC_XDD_Diff;

/* NR_UE-MRDC-CapabilityAddXDD-Mode */
typedef struct NR_UE_MRDC_CapabilityAddXDD_Mode {
	struct NR_MeasAndMobParametersMRDC_XDD_Diff	*measAndMobParametersMRDC_XDD_Diff;	/* OPTIONAL */
	struct NR_GeneralParametersMRDC_XDD_Diff	*generalParametersMRDC_XDD_Diff;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_UE_MRDC_CapabilityAddXDD_Mode_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_UE_MRDC_CapabilityAddXDD_Mode;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_UE_MRDC_CapabilityAddXDD_Mode_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_UE_MRDC_CapabilityAddXDD_Mode_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasAndMobParametersMRDC-XDD-Diff.h"
#include "NR_GeneralParametersMRDC-XDD-Diff.h"

#endif	/* _NR_UE_MRDC_CapabilityAddXDD_Mode_H_ */
#include <asn_internal.h>
