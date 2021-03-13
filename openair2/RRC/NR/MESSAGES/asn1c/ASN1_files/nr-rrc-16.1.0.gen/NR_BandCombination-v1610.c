/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_BandCombination-v1610.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_bandList_v1610_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 32)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_bandList_v1610_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_powerClass_v1610_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_bandList_v1610_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 5,  5,  1,  32 }	/* (SIZE(1..32)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_bandList_v1610_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_BandParameters_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_bandList_v1610_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_bandList_v1610_specs_2 = {
	sizeof(struct NR_BandCombination_v1610__bandList_v1610),
	offsetof(struct NR_BandCombination_v1610__bandList_v1610, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_bandList_v1610_2 = {
	"bandList-v1610",
	"bandList-v1610",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_bandList_v1610_tags_2,
	sizeof(asn_DEF_NR_bandList_v1610_tags_2)
		/sizeof(asn_DEF_NR_bandList_v1610_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_bandList_v1610_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_bandList_v1610_tags_2)
		/sizeof(asn_DEF_NR_bandList_v1610_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_bandList_v1610_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_bandList_v1610_2,
	1,	/* Single element */
	&asn_SPC_NR_bandList_v1610_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_powerClass_v1610_value2enum_6[] = {
	{ 0,	7,	"pc1dot5" }
};
static const unsigned int asn_MAP_NR_powerClass_v1610_enum2value_6[] = {
	0	/* pc1dot5(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_powerClass_v1610_specs_6 = {
	asn_MAP_NR_powerClass_v1610_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_powerClass_v1610_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_powerClass_v1610_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_powerClass_v1610_6 = {
	"powerClass-v1610",
	"powerClass-v1610",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_powerClass_v1610_tags_6,
	sizeof(asn_DEF_NR_powerClass_v1610_tags_6)
		/sizeof(asn_DEF_NR_powerClass_v1610_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_powerClass_v1610_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_powerClass_v1610_tags_6)
		/sizeof(asn_DEF_NR_powerClass_v1610_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_powerClass_v1610_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_powerClass_v1610_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_BandCombination_v1610_1[] = {
	{ ATF_POINTER, 4, offsetof(struct NR_BandCombination_v1610, bandList_v1610),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_bandList_v1610_2,
		0,
		{ 0, &asn_PER_memb_NR_bandList_v1610_constr_2,  memb_NR_bandList_v1610_constraint_1 },
		0, 0, /* No default value */
		"bandList-v1610"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_BandCombination_v1610, ca_ParametersNR_v1610),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CA_ParametersNR_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNR-v1610"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_BandCombination_v1610, ca_ParametersNRDC_v1610),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_CA_ParametersNRDC_v1610,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ca-ParametersNRDC-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_BandCombination_v1610, powerClass_v1610),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_powerClass_v1610_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerClass-v1610"
		},
};
static const int asn_MAP_NR_BandCombination_v1610_oms_1[] = { 0, 1, 2, 3 };
static const ber_tlv_tag_t asn_DEF_NR_BandCombination_v1610_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_BandCombination_v1610_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* bandList-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* ca-ParametersNR-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* ca-ParametersNRDC-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* powerClass-v1610 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_BandCombination_v1610_specs_1 = {
	sizeof(struct NR_BandCombination_v1610),
	offsetof(struct NR_BandCombination_v1610, _asn_ctx),
	asn_MAP_NR_BandCombination_v1610_tag2el_1,
	4,	/* Count of tags in the map */
	asn_MAP_NR_BandCombination_v1610_oms_1,	/* Optional members */
	4, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_BandCombination_v1610 = {
	"BandCombination-v1610",
	"BandCombination-v1610",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_BandCombination_v1610_tags_1,
	sizeof(asn_DEF_NR_BandCombination_v1610_tags_1)
		/sizeof(asn_DEF_NR_BandCombination_v1610_tags_1[0]), /* 1 */
	asn_DEF_NR_BandCombination_v1610_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_BandCombination_v1610_tags_1)
		/sizeof(asn_DEF_NR_BandCombination_v1610_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_BandCombination_v1610_1,
	4,	/* Elements count */
	&asn_SPC_NR_BandCombination_v1610_specs_1	/* Additional specs */
};

