/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SIB3.h"

static int
memb_NR_intraFreqCAG_CellList_r16_constraint_6(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	size_t size;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	/* Determine the number of elements */
	size = _A_CSEQUENCE_FROM_VOID(sptr)->count;
	
	if((size >= 1 && size <= 12)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_intraFreqCAG_CellList_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_intraFreqCAG_CellList_r16_constr_9 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (SIZE(1..12)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_intraFreqCAG_CellList_r16_9[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_intraFreqCAG_CellList_r16_specs_9 = {
	sizeof(struct NR_SIB3__ext1__intraFreqCAG_CellList_r16),
	offsetof(struct NR_SIB3__ext1__intraFreqCAG_CellList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_intraFreqCAG_CellList_r16_9 = {
	"intraFreqCAG-CellList-r16",
	"intraFreqCAG-CellList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9,
	sizeof(asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9)
		/sizeof(asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9)
		/sizeof(asn_DEF_NR_intraFreqCAG_CellList_r16_tags_9[0]), /* 2 */
	{ 0, &asn_PER_type_NR_intraFreqCAG_CellList_r16_constr_9, SEQUENCE_OF_constraint },
	asn_MBR_NR_intraFreqCAG_CellList_r16_9,
	1,	/* Single element */
	&asn_SPC_NR_intraFreqCAG_CellList_r16_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_6[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_SIB3__ext1, intraFreqNeighCellList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IntraFreqNeighCellList_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB3__ext1, intraFreqWhiteCellList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IntraFreqWhiteCellList_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqWhiteCellList-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB3__ext1, intraFreqCAG_CellList_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_intraFreqCAG_CellList_r16_9,
		0,
		{ 0, &asn_PER_memb_NR_intraFreqCAG_CellList_r16_constr_9,  memb_NR_intraFreqCAG_CellList_r16_constraint_6 },
		0, 0, /* No default value */
		"intraFreqCAG-CellList-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_6[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_6[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqWhiteCellList-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* intraFreqCAG-CellList-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_6 = {
	sizeof(struct NR_SIB3__ext1),
	offsetof(struct NR_SIB3__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_6,
	3,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_6,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_6 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_6,
	sizeof(asn_DEF_NR_ext1_tags_6)
		/sizeof(asn_DEF_NR_ext1_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_6)
		/sizeof(asn_DEF_NR_ext1_tags_6[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_6,
	3,	/* Elements count */
	&asn_SPC_NR_ext1_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SIB3_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_SIB3, intraFreqNeighCellList),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IntraFreqNeighCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqNeighCellList"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_SIB3, intraFreqBlackCellList),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_IntraFreqBlackCellList,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"intraFreqBlackCellList"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB3, lateNonCriticalExtension),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_OCTET_STRING,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"lateNonCriticalExtension"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB3, ext1),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		0,
		&asn_DEF_NR_ext1_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_SIB3_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_SIB3_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SIB3_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* intraFreqNeighCellList */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* intraFreqBlackCellList */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* lateNonCriticalExtension */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SIB3_specs_1 = {
	sizeof(struct NR_SIB3),
	offsetof(struct NR_SIB3, _asn_ctx),
	asn_MAP_NR_SIB3_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_SIB3_oms_1,	/* Optional members */
	3, 1,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB3 = {
	"SIB3",
	"SIB3",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SIB3_tags_1,
	sizeof(asn_DEF_NR_SIB3_tags_1)
		/sizeof(asn_DEF_NR_SIB3_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB3_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB3_tags_1)
		/sizeof(asn_DEF_NR_SIB3_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SIB3_1,
	4,	/* Elements count */
	&asn_SPC_NR_SIB3_specs_1	/* Additional specs */
};

