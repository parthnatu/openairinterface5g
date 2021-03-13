/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_BandCombination_H_
#define	_NR_BandCombination_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_FeatureSetCombinationId.h"
#include <BIT_STRING.h>
#include <NativeEnumerated.h>
#include <asn_SEQUENCE_OF.h>
#include <constr_SEQUENCE_OF.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_BandCombination__powerClass_v1530 {
	NR_BandCombination__powerClass_v1530_pc2	= 0
} e_NR_BandCombination__powerClass_v1530;

/* Forward declarations */
struct NR_CA_ParametersEUTRA;
struct NR_CA_ParametersNR;
struct NR_MRDC_Parameters;
struct NR_BandParameters;

/* NR_BandCombination */
typedef struct NR_BandCombination {
	struct NR_BandCombination__bandList {
		A_SEQUENCE_OF(struct NR_BandParameters) list;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} bandList;
	NR_FeatureSetCombinationId_t	 featureSetCombination;
	struct NR_CA_ParametersEUTRA	*ca_ParametersEUTRA;	/* OPTIONAL */
	struct NR_CA_ParametersNR	*ca_ParametersNR;	/* OPTIONAL */
	struct NR_MRDC_Parameters	*mrdc_Parameters;	/* OPTIONAL */
	BIT_STRING_t	*supportedBandwidthCombinationSet;	/* OPTIONAL */
	long	*powerClass_v1530;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_BandCombination_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_powerClass_v1530_9;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_BandCombination;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_BandCombination_1[7];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_CA-ParametersEUTRA.h"
#include "NR_CA-ParametersNR.h"
#include "NR_MRDC-Parameters.h"
#include "NR_BandParameters.h"

#endif	/* _NR_BandCombination_H_ */
#include <asn_internal.h>
