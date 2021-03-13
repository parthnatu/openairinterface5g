/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_NRDC-Parameters-v1610.h"

asn_TYPE_member_t asn_MBR_NR_NRDC_Parameters_v1610_1[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_NRDC_Parameters_v1610, measAndMobParametersNRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasAndMobParametersMRDC_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measAndMobParametersNRDC-v1610"
		},
};
static const int asn_MAP_NR_NRDC_Parameters_v1610_oms_1[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_NRDC_Parameters_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_NRDC_Parameters_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measAndMobParametersNRDC-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_NRDC_Parameters_v1610_specs_1 = {
	sizeof(struct NR_NRDC_Parameters_v1610),
	offsetof(struct NR_NRDC_Parameters_v1610, _asn_ctx),
	asn_MAP_NR_NRDC_Parameters_v1610_tag2el_1,
	1,	/* Count of tags in the map */
	asn_MAP_NR_NRDC_Parameters_v1610_oms_1,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_NRDC_Parameters_v1610 = {
	"NRDC-Parameters-v1610",
	"NRDC-Parameters-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_NRDC_Parameters_v1610_tags_1,
	sizeof(asn_DEF_NR_NRDC_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_NR_NRDC_Parameters_v1610_tags_1[0]), /* 1 */
	asn_DEF_NR_NRDC_Parameters_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_NRDC_Parameters_v1610_tags_1)
		/sizeof(asn_DEF_NR_NRDC_Parameters_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_NRDC_Parameters_v1610_1,
	1,	/* Elements count */
	&asn_SPC_NR_NRDC_Parameters_v1610_specs_1	/* Additional specs */
};

