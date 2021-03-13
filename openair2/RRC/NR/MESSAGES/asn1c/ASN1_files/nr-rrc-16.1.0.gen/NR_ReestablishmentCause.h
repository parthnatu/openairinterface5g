/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_ReestablishmentCause_H_
#define	_NR_ReestablishmentCause_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_ReestablishmentCause {
	NR_ReestablishmentCause_reconfigurationFailure	= 0,
	NR_ReestablishmentCause_handoverFailure	= 1,
	NR_ReestablishmentCause_otherFailure	= 2,
	NR_ReestablishmentCause_spare1	= 3
} e_NR_ReestablishmentCause;

/* NR_ReestablishmentCause */
typedef long	 NR_ReestablishmentCause_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_ReestablishmentCause_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_ReestablishmentCause;
extern const asn_INTEGER_specifics_t asn_SPC_NR_ReestablishmentCause_specs_1;
asn_struct_free_f NR_ReestablishmentCause_free;
asn_struct_print_f NR_ReestablishmentCause_print;
asn_constr_check_f NR_ReestablishmentCause_constraint;
ber_type_decoder_f NR_ReestablishmentCause_decode_ber;
der_type_encoder_f NR_ReestablishmentCause_encode_der;
xer_type_decoder_f NR_ReestablishmentCause_decode_xer;
xer_type_encoder_f NR_ReestablishmentCause_encode_xer;
per_type_decoder_f NR_ReestablishmentCause_decode_uper;
per_type_encoder_f NR_ReestablishmentCause_encode_uper;
per_type_decoder_f NR_ReestablishmentCause_decode_aper;
per_type_encoder_f NR_ReestablishmentCause_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_ReestablishmentCause_H_ */
#include <asn_internal.h>
