/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_DummyE_H_
#define	_NR_DummyE_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>
#include <NativeInteger.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_DummyE__maxNumberTxPortsPerResource {
	NR_DummyE__maxNumberTxPortsPerResource_p4	= 0,
	NR_DummyE__maxNumberTxPortsPerResource_p8	= 1,
	NR_DummyE__maxNumberTxPortsPerResource_p12	= 2,
	NR_DummyE__maxNumberTxPortsPerResource_p16	= 3,
	NR_DummyE__maxNumberTxPortsPerResource_p24	= 4,
	NR_DummyE__maxNumberTxPortsPerResource_p32	= 5
} e_NR_DummyE__maxNumberTxPortsPerResource;
typedef enum NR_DummyE__amplitudeScalingType {
	NR_DummyE__amplitudeScalingType_wideband	= 0,
	NR_DummyE__amplitudeScalingType_widebandAndSubband	= 1
} e_NR_DummyE__amplitudeScalingType;

/* NR_DummyE */
typedef struct NR_DummyE {
	long	 maxNumberTxPortsPerResource;
	long	 maxNumberResources;
	long	 totalNumberTxPorts;
	long	 parameterLx;
	long	 amplitudeScalingType;
	long	 maxNumberCSI_RS_PerResourceSet;
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_DummyE_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_maxNumberTxPortsPerResource_2;	// (Use -fall-defs-global to expose) */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_amplitudeScalingType_12;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_DummyE;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_DummyE_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_DummyE_1[6];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_DummyE_H_ */
#include <asn_internal.h>
