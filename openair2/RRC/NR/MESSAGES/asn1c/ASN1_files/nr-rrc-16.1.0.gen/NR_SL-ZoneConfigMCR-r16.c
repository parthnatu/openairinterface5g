/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SL-ZoneConfigMCR-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_sl_ZoneConfigMCR_Index_r16_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 15)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_sl_TransRange_r16_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  30 }	/* (0..30) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_sl_ZoneConfigMCR_Index_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_sl_TransRange_r16_value2enum_3[] = {
	{ 0,	3,	"m20" },
	{ 1,	3,	"m50" },
	{ 2,	3,	"m80" },
	{ 3,	4,	"m100" },
	{ 4,	4,	"m120" },
	{ 5,	4,	"m150" },
	{ 6,	4,	"m180" },
	{ 7,	4,	"m200" },
	{ 8,	4,	"m220" },
	{ 9,	4,	"m250" },
	{ 10,	4,	"m270" },
	{ 11,	4,	"m300" },
	{ 12,	4,	"m350" },
	{ 13,	4,	"m370" },
	{ 14,	4,	"m400" },
	{ 15,	4,	"m420" },
	{ 16,	4,	"m450" },
	{ 17,	4,	"m480" },
	{ 18,	4,	"m500" },
	{ 19,	4,	"m550" },
	{ 20,	4,	"m600" },
	{ 21,	4,	"m700" },
	{ 22,	5,	"m1000" },
	{ 23,	6,	"spare8" },
	{ 24,	6,	"spare7" },
	{ 25,	6,	"spare6" },
	{ 26,	6,	"spare5" },
	{ 27,	6,	"spare4" },
	{ 28,	6,	"spare3" },
	{ 29,	6,	"spare2" },
	{ 30,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_sl_TransRange_r16_enum2value_3[] = {
	3,	/* m100(3) */
	22,	/* m1000(22) */
	4,	/* m120(4) */
	5,	/* m150(5) */
	6,	/* m180(6) */
	0,	/* m20(0) */
	7,	/* m200(7) */
	8,	/* m220(8) */
	9,	/* m250(9) */
	10,	/* m270(10) */
	11,	/* m300(11) */
	12,	/* m350(12) */
	13,	/* m370(13) */
	14,	/* m400(14) */
	15,	/* m420(15) */
	16,	/* m450(16) */
	17,	/* m480(17) */
	1,	/* m50(1) */
	18,	/* m500(18) */
	19,	/* m550(19) */
	20,	/* m600(20) */
	21,	/* m700(21) */
	2,	/* m80(2) */
	30,	/* spare1(30) */
	29,	/* spare2(29) */
	28,	/* spare3(28) */
	27,	/* spare4(27) */
	26,	/* spare5(26) */
	25,	/* spare6(25) */
	24,	/* spare7(24) */
	23	/* spare8(23) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_sl_TransRange_r16_specs_3 = {
	asn_MAP_NR_sl_TransRange_r16_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_sl_TransRange_r16_enum2value_3,	/* N => "tag"; sorted by N */
	31,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_sl_TransRange_r16_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_sl_TransRange_r16_3 = {
	"sl-TransRange-r16",
	"sl-TransRange-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_sl_TransRange_r16_tags_3,
	sizeof(asn_DEF_NR_sl_TransRange_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_TransRange_r16_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_sl_TransRange_r16_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_sl_TransRange_r16_tags_3)
		/sizeof(asn_DEF_NR_sl_TransRange_r16_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_sl_TransRange_r16_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_sl_TransRange_r16_specs_3	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SL_ZoneConfigMCR_r16_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SL_ZoneConfigMCR_r16, sl_ZoneConfigMCR_Index_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_sl_ZoneConfigMCR_Index_r16_constr_2,  memb_NR_sl_ZoneConfigMCR_Index_r16_constraint_1 },
		0, 0, /* No default value */
		"sl-ZoneConfigMCR-Index-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SL_ZoneConfigMCR_r16, sl_TransRange_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_sl_TransRange_r16_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-TransRange-r16"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SL_ZoneConfigMCR_r16, sl_ZoneConfig_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_SL_ZoneConfig_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"sl-ZoneConfig-r16"
		},
};
static const int asn_MAP_NR_SL_ZoneConfigMCR_r16_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SL_ZoneConfigMCR_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* sl-ZoneConfigMCR-Index-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* sl-TransRange-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* sl-ZoneConfig-r16 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SL_ZoneConfigMCR_r16_specs_1 = {
	sizeof(struct NR_SL_ZoneConfigMCR_r16),
	offsetof(struct NR_SL_ZoneConfigMCR_r16, _asn_ctx),
	asn_MAP_NR_SL_ZoneConfigMCR_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SL_ZoneConfigMCR_r16_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	3,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SL_ZoneConfigMCR_r16 = {
	"SL-ZoneConfigMCR-r16",
	"SL-ZoneConfigMCR-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1,
	sizeof(asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1)
		/sizeof(asn_DEF_NR_SL_ZoneConfigMCR_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SL_ZoneConfigMCR_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_SL_ZoneConfigMCR_r16_specs_1	/* Additional specs */
};

