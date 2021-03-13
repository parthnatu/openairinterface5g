/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_ModulationOrder_H_
#define	_NR_ModulationOrder_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ModulationOrder {
	NR_ModulationOrder_bpsk_halfpi	= 0,
	NR_ModulationOrder_bpsk	= 1,
	NR_ModulationOrder_qpsk	= 2,
	NR_ModulationOrder_qam16	= 3,
	NR_ModulationOrder_qam64	= 4,
	NR_ModulationOrder_qam256	= 5
} e_NR_ModulationOrder;

/* NR_ModulationOrder */
typedef long	 NR_ModulationOrder_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_ModulationOrder_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_ModulationOrder;
extern const asn_INTEGER_specifics_t asn_SPC_NR_ModulationOrder_specs_1;
asn_struct_free_f NR_ModulationOrder_free;
asn_struct_print_f NR_ModulationOrder_print;
asn_constr_check_f NR_ModulationOrder_constraint;
ber_type_decoder_f NR_ModulationOrder_decode_ber;
der_type_encoder_f NR_ModulationOrder_encode_der;
xer_type_decoder_f NR_ModulationOrder_decode_xer;
xer_type_encoder_f NR_ModulationOrder_encode_xer;
per_type_decoder_f NR_ModulationOrder_decode_uper;
per_type_encoder_f NR_ModulationOrder_encode_uper;
per_type_decoder_f NR_ModulationOrder_decode_aper;
per_type_encoder_f NR_ModulationOrder_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ModulationOrder_H_ */
#include <asn_internal.h>
