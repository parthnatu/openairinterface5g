/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RRCSetup_H_
#define	_NR_RRCSetup_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RRC-TransactionIdentifier.h"
#include <constr_SEQUENCE.h>
#include <constr_CHOICE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RRCSetup__criticalExtensions_PR {
	NR_RRCSetup__criticalExtensions_PR_NOTHING,	/* No components present */
	NR_RRCSetup__criticalExtensions_PR_rrcSetup,
	NR_RRCSetup__criticalExtensions_PR_criticalExtensionsFuture
} NR_RRCSetup__criticalExtensions_PR;

/* Forward declarations */
struct NR_RRCSetup_IEs;

/* NR_RRCSetup */
typedef struct NR_RRCSetup {
	NR_RRC_TransactionIdentifier_t	 rrc_TransactionIdentifier;
	struct NR_RRCSetup__criticalExtensions {
		NR_RRCSetup__criticalExtensions_PR present;
		union NR_RRCSetup__NR_criticalExtensions_u {
			struct NR_RRCSetup_IEs	*rrcSetup;
			struct NR_RRCSetup__criticalExtensions__criticalExtensionsFuture {
				
				/* Context for parsing across buffer boundaries */
				asn_struct_ctx_t _asn_ctx;
			} *criticalExtensionsFuture;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} criticalExtensions;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RRCSetup_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_RRCSetup;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RRCSetup_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RRCSetup_1[2];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_RRCSetup-IEs.h"

#endif	/* _NR_RRCSetup_H_ */
#include <asn_internal.h>
