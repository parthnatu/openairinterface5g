/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_IMS_Parameters_H_
#define	_NR_IMS_Parameters_H_


#include <asn_application.h>

/* Including external dependencies */
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Forward declarations */
struct NR_IMS_ParametersCommon;
struct NR_IMS_ParametersFRX_Diff;

/* NR_IMS-Parameters */
typedef struct NR_IMS_Parameters {
	struct NR_IMS_ParametersCommon	*ims_ParametersCommon;	/* OPTIONAL */
	struct NR_IMS_ParametersFRX_Diff	*ims_ParametersFRX_Diff;	/* OPTIONAL */
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_IMS_Parameters_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_IMS_Parameters;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_IMS_Parameters_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_IMS_Parameters_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_IMS-ParametersCommon.h"
#include "NR_IMS-ParametersFRX-Diff.h"

#endif	/* _NR_IMS_Parameters_H_ */
#include <asn_internal.h>
