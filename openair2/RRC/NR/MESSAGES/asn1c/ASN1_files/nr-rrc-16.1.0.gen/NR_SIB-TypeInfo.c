/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_SIB-TypeInfo.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_valueTag_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 31)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_type_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  4,  4,  0,  15 }	/* (0..15,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_areaScope_constr_21 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_valueTag_constr_20 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_type_value2enum_2[] = {
	{ 0,	8,	"sibType2" },
	{ 1,	8,	"sibType3" },
	{ 2,	8,	"sibType4" },
	{ 3,	8,	"sibType5" },
	{ 4,	8,	"sibType6" },
	{ 5,	8,	"sibType7" },
	{ 6,	8,	"sibType8" },
	{ 7,	8,	"sibType9" },
	{ 8,	15,	"sibType10-v1610" },
	{ 9,	15,	"sibType11-v1610" },
	{ 10,	15,	"sibType12-v1610" },
	{ 11,	15,	"sibType13-v1610" },
	{ 12,	15,	"sibType14-v1610" },
	{ 13,	6,	"spare3" },
	{ 14,	6,	"spare2" },
	{ 15,	6,	"spare1" }
	/* This list is extensible */
};
static const unsigned int asn_MAP_NR_type_enum2value_2[] = {
	8,	/* sibType10-v1610(8) */
	9,	/* sibType11-v1610(9) */
	10,	/* sibType12-v1610(10) */
	11,	/* sibType13-v1610(11) */
	12,	/* sibType14-v1610(12) */
	0,	/* sibType2(0) */
	1,	/* sibType3(1) */
	2,	/* sibType4(2) */
	3,	/* sibType5(3) */
	4,	/* sibType6(4) */
	5,	/* sibType7(5) */
	6,	/* sibType8(6) */
	7,	/* sibType9(7) */
	15,	/* spare1(15) */
	14,	/* spare2(14) */
	13	/* spare3(13) */
	/* This list is extensible */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_type_specs_2 = {
	asn_MAP_NR_type_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_type_enum2value_2,	/* N => "tag"; sorted by N */
	16,	/* Number of elements in the maps */
	17,	/* Extensions before this member */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_type_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_type_2 = {
	"type",
	"type",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_type_tags_2,
	sizeof(asn_DEF_NR_type_tags_2)
		/sizeof(asn_DEF_NR_type_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_type_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_type_tags_2)
		/sizeof(asn_DEF_NR_type_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_type_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_type_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_areaScope_value2enum_21[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_areaScope_enum2value_21[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_areaScope_specs_21 = {
	asn_MAP_NR_areaScope_value2enum_21,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_areaScope_enum2value_21,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_areaScope_tags_21[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_areaScope_21 = {
	"areaScope",
	"areaScope",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_areaScope_tags_21,
	sizeof(asn_DEF_NR_areaScope_tags_21)
		/sizeof(asn_DEF_NR_areaScope_tags_21[0]) - 1, /* 1 */
	asn_DEF_NR_areaScope_tags_21,	/* Same as above */
	sizeof(asn_DEF_NR_areaScope_tags_21)
		/sizeof(asn_DEF_NR_areaScope_tags_21[0]), /* 2 */
	{ 0, &asn_PER_type_NR_areaScope_constr_21, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_areaScope_specs_21	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_SIB_TypeInfo_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_SIB_TypeInfo, type),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_type_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"type"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_SIB_TypeInfo, valueTag),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_valueTag_constr_20,  memb_NR_valueTag_constraint_1 },
		0, 0, /* No default value */
		"valueTag"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_SIB_TypeInfo, areaScope),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_areaScope_21,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"areaScope"
		},
};
static const int asn_MAP_NR_SIB_TypeInfo_oms_1[] = { 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_SIB_TypeInfo_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_SIB_TypeInfo_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* type */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* valueTag */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* areaScope */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_SIB_TypeInfo_specs_1 = {
	sizeof(struct NR_SIB_TypeInfo),
	offsetof(struct NR_SIB_TypeInfo, _asn_ctx),
	asn_MAP_NR_SIB_TypeInfo_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_SIB_TypeInfo_oms_1,	/* Optional members */
	2, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_SIB_TypeInfo = {
	"SIB-TypeInfo",
	"SIB-TypeInfo",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_SIB_TypeInfo_tags_1,
	sizeof(asn_DEF_NR_SIB_TypeInfo_tags_1)
		/sizeof(asn_DEF_NR_SIB_TypeInfo_tags_1[0]), /* 1 */
	asn_DEF_NR_SIB_TypeInfo_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_SIB_TypeInfo_tags_1)
		/sizeof(asn_DEF_NR_SIB_TypeInfo_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_SIB_TypeInfo_1,
	3,	/* Elements count */
	&asn_SPC_NR_SIB_TypeInfo_specs_1	/* Additional specs */
};

