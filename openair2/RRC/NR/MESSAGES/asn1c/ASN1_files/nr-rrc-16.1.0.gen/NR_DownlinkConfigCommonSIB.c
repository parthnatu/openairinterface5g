/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_DownlinkConfigCommonSIB.h"

asn_TYPE_member_t asn_MBR_NR_DownlinkConfigCommonSIB_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DownlinkConfigCommonSIB, frequencyInfoDL),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_FrequencyInfoDL_SIB,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"frequencyInfoDL"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DownlinkConfigCommonSIB, initialDownlinkBWP),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BWP_DownlinkCommon,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"initialDownlinkBWP"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DownlinkConfigCommonSIB, bcch_Config),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_BCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"bcch-Config"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_DownlinkConfigCommonSIB, pcch_Config),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PCCH_Config,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"pcch-Config"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_DownlinkConfigCommonSIB_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_DownlinkConfigCommonSIB_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* frequencyInfoDL */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* initialDownlinkBWP */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* bcch-Config */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* pcch-Config */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_DownlinkConfigCommonSIB_specs_1 = {
	sizeof(struct NR_DownlinkConfigCommonSIB),
	offsetof(struct NR_DownlinkConfigCommonSIB, _asn_ctx),
	asn_MAP_NR_DownlinkConfigCommonSIB_tag2el_1,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_DownlinkConfigCommonSIB = {
	"DownlinkConfigCommonSIB",
	"DownlinkConfigCommonSIB",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_DownlinkConfigCommonSIB_tags_1,
	sizeof(asn_DEF_NR_DownlinkConfigCommonSIB_tags_1)
		/sizeof(asn_DEF_NR_DownlinkConfigCommonSIB_tags_1[0]), /* 1 */
	asn_DEF_NR_DownlinkConfigCommonSIB_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_DownlinkConfigCommonSIB_tags_1)
		/sizeof(asn_DEF_NR_DownlinkConfigCommonSIB_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_DownlinkConfigCommonSIB_1,
	4,	/* Elements count */
	&asn_SPC_NR_DownlinkConfigCommonSIB_specs_1	/* Additional specs */
};

