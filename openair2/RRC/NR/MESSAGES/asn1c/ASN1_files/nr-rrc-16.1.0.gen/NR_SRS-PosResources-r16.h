/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_SRS_PosResources_r16_H_
#define	_NR_SRS_PosResources_r16_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16 {
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n1	= 0,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n2	= 1,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n4	= 2,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n8	= 3,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n12	= 4,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16_n16	= 5
} e_NR_SRS_PosResources_r16__maxNumberSRS_PosResourceSetPerBWP_r16;
typedef enum NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16 {
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n1	= 0,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n2	= 1,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n4	= 2,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n8	= 3,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n16	= 4,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n32	= 5,
	NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16_n64	= 6
} e_NR_SRS_PosResources_r16__maxNumberSRS_PosResourcesPerBWP_r16;
typedef enum NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16 {
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n1	= 0,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n2	= 1,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n3	= 2,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n4	= 3,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n5	= 4,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n6	= 5,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n8	= 6,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n10	= 7,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n12	= 8,
	NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16_n14	= 9
} e_NR_SRS_PosResources_r16__maxNumberSRS_ResourcesPerBWP_PerSlot_r16;
typedef enum NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16 {
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n1	= 0,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n2	= 1,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n4	= 2,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n8	= 3,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n16	= 4,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n32	= 5,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16_n64	= 6
} e_NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_r16;
typedef enum NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16 {
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n1	= 0,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n2	= 1,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n3	= 2,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n4	= 3,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n5	= 4,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n6	= 5,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n8	= 6,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n10	= 7,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n12	= 8,
	NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_n14	= 9
} e_NR_SRS_PosResources_r16__maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16;

/* NR_SRS-PosResources-r16 */
typedef struct NR_SRS_PosResources_r16 {
	long	 maxNumberSRS_PosResourceSetPerBWP_r16;
	long	 maxNumberSRS_PosResourcesPerBWP_r16;
	long	 maxNumberSRS_ResourcesPerBWP_PerSlot_r16;
	long	 maxNumberPeriodicSRS_PosResourcesPerBWP_r16;
	long	 maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_SRS_PosResources_r16_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_PosResourceSetPerBWP_r16_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_PosResourcesPerBWP_r16_9;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberSRS_ResourcesPerBWP_PerSlot_r16_17;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberPeriodicSRS_PosResourcesPerBWP_r16_28;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberPeriodicSRS_PosResourcesPerBWP_PerSlot_r16_36;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_SRS_PosResources_r16;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_SRS_PosResources_r16_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_SRS_PosResources_r16_1[5];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_SRS_PosResources_r16_H_ */
#include <asn_internal.h>
