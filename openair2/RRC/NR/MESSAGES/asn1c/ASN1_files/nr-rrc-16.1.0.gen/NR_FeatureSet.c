/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_FeatureSet.h"

asn_per_constraints_t asn_PER_type_NR_FeatureSet_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_eutra_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_FeatureSet__eutra, downlinkSetEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FeatureSetEUTRA_DownlinkId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkSetEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_FeatureSet__eutra, uplinkSetEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FeatureSetEUTRA_UplinkId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkSetEUTRA"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eutra_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eutra_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkSetEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkSetEUTRA */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eutra_specs_2 = {
	sizeof(struct NR_FeatureSet__eutra),
	offsetof(struct NR_FeatureSet__eutra, _asn_ctx),
	asn_MAP_NR_eutra_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eutra_2 = {
	"eutra",
	"eutra",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eutra_tags_2,
	sizeof(asn_DEF_NR_eutra_tags_2)
		/sizeof(asn_DEF_NR_eutra_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_eutra_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_eutra_tags_2)
		/sizeof(asn_DEF_NR_eutra_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eutra_2,
	2,	/* Elements count */
	&asn_SPC_NR_eutra_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_nr_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_FeatureSet__nr, downlinkSetNR),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FeatureSetDownlinkId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"downlinkSetNR"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_FeatureSet__nr, uplinkSetNR),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FeatureSetUplinkId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"uplinkSetNR"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_nr_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_nr_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* downlinkSetNR */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* uplinkSetNR */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_nr_specs_5 = {
	sizeof(struct NR_FeatureSet__nr),
	offsetof(struct NR_FeatureSet__nr, _asn_ctx),
	asn_MAP_NR_nr_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_nr_5 = {
	"nr",
	"nr",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_nr_tags_5,
	sizeof(asn_DEF_NR_nr_tags_5)
		/sizeof(asn_DEF_NR_nr_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_nr_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_nr_tags_5)
		/sizeof(asn_DEF_NR_nr_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_nr_5,
	2,	/* Elements count */
	&asn_SPC_NR_nr_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_FeatureSet_1[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_FeatureSet, choice.eutra),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_eutra_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eutra"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_FeatureSet, choice.nr),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_nr_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"nr"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_FeatureSet_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eutra */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* nr */
};
asn_CHOICE_specifics_t asn_SPC_NR_FeatureSet_specs_1 = {
	sizeof(struct NR_FeatureSet),
	offsetof(struct NR_FeatureSet, _asn_ctx),
	offsetof(struct NR_FeatureSet, present),
	sizeof(((struct NR_FeatureSet *)0)->present),
	asn_MAP_NR_FeatureSet_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
asn_TYPE_descriptor_t asn_DEF_NR_FeatureSet = {
	"FeatureSet",
	"FeatureSet",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_FeatureSet_constr_1, CHOICE_constraint },
	asn_MBR_NR_FeatureSet_1,
	2,	/* Elements count */
	&asn_SPC_NR_FeatureSet_specs_1	/* Additional specs */
};

