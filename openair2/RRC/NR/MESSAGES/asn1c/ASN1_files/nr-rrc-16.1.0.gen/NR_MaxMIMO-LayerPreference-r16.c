/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_MaxMIMO-LayerPreference-r16.h"

static int
memb_NR_reducedMIMO_LayersFR1_DL_r16_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_NR_reducedMIMO_LayersFR1_UL_r16_constraint_2(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
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
memb_NR_reducedMIMO_LayersFR2_DL_r16_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 8)) {
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
memb_NR_reducedMIMO_LayersFR2_UL_r16_constraint_5(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 1 && value <= 4)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_memb_NR_reducedMIMO_LayersFR1_DL_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_reducedMIMO_LayersFR1_UL_r16_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_reducedMIMO_LayersFR2_DL_r16_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_reducedMIMO_LayersFR2_UL_r16_constr_7 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  1,  4 }	/* (1..4) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_reducedMaxMIMO_LayersFR1_r16_2[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR1_r16, reducedMIMO_LayersFR1_DL_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_reducedMIMO_LayersFR1_DL_r16_constr_3,  memb_NR_reducedMIMO_LayersFR1_DL_r16_constraint_2 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR1-DL-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR1_r16, reducedMIMO_LayersFR1_UL_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_reducedMIMO_LayersFR1_UL_r16_constr_4,  memb_NR_reducedMIMO_LayersFR1_UL_r16_constraint_2 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR1-UL-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_reducedMaxMIMO_LayersFR1_r16_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMIMO-LayersFR1-DL-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMIMO-LayersFR1-UL-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_reducedMaxMIMO_LayersFR1_r16_specs_2 = {
	sizeof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR1_r16),
	offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR1_r16, _asn_ctx),
	asn_MAP_NR_reducedMaxMIMO_LayersFR1_r16_tag2el_2,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_2 = {
	"reducedMaxMIMO-LayersFR1-r16",
	"reducedMaxMIMO-LayersFR1-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2,
	sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2)
		/sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2)
		/sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_tags_2[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_reducedMaxMIMO_LayersFR1_r16_2,
	2,	/* Elements count */
	&asn_SPC_NR_reducedMaxMIMO_LayersFR1_r16_specs_2	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_reducedMaxMIMO_LayersFR2_r16_5[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR2_r16, reducedMIMO_LayersFR2_DL_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_reducedMIMO_LayersFR2_DL_r16_constr_6,  memb_NR_reducedMIMO_LayersFR2_DL_r16_constraint_5 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR2-DL-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR2_r16, reducedMIMO_LayersFR2_UL_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_reducedMIMO_LayersFR2_UL_r16_constr_7,  memb_NR_reducedMIMO_LayersFR2_UL_r16_constraint_5 },
		0, 0, /* No default value */
		"reducedMIMO-LayersFR2-UL-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_reducedMaxMIMO_LayersFR2_r16_tag2el_5[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMIMO-LayersFR2-DL-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMIMO-LayersFR2-UL-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_reducedMaxMIMO_LayersFR2_r16_specs_5 = {
	sizeof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR2_r16),
	offsetof(struct NR_MaxMIMO_LayerPreference_r16__reducedMaxMIMO_LayersFR2_r16, _asn_ctx),
	asn_MAP_NR_reducedMaxMIMO_LayersFR2_r16_tag2el_5,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_5 = {
	"reducedMaxMIMO-LayersFR2-r16",
	"reducedMaxMIMO-LayersFR2-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5,
	sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5)
		/sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5[0]) - 1, /* 1 */
	asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5,	/* Same as above */
	sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5)
		/sizeof(asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_tags_5[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_reducedMaxMIMO_LayersFR2_r16_5,
	2,	/* Elements count */
	&asn_SPC_NR_reducedMaxMIMO_LayersFR2_r16_specs_5	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_MaxMIMO_LayerPreference_r16_1[] = {
	{ ATF_POINTER, 2, offsetof(struct NR_MaxMIMO_LayerPreference_r16, reducedMaxMIMO_LayersFR1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_reducedMaxMIMO_LayersFR1_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxMIMO-LayersFR1-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_MaxMIMO_LayerPreference_r16, reducedMaxMIMO_LayersFR2_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_reducedMaxMIMO_LayersFR2_r16_5,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reducedMaxMIMO-LayersFR2-r16"
		},
};
static const int asn_MAP_NR_MaxMIMO_LayerPreference_r16_oms_1[] = { 0, 1 };
static const ber_tlv_tag_t asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_MaxMIMO_LayerPreference_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* reducedMaxMIMO-LayersFR1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* reducedMaxMIMO-LayersFR2-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_MaxMIMO_LayerPreference_r16_specs_1 = {
	sizeof(struct NR_MaxMIMO_LayerPreference_r16),
	offsetof(struct NR_MaxMIMO_LayerPreference_r16, _asn_ctx),
	asn_MAP_NR_MaxMIMO_LayerPreference_r16_tag2el_1,
	2,	/* Count of tags in the map */
	asn_MAP_NR_MaxMIMO_LayerPreference_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_MaxMIMO_LayerPreference_r16 = {
	"MaxMIMO-LayerPreference-r16",
	"MaxMIMO-LayerPreference-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1,
	sizeof(asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1)
		/sizeof(asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1)
		/sizeof(asn_DEF_NR_MaxMIMO_LayerPreference_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_MaxMIMO_LayerPreference_r16_1,
	2,	/* Elements count */
	&asn_SPC_NR_MaxMIMO_LayerPreference_r16_specs_1	/* Additional specs */
};

