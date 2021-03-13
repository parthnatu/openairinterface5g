/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_AMF_Identifier_H_
#define	_NR_AMF_Identifier_H_


#include <asn_application.h>

/* Including external dependencies */
#include <BIT_STRING.h>

#ifdef __cplusplus
extern "C" {
#endif

/* NR_AMF-Identifier */
typedef BIT_STRING_t	 NR_AMF_Identifier_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_AMF_Identifier_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_AMF_Identifier;
asn_struct_free_f NR_AMF_Identifier_free;
asn_struct_print_f NR_AMF_Identifier_print;
asn_constr_check_f NR_AMF_Identifier_constraint;
ber_type_decoder_f NR_AMF_Identifier_decode_ber;
der_type_encoder_f NR_AMF_Identifier_encode_der;
xer_type_decoder_f NR_AMF_Identifier_decode_xer;
xer_type_encoder_f NR_AMF_Identifier_encode_xer;
per_type_decoder_f NR_AMF_Identifier_decode_uper;
per_type_encoder_f NR_AMF_Identifier_encode_uper;
per_type_decoder_f NR_AMF_Identifier_decode_aper;
per_type_encoder_f NR_AMF_Identifier_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_AMF_Identifier_H_ */
#include <asn_internal.h>
