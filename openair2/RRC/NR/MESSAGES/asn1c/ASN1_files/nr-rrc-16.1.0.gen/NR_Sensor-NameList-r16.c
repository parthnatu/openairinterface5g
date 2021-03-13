/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_Sensor-NameList-r16.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static asn_per_constraints_t asn_PER_type_NR_measUncomBarPre_r16_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_measUeSpeed_constr_4 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_measUeOrientation_constr_6 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 0,  0,  0,  0 }	/* (0..0) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_measUncomBarPre_r16_value2enum_2[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_measUncomBarPre_r16_enum2value_2[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_measUncomBarPre_r16_specs_2 = {
	asn_MAP_NR_measUncomBarPre_r16_value2enum_2,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_measUncomBarPre_r16_enum2value_2,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_measUncomBarPre_r16_tags_2[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measUncomBarPre_r16_2 = {
	"measUncomBarPre-r16",
	"measUncomBarPre-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_measUncomBarPre_r16_tags_2,
	sizeof(asn_DEF_NR_measUncomBarPre_r16_tags_2)
		/sizeof(asn_DEF_NR_measUncomBarPre_r16_tags_2[0]) - 1, /* 1 */
	asn_DEF_NR_measUncomBarPre_r16_tags_2,	/* Same as above */
	sizeof(asn_DEF_NR_measUncomBarPre_r16_tags_2)
		/sizeof(asn_DEF_NR_measUncomBarPre_r16_tags_2[0]), /* 2 */
	{ 0, &asn_PER_type_NR_measUncomBarPre_r16_constr_2, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_measUncomBarPre_r16_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_measUeSpeed_value2enum_4[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_measUeSpeed_enum2value_4[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_measUeSpeed_specs_4 = {
	asn_MAP_NR_measUeSpeed_value2enum_4,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_measUeSpeed_enum2value_4,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_measUeSpeed_tags_4[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measUeSpeed_4 = {
	"measUeSpeed",
	"measUeSpeed",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_measUeSpeed_tags_4,
	sizeof(asn_DEF_NR_measUeSpeed_tags_4)
		/sizeof(asn_DEF_NR_measUeSpeed_tags_4[0]) - 1, /* 1 */
	asn_DEF_NR_measUeSpeed_tags_4,	/* Same as above */
	sizeof(asn_DEF_NR_measUeSpeed_tags_4)
		/sizeof(asn_DEF_NR_measUeSpeed_tags_4[0]), /* 2 */
	{ 0, &asn_PER_type_NR_measUeSpeed_constr_4, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_measUeSpeed_specs_4	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_measUeOrientation_value2enum_6[] = {
	{ 0,	4,	"true" }
};
static const unsigned int asn_MAP_NR_measUeOrientation_enum2value_6[] = {
	0	/* true(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_measUeOrientation_specs_6 = {
	asn_MAP_NR_measUeOrientation_value2enum_6,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_measUeOrientation_enum2value_6,	/* N => "tag"; sorted by N */
	1,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_measUeOrientation_tags_6[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_measUeOrientation_6 = {
	"measUeOrientation",
	"measUeOrientation",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_measUeOrientation_tags_6,
	sizeof(asn_DEF_NR_measUeOrientation_tags_6)
		/sizeof(asn_DEF_NR_measUeOrientation_tags_6[0]) - 1, /* 1 */
	asn_DEF_NR_measUeOrientation_tags_6,	/* Same as above */
	sizeof(asn_DEF_NR_measUeOrientation_tags_6)
		/sizeof(asn_DEF_NR_measUeOrientation_tags_6[0]), /* 2 */
	{ 0, &asn_PER_type_NR_measUeOrientation_constr_6, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_measUeOrientation_specs_6	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_Sensor_NameList_r16_1[] = {
	{ ATF_POINTER, 3, offsetof(struct NR_Sensor_NameList_r16, measUncomBarPre_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_measUncomBarPre_r16_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measUncomBarPre-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_Sensor_NameList_r16, measUeSpeed),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_measUeSpeed_4,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measUeSpeed"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_Sensor_NameList_r16, measUeOrientation),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_measUeOrientation_6,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"measUeOrientation"
		},
};
static const int asn_MAP_NR_Sensor_NameList_r16_oms_1[] = { 0, 1, 2 };
static const ber_tlv_tag_t asn_DEF_NR_Sensor_NameList_r16_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_Sensor_NameList_r16_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* measUncomBarPre-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* measUeSpeed */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* measUeOrientation */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_Sensor_NameList_r16_specs_1 = {
	sizeof(struct NR_Sensor_NameList_r16),
	offsetof(struct NR_Sensor_NameList_r16, _asn_ctx),
	asn_MAP_NR_Sensor_NameList_r16_tag2el_1,
	3,	/* Count of tags in the map */
	asn_MAP_NR_Sensor_NameList_r16_oms_1,	/* Optional members */
	3, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_Sensor_NameList_r16 = {
	"Sensor-NameList-r16",
	"Sensor-NameList-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_Sensor_NameList_r16_tags_1,
	sizeof(asn_DEF_NR_Sensor_NameList_r16_tags_1)
		/sizeof(asn_DEF_NR_Sensor_NameList_r16_tags_1[0]), /* 1 */
	asn_DEF_NR_Sensor_NameList_r16_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_Sensor_NameList_r16_tags_1)
		/sizeof(asn_DEF_NR_Sensor_NameList_r16_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_Sensor_NameList_r16_1,
	3,	/* Elements count */
	&asn_SPC_NR_Sensor_NameList_r16_specs_1	/* Additional specs */
};

