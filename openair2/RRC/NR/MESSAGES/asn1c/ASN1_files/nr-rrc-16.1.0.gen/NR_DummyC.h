/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DummyC_H_
#define	_NR_DummyC_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DummyC__maxNumberTxPortsPerResource {
	NR_DummyC__maxNumberTxPortsPerResource_p8	= 0,
	NR_DummyC__maxNumberTxPortsPerResource_p16	= 1,
	NR_DummyC__maxNumberTxPortsPerResource_p32	= 2
} e_NR_DummyC__maxNumberTxPortsPerResource;
typedef enum NR_DummyC__supportedCodebookMode {
	NR_DummyC__supportedCodebookMode_mode1	= 0,
	NR_DummyC__supportedCodebookMode_mode2	= 1,
	NR_DummyC__supportedCodebookMode_both	= 2
} e_NR_DummyC__supportedCodebookMode;
typedef enum NR_DummyC__supportedNumberPanels {
	NR_DummyC__supportedNumberPanels_n2	= 0,
	NR_DummyC__supportedNumberPanels_n4	= 1
} e_NR_DummyC__supportedNumberPanels;

/* NR_DummyC */
typedef struct NR_DummyC {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 supportedCodebookMode;
	long	 supportedNumberPanels;
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DummyC_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedCodebookMode_8;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_supportedNumberPanels_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DummyC;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DummyC_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DummyC_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DummyC_H_ */
#include <asn_internal.h>
