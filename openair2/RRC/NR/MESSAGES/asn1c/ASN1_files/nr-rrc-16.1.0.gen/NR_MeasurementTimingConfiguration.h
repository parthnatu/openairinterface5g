/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_MeasurementTimingConfiguration_H_
#define	_NR_MeasurementTimingConfiguration_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NULL.h>
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_MeasurementTimingConfiguration__criticalExtensions_PR {
	NR_MeasurementTimingConfiguration__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_MeasurementTimingConfiguration__criticalExtensions_PR_c1,
	NR_MeasurementTimingConfiguration__criticalExtensions_PR_criticalExtensionsFuture
} NR_MeasurementTimingConfiguration__criticalExtensions_PR;
typedef enum NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR {
	NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR_NOTHING,	/* No components present */
	NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR_measTimingConf,
	NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare3,
	NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare2,
	NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR_spare1
} NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR;

/* Forward declarations */
struct NR_MeasurementTimingConfiguration_IEs;

/* NR_MeasurementTimingConfiguration */
typedef struct NR_MeasurementTimingConfiguration {
	struct NR_MeasurementTimingConfiguration__criticalExtensions {
		NR_MeasurementTimingConfiguration__criticalExtensions_PR present;
		union NR_MeasurementTimingConfiguration__NR_criticalExtensions_u {
			struct NR_MeasurementTimingConfiguration__criticalExtensions__c1 {
				NR_MeasurementTimingConfiguration__criticalExtensions__c1_PR present;
				union NR_MeasurementTimingConfiguration__NR_criticalExtensions__NR_c1_u {
					struct NR_MeasurementTimingConfiguration_IEs	*measTimingConf;
					NULL_t	 spare3;
					NULL_t	 spare2;
					NULL_t	 spare1;
				} choice;
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *c1;
			struct NR_MeasurementTimingConfiguration__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_MeasurementTimingConfiguration_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_MeasurementTimingConfiguration;

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_MeasurementTimingConfiguration-IEs.h"

#endif	/* _NR_MeasurementTimingConfiguration_H_ */
#include <asn_internal.h>
