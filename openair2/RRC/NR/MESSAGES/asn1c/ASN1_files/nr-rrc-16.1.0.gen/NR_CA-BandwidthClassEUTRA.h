/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CA_BandwidthClassEUTRA_H_
#define	_NR_CA_BandwidthClassEUTRA_H_


#include <asn_application.h>

/* Including external dependencies */
#include <NativeEnumerated.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CA_BandwidthClassEUTRA {
	NR_CA_BandwidthClassEUTRA_a	= 0,
	NR_CA_BandwidthClassEUTRA_b	= 1,
	NR_CA_BandwidthClassEUTRA_c	= 2,
	NR_CA_BandwidthClassEUTRA_d	= 3,
	NR_CA_BandwidthClassEUTRA_e	= 4,
	NR_CA_BandwidthClassEUTRA_f	= 5
	/*
	 * Enumeration is extensible
	 */
} e_NR_CA_BandwidthClassEUTRA;

/* NR_CA-BandwidthClassEUTRA */
typedef long	 NR_CA_BandwidthClassEUTRA_t;

/* Implementation */
extern asn_per_constraints_t asn_PER_type_NR_CA_BandwidthClassEUTRA_constr_1;
extern asn_TYPE_descriptor_t asn_DEF_NR_CA_BandwidthClassEUTRA;
extern const asn_INTEGER_specifics_t asn_SPC_NR_CA_BandwidthClassEUTRA_specs_1;
asn_struct_free_f NR_CA_BandwidthClassEUTRA_free;
asn_struct_print_f NR_CA_BandwidthClassEUTRA_print;
asn_constr_check_f NR_CA_BandwidthClassEUTRA_constraint;
ber_type_decoder_f NR_CA_BandwidthClassEUTRA_decode_ber;
der_type_encoder_f NR_CA_BandwidthClassEUTRA_encode_der;
xer_type_decoder_f NR_CA_BandwidthClassEUTRA_decode_xer;
xer_type_encoder_f NR_CA_BandwidthClassEUTRA_encode_xer;
per_type_decoder_f NR_CA_BandwidthClassEUTRA_decode_uper;
per_type_encoder_f NR_CA_BandwidthClassEUTRA_encode_uper;
per_type_decoder_f NR_CA_BandwidthClassEUTRA_decode_aper;
per_type_encoder_f NR_CA_BandwidthClassEUTRA_encode_aper;

#ifdef __cplusplus
}
#endif

#endif	/* _NR_CA_BandwidthClassEUTRA_H_ */
#include <asn_internal.h>
