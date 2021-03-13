/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_BWP-DownlinkCommon.h"

asn_TYPE_member_t asn_MBR_NR_BWP_DownlinkCommon_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_BWP_DownlinkCommon, genericParameters),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"genericParameters"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BWP_DownlinkCommon, pdcch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PDCCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdcch-ConfigCommon"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BWP_DownlinkCommon, pdsch_ConfigCommon),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_SetupRelease_PDSCH_ConfigCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pdsch-ConfigCommon"
		},
};
static const int asn_MAP_NR_BWP_DownlinkCommon_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_BWP_DownlinkCommon_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BWP_DownlinkCommon_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* genericParameters */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* pdcch-ConfigCommon */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* pdsch-ConfigCommon */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BWP_DownlinkCommon_specs_1 = {
	sizeof(struct NR_BWP_DownlinkCommon),
	offsetof(struct NR_BWP_DownlinkCommon, _asn_ctx),
	asn_MAP_NR_BWP_DownlinkCommon_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_BWP_DownlinkCommon_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BWP_DownlinkCommon = {
	"BWP-DownlinkCommon",
	"BWP-DownlinkCommon",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BWP_DownlinkCommon_tags_1,
	sizeof(asn_DEF_NR_BWP_DownlinkCommon_tags_1)
		/sizeof(asn_DEF_NR_BWP_DownlinkCommon_tags_1[0]), /* 1 */
	asn_DEF_NR_BWP_DownlinkCommon_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BWP_DownlinkCommon_tags_1)
		/sizeof(asn_DEF_NR_BWP_DownlinkCommon_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_BWP_DownlinkCommon_1,
	3,	/* Elements count */
	&asn_SPC_NR_BWP_DownlinkCommon_specs_1	/* Additional specs */
};

