/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RLF_TimersAndConstants_H_
#define	_NR_RLF_TimersAndConstants_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RLF_TimersAndConstants__t310 {
	NR_RLF_TimersAndConstants__t310_ms0	= 0,
	NR_RLF_TimersAndConstants__t310_ms50	= 1,
	NR_RLF_TimersAndConstants__t310_ms100	= 2,
	NR_RLF_TimersAndConstants__t310_ms200	= 3,
	NR_RLF_TimersAndConstants__t310_ms500	= 4,
	NR_RLF_TimersAndConstants__t310_ms1000	= 5,
	NR_RLF_TimersAndConstants__t310_ms2000	= 6,
	NR_RLF_TimersAndConstants__t310_ms4000	= 7,
	NR_RLF_TimersAndConstants__t310_ms6000	= 8
} e_NR_RLF_TimersAndConstants__t310;
typedef enum NR_RLF_TimersAndConstants__n310 {
	NR_RLF_TimersAndConstants__n310_n1	= 0,
	NR_RLF_TimersAndConstants__n310_n2	= 1,
	NR_RLF_TimersAndConstants__n310_n3	= 2,
	NR_RLF_TimersAndConstants__n310_n4	= 3,
	NR_RLF_TimersAndConstants__n310_n6	= 4,
	NR_RLF_TimersAndConstants__n310_n8	= 5,
	NR_RLF_TimersAndConstants__n310_n10	= 6,
	NR_RLF_TimersAndConstants__n310_n20	= 7
} e_NR_RLF_TimersAndConstants__n310;
typedef enum NR_RLF_TimersAndConstants__n311 {
	NR_RLF_TimersAndConstants__n311_n1	= 0,
	NR_RLF_TimersAndConstants__n311_n2	= 1,
	NR_RLF_TimersAndConstants__n311_n3	= 2,
	NR_RLF_TimersAndConstants__n311_n4	= 3,
	NR_RLF_TimersAndConstants__n311_n5	= 4,
	NR_RLF_TimersAndConstants__n311_n6	= 5,
	NR_RLF_TimersAndConstants__n311_n8	= 6,
	NR_RLF_TimersAndConstants__n311_n10	= 7
} e_NR_RLF_TimersAndConstants__n311;
typedef enum NR_RLF_TimersAndConstants__ext1__t311 {
	NR_RLF_TimersAndConstants__ext1__t311_ms1000	= 0,
	NR_RLF_TimersAndConstants__ext1__t311_ms3000	= 1,
	NR_RLF_TimersAndConstants__ext1__t311_ms5000	= 2,
	NR_RLF_TimersAndConstants__ext1__t311_ms10000	= 3,
	NR_RLF_TimersAndConstants__ext1__t311_ms15000	= 4,
	NR_RLF_TimersAndConstants__ext1__t311_ms20000	= 5,
	NR_RLF_TimersAndConstants__ext1__t311_ms30000	= 6
} e_NR_RLF_TimersAndConstants__ext1__t311;

/* NR_RLF-TimersAndConstants */
typedef struct NR_RLF_TimersAndConstants {
	long	 t310;
	long	 n310;
	long	 n311;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	struct NR_RLF_TimersAndConstants__ext1 {
		long	 t311;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *ext1;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RLF_TimersAndConstants_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t310_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_n310_12;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_n311_21;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_t311_32;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RLF_TimersAndConstants;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RLF_TimersAndConstants_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RLF_TimersAndConstants_1[4];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RLF_TimersAndConstants_H_ */
#include <asn_internal.h>
