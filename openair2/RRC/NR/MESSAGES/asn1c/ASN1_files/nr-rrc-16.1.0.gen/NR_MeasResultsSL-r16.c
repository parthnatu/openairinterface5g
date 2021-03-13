/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_MeasResultsSL-r16.h"

static asn_per_constraints_t asn_PER_type_NR_measResultsListSL_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  0,  0,  0,  0 }	/* (0..0,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_measResultsListSL_r16_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_MeasResultsSL_r16__measResultsListSL_r16, choice.measResultNR_SL_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasResultNR_SL_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultNR-SL-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_measResultsListSL_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultNR-SL-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_measResultsListSL_r16_specs_2 = {
	sizeof(struct NR_MeasResultsSL_r16__measResultsListSL_r16),
	offsetof(struct NR_MeasResultsSL_r16__measResultsListSL_r16, _asn_ctx),
	offsetof(struct NR_MeasResultsSL_r16__measResultsListSL_r16, present),
	sizeof(((struct NR_MeasResultsSL_r16__measResultsListSL_r16 *)0)->present),
	asn_MAP_NR_measResultsListSL_r16_tag2el_2,
	1,	/* Count of tags in the map */
	0, 0,
	1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measResultsListSL_r16_2 = {
	"measResultsListSL-r16",
	"measResultsListSL-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_measResultsListSL_r16_constr_2, CHOICE_constraint },
	asn_MBR_NR_measResultsListSL_r16_2,
	1,	/* Elements count */
	&asn_SPC_NR_measResultsListSL_r16_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MeasResultsSL_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MeasResultsSL_r16, measResultsListSL_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_measResultsListSL_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measResultsListSL-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_MeasResultsSL_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MeasResultsSL_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* measResultsListSL-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MeasResultsSL_r16_specs_1 = {
	sizeof(struct NR_MeasResultsSL_r16),
	offsetof(struct NR_MeasResultsSL_r16, _asn_ctx),
	asn_MAP_NR_MeasResultsSL_r16_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MeasResultsSL_r16 = {
	"MeasResultsSL-r16",
	"MeasResultsSL-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MeasResultsSL_r16_tags_1,
	sizeof(asn_DEF_NR_MeasResultsSL_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultsSL_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MeasResultsSL_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MeasResultsSL_r16_tags_1)
		/sizeof(asn_DEF_NR_MeasResultsSL_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MeasResultsSL_r16_1,
	1,	/* Elements count */
	&asn_SPC_NR_MeasResultsSL_r16_specs_1	/* Additional specs */
};

