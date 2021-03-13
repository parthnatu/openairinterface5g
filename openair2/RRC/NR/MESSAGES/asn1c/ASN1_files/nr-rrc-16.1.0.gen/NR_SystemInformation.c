/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SystemInformation.h"

static asn_per_constraints_t asn_PER_type_NR_criticalExtensionsFuture_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_criticalExtensions_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const ber_tlv_tag_t asn_DEF_NR_criticalExtensionsFuture_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_criticalExtensionsFuture_specs_6 = {
	sizeof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16__criticalExtensionsFuture),
	offsetof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16__criticalExtensionsFuture, _asn_ctx),
	0,	/* No top level tags */
	0,	/* No tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_criticalExtensionsFuture_6 = {
	"criticalExtensionsFuture",
	"criticalExtensionsFuture",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_criticalExtensionsFuture_tags_6,
	sizeof(asn_DEF_NR_criticalExtensionsFuture_tags_6)
		/sizeof(asn_DEF_NR_criticalExtensionsFuture_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_criticalExtensionsFuture_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_criticalExtensionsFuture_tags_6)
		/sizeof(asn_DEF_NR_criticalExtensionsFuture_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	0, 0,	/* No members */
	&asn_SPC_NR_criticalExtensionsFuture_specs_6	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_criticalExtensionsFuture_r16_4[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16, choice.posSystemInformation_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PosSystemInformation_r16_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"posSystemInformation-r16"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16, choice.criticalExtensionsFuture),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_criticalExtensionsFuture_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_criticalExtensionsFuture_r16_tag2el_4[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* posSystemInformation-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture */
};
static asn_CHOICE_specifics_t asn_SPC_NR_criticalExtensionsFuture_r16_specs_4 = {
	sizeof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16),
	offsetof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16, _asn_ctx),
	offsetof(struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16, present),
	sizeof(((struct NR_SystemInformation__criticalExtensions__criticalExtensionsFuture_r16 *)0)->present),
	asn_MAP_NR_criticalExtensionsFuture_r16_tag2el_4,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_criticalExtensionsFuture_r16_4 = {
	"criticalExtensionsFuture-r16",
	"criticalExtensionsFuture-r16",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_criticalExtensionsFuture_r16_constr_4, CHOICE_constraint },
	asn_MBR_NR_criticalExtensionsFuture_r16_4,
	2,	/* Elements count */
	&asn_SPC_NR_criticalExtensionsFuture_r16_specs_4	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_criticalExtensions_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_SystemInformation__criticalExtensions, choice.systemInformation),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SystemInformation_IEs,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"systemInformation"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_SystemInformation__criticalExtensions, choice.criticalExtensionsFuture_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_criticalExtensionsFuture_r16_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensionsFuture-r16"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_criticalExtensions_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* systemInformation */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* criticalExtensionsFuture-r16 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_criticalExtensions_specs_2 = {
	sizeof(struct NR_SystemInformation__criticalExtensions),
	offsetof(struct NR_SystemInformation__criticalExtensions, _asn_ctx),
	offsetof(struct NR_SystemInformation__criticalExtensions, present),
	sizeof(((struct NR_SystemInformation__criticalExtensions *)0)->present),
	asn_MAP_NR_criticalExtensions_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0,
	-1	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_criticalExtensions_2 = {
	"criticalExtensions",
	"criticalExtensions",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_criticalExtensions_constr_2, CHOICE_constraint },
	asn_MBR_NR_criticalExtensions_2,
	2,	/* Elements count */
	&asn_SPC_NR_criticalExtensions_specs_2	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SystemInformation_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SystemInformation, criticalExtensions),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_criticalExtensions_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"criticalExtensions"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_SystemInformation_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SystemInformation_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* criticalExtensions */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SystemInformation_specs_1 = {
	sizeof(struct NR_SystemInformation),
	offsetof(struct NR_SystemInformation, _asn_ctx),
	asn_MAP_NR_SystemInformation_tag2el_1,
	1,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SystemInformation = {
	"SystemInformation",
	"SystemInformation",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SystemInformation_tags_1,
	sizeof(asn_DEF_NR_SystemInformation_tags_1)
		/sizeof(asn_DEF_NR_SystemInformation_tags_1[0]), /* 1 */
	asn_DEF_NR_SystemInformation_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SystemInformation_tags_1)
		/sizeof(asn_DEF_NR_SystemInformation_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SystemInformation_1,
	1,	/* Elements count */
	&asn_SPC_NR_SystemInformation_specs_1	/* Additional specs */
};

