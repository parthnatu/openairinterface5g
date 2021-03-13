/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-UE-Variables"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_VarShortMAC-Input.h"

static asn_TYPE_member_t asn_MBR_NR_VarShortMAC_Input_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarShortMAC_Input, sourcePhysCellId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_PhysCellId,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sourcePhysCellId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarShortMAC_Input, targetCellIdentity),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CellIdentity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"targetCellIdentity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_VarShortMAC_Input, source_c_RNTI),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_RNTI_Value,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"source-c-RNTI"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_VarShortMAC_Input_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_VarShortMAC_Input_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sourcePhysCellId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* targetCellIdentity */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* source-c-RNTI */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_VarShortMAC_Input_specs_1 = {
	sizeof(struct NR_VarShortMAC_Input),
	offsetof(struct NR_VarShortMAC_Input, _asn_ctx),
	asn_MAP_NR_VarShortMAC_Input_tag2el_1,
	3,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_VarShortMAC_Input = {
	"VarShortMAC-Input",
	"VarShortMAC-Input",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_VarShortMAC_Input_tags_1,
	sizeof(asn_DEF_NR_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_NR_VarShortMAC_Input_tags_1[0]), /* 1 */
	asn_DEF_NR_VarShortMAC_Input_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_VarShortMAC_Input_tags_1)
		/sizeof(asn_DEF_NR_VarShortMAC_Input_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_VarShortMAC_Input_1,
	3,	/* Elements count */
	&asn_SPC_NR_VarShortMAC_Input_specs_1	/* Additional specs */
};

