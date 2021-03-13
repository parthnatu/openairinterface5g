/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SL-BWP-PoolConfigCommon-r16.h"

static int
memb_NR_sl_RxPool_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_NR_sl_TxPoolSelectedNormal_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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
	
	if((size >= 1 && size <= 8)) {
		/* Perform validation of the inner elements */
		return td->encoding_constraints.general_constraints(td, sptr, ctfailcb, app_key);
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_sl_RxPool_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_sl_TxPoolSelectedNormal_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_RxPool_r16_constr_2 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 4,  4,  1,  16 }	/* (SIZE(1..16)) */,
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_TxPoolSelectedNormal_r16_constr_4 CC_NOTUSED = {
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (SIZE(1..8)) */,
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_sl_RxPool_r16_2[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_ResourcePool_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_RxPool_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_RxPool_r16_specs_2 = {
	sizeof(struct NR_SL_BWP_PoolConfigCommon_r16__sl_RxPool_r16),
	offsetof(struct NR_SL_BWP_PoolConfigCommon_r16__sl_RxPool_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_RxPool_r16_2 = {
	"sl-RxPool-r16",
	"sl-RxPool-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_RxPool_r16_tags_2,
	sizeof(asn_DEF_NR_sl_RxPool_r16_tags_2)
		/sizeof(asn_DEF_NR_sl_RxPool_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_sl_RxPool_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_sl_RxPool_r16_tags_2)
		/sizeof(asn_DEF_NR_sl_RxPool_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_RxPool_r16_constr_2, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_RxPool_r16_2,
	1,	/* Single element */
	&asn_SPC_NR_sl_RxPool_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_sl_TxPoolSelectedNormal_r16_4[] = {
	{ ATF_POINTER, 0, 0,
		(ASN_TAG_CLASS_UNIVERSAL | (16 << 2)),
		0,
		&asn_DEF_NR_SL_ResourcePoolConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		""
		},
};
static const ber_tlv_tag_t asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static asn_SET_OF_specifics_t asn_SPC_NR_sl_TxPoolSelectedNormal_r16_specs_4 = {
	sizeof(struct NR_SL_BWP_PoolConfigCommon_r16__sl_TxPoolSelectedNormal_r16),
	offsetof(struct NR_SL_BWP_PoolConfigCommon_r16__sl_TxPoolSelectedNormal_r16, _asn_ctx),
	0,	/* XER encoding is XMLDelimitedItemList */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_TxPoolSelectedNormal_r16_4 = {
	"sl-TxPoolSelectedNormal-r16",
	"sl-TxPoolSelectedNormal-r16",
	&asn_OP_SEQUENCE_OF,
	asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4,
	sizeof(asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4)
		/sizeof(asn_DEF_NR_sl_TxPoolSelectedNormal_r16_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_TxPoolSelectedNormal_r16_constr_4, SEQUENCE_OF_constraint },
	asn_MBR_NR_sl_TxPoolSelectedNormal_r16_4,
	1,	/* Single element */
	&asn_SPC_NR_sl_TxPoolSelectedNormal_r16_specs_4	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_BWP_PoolConfigCommon_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_SL_BWP_PoolConfigCommon_r16, sl_RxPool_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_sl_RxPool_r16_2,
		0,
		{ 0, &asn_PER_memb_NR_sl_RxPool_r16_constr_2,  memb_NR_sl_RxPool_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-RxPool-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_BWP_PoolConfigCommon_r16, sl_TxPoolSelectedNormal_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_sl_TxPoolSelectedNormal_r16_4,
		0,
		{ 0, &asn_PER_memb_NR_sl_TxPoolSelectedNormal_r16_constr_4,  memb_NR_sl_TxPoolSelectedNormal_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-TxPoolSelectedNormal-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_BWP_PoolConfigCommon_r16, sl_TxPoolExceptional_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_ResourcePoolConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-TxPoolExceptional-r16"
		},
};
static const int asn_MAP_NR_SL_BWP_PoolConfigCommon_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_BWP_PoolConfigCommon_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-RxPool-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-TxPoolSelectedNormal-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-TxPoolExceptional-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_BWP_PoolConfigCommon_r16_specs_1 = {
	sizeof(struct NR_SL_BWP_PoolConfigCommon_r16),
	offsetof(struct NR_SL_BWP_PoolConfigCommon_r16, _asn_ctx),
	asn_MAP_NR_SL_BWP_PoolConfigCommon_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SL_BWP_PoolConfigCommon_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_BWP_PoolConfigCommon_r16 = {
	"SL-BWP-PoolConfigCommon-r16",
	"SL-BWP-PoolConfigCommon-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1,
	sizeof(asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_BWP_PoolConfigCommon_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_BWP_PoolConfigCommon_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_SL_BWP_PoolConfigCommon_r16_specs_1	/* Additional specs */
};

