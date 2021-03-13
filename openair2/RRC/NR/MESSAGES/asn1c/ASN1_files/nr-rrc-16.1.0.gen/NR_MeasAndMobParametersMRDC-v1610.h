/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasAndMobParametersMRDC_v1610_H_
#define	_NR_MeasAndMobParametersMRDC_v1610_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasAndMobParametersMRDC_v1610__interNR_MeasEUTRA_IAB_r16 {
	NR_MeasAndMobParametersMRDC_v1610__interNR_MeasEUTRA_IAB_r16_supported	= 0
} e_NR_MeasAndMobParametersMRDC_v1610__interNR_MeasEUTRA_IAB_r16;

/* Forward declarations */
struct NR_MeasAndMobParametersMRDC_Common_v1610;
struct NR_MeasAndMobParametersMRDC_XDD_Diff_v1610;
struct NR_MeasAndMobParametersMRDC_FRX_Diff_v1610;

/* NR_MeasAndMobParametersMRDC-v1610 */
typedef struct NR_MeasAndMobParametersMRDC_v1610 {
	struct NR_MeasAndMobParametersMRDC_Common_v1610	*measAndMobParametersMRDC_Common_v1610;	/* OPTIONAL */
	struct NR_MeasAndMobParametersMRDC_XDD_Diff_v1610	*measAndMobParametersMRDC_XDD_Diff_v1610;	/* OPTIONAL */
	struct NR_MeasAndMobParametersMRDC_FRX_Diff_v1610	*measAndMobParametersMRDC_FRX_Diff_v1610;	/* OPTIONAL */
	long	*interNR_MeasEUTRA_IAB_r16;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasAndMobParametersMRDC_v1610_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_interNR_MeasEUTRA_IAB_r16_5;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasAndMobParametersMRDC_v1610;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_MeasAndMobParametersMRDC_v1610_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_MeasAndMobParametersMRDC_v1610_1[4];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasAndMobParametersMRDC-Common-v1610.h"
#include "NR_MeasAndMobParametersMRDC-XDD-Diff-v1610.h"
#include "NR_MeasAndMobParametersMRDC-FRX-Diff-v1610.h"

#endif	/* _NR_MeasAndMobParametersMRDC_v1610_H_ */
#include <asn_internal.h>
