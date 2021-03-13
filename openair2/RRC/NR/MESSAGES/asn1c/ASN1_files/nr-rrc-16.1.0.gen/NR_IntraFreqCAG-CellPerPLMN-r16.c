/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_IntraFreqCAG-CellPerPLMN-r16.h"

static int
memb_NR_plmn_IdentityIndex_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 12)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static int
memb_NR_cag_CellList_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 16)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_cag_CellList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_plmn_IdentityIndex_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  1,  12 }	/* (1..12) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_cag_CellList_r16_constr_3 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_cag_CellList_r16_3[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_PCI_Range,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_cag_CellList_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_cag_CellList_r16_specs_3 = {
	sizeof(struct NR_IntraFreqCAG_CellPerPLMN_r16__cag_CellList_r16),
	offsetof(struct NR_IntraFreqCAG_CellPerPLMN_r16__cag_CellList_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_cag_CellList_r16_3 = {
	"cag-CellList-r16",
	"cag-CellList-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_cag_CellList_r16_tags_3,
	sizeof(asn_DEF_NR_cag_CellList_r16_tags_3)
		/sizeof(asn_DEF_NR_cag_CellList_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_cag_CellList_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_cag_CellList_r16_tags_3)
		/sizeof(asn_DEF_NR_cag_CellList_r16_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_cag_CellList_r16_constr_3, SEQUENCE_OF_constraint },
	asn_MBR_NR_cag_CellList_r16_3,
	1,	/* Single element */
	&asn_SPC_NR_cag_CellList_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_IntraFreqCAG_CellPerPLMN_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntraFreqCAG_CellPerPLMN_r16, plmn_IdentityIndex_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_plmn_IdentityIndex_r16_constr_2,  memb_NR_plmn_IdentityIndex_r16_constraint_1 },
		0, 0, /* No default value */
		"plmn-IdentityIndex-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_IntraFreqCAG_CellPerPLMN_r16, cag_CellList_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_cag_CellList_r16_3,
		0,
		{ 0, &asn_PER_memb_NR_cag_CellList_r16_constr_3,  memb_NR_cag_CellList_r16_constraint_1 },
		0, 0, /* No default value */
		"cag-CellList-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_IntraFreqCAG_CellPerPLMN_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* plmn-IdentityIndex-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* cag-CellList-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_IntraFreqCAG_CellPerPLMN_r16_specs_1 = {
	sizeof(struct NR_IntraFreqCAG_CellPerPLMN_r16),
	offsetof(struct NR_IntraFreqCAG_CellPerPLMN_r16, _asn_ctx),
	asn_MAP_NR_IntraFreqCAG_CellPerPLMN_r16_tag2el_1,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16 = {
	"IntraFreqCAG-CellPerPLMN-r16",
	"IntraFreqCAG-CellPerPLMN-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1,
	sizeof(asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1)
		/sizeof(asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1)
		/sizeof(asn_DEF_NR_IntraFreqCAG_CellPerPLMN_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_IntraFreqCAG_CellPerPLMN_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_IntraFreqCAG_CellPerPLMN_r16_specs_1	/* Additional specs */
};

