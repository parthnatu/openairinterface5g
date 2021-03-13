/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_UL-DataSplitThreshold.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_UL_DataSplitThreshold_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 5,  5,  0,  31 }	/* (0..31) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_UL_DataSplitThreshold_value2enum_1[] = {
	{ 0,	2,	"b0" },
	{ 1,	4,	"b100" },
	{ 2,	4,	"b200" },
	{ 3,	4,	"b400" },
	{ 4,	4,	"b800" },
	{ 5,	5,	"b1600" },
	{ 6,	5,	"b3200" },
	{ 7,	5,	"b6400" },
	{ 8,	6,	"b12800" },
	{ 9,	6,	"b25600" },
	{ 10,	6,	"b51200" },
	{ 11,	7,	"b102400" },
	{ 12,	7,	"b204800" },
	{ 13,	7,	"b409600" },
	{ 14,	7,	"b819200" },
	{ 15,	8,	"b1228800" },
	{ 16,	8,	"b1638400" },
	{ 17,	8,	"b2457600" },
	{ 18,	8,	"b3276800" },
	{ 19,	8,	"b4096000" },
	{ 20,	8,	"b4915200" },
	{ 21,	8,	"b5734400" },
	{ 22,	8,	"b6553600" },
	{ 23,	8,	"infinity" },
	{ 24,	6,	"spare8" },
	{ 25,	6,	"spare7" },
	{ 26,	6,	"spare6" },
	{ 27,	6,	"spare5" },
	{ 28,	6,	"spare4" },
	{ 29,	6,	"spare3" },
	{ 30,	6,	"spare2" },
	{ 31,	6,	"spare1" }
};
static const unsigned int asn_MAP_NR_UL_DataSplitThreshold_enum2value_1[] = {
	0,	/* b0(0) */
	1,	/* b100(1) */
	11,	/* b102400(11) */
	15,	/* b1228800(15) */
	8,	/* b12800(8) */
	5,	/* b1600(5) */
	16,	/* b1638400(16) */
	2,	/* b200(2) */
	12,	/* b204800(12) */
	17,	/* b2457600(17) */
	9,	/* b25600(9) */
	6,	/* b3200(6) */
	18,	/* b3276800(18) */
	3,	/* b400(3) */
	13,	/* b409600(13) */
	19,	/* b4096000(19) */
	20,	/* b4915200(20) */
	10,	/* b51200(10) */
	21,	/* b5734400(21) */
	7,	/* b6400(7) */
	22,	/* b6553600(22) */
	4,	/* b800(4) */
	14,	/* b819200(14) */
	23,	/* infinity(23) */
	31,	/* spare1(31) */
	30,	/* spare2(30) */
	29,	/* spare3(29) */
	28,	/* spare4(28) */
	27,	/* spare5(27) */
	26,	/* spare6(26) */
	25,	/* spare7(25) */
	24	/* spare8(24) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_UL_DataSplitThreshold_specs_1 = {
	asn_MAP_NR_UL_DataSplitThreshold_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_UL_DataSplitThreshold_enum2value_1,	/* N => "tag"; sorted by N */
	32,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_UL_DataSplitThreshold_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_UL_DataSplitThreshold = {
	"UL-DataSplitThreshold",
	"UL-DataSplitThreshold",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_UL_DataSplitThreshold_tags_1,
	sizeof(asn_DEF_NR_UL_DataSplitThreshold_tags_1)
		/sizeof(asn_DEF_NR_UL_DataSplitThreshold_tags_1[0]), /* 1 */
	asn_DEF_NR_UL_DataSplitThreshold_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_UL_DataSplitThreshold_tags_1)
		/sizeof(asn_DEF_NR_UL_DataSplitThreshold_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_UL_DataSplitThreshold_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_UL_DataSplitThreshold_specs_1	/* Additional specs */
};

