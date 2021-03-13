/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DummyH_H_
#define	_NR_DummyH_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_DummyH */
typedef struct NR_DummyH {
	long	 burstLength;
	long	 maxSimultaneousResourceSetsPerCC;
	long	 maxConfiguredResourceSetsPerCC;
	long	 maxConfiguredResourceSetsAllCC;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DummyH_t;

/* Implementation */
extern asn_TYPE_descriptor_t asn_DEF_NR_DummyH;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DummyH_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DummyH_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DummyH_H_ */
#include <asn_internal.h>
