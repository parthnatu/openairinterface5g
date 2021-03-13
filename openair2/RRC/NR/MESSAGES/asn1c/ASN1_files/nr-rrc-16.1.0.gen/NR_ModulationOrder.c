/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_ModulationOrder.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
asn_per_constraints_t asn_PER_type_NR_ModulationOrder_constr_1 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  5 }	/* (0..5) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_ModulationOrder_value2enum_1[] = {
	{ 0,	11,	"bpsk-halfpi" },
	{ 1,	4,	"bpsk" },
	{ 2,	4,	"qpsk" },
	{ 3,	5,	"qam16" },
	{ 4,	5,	"qam64" },
	{ 5,	6,	"qam256" }
};
static const unsigned int asn_MAP_NR_ModulationOrder_enum2value_1[] = {
	1,	/* bpsk(1) */
	0,	/* bpsk-halfpi(0) */
	3,	/* qam16(3) */
	5,	/* qam256(5) */
	4,	/* qam64(4) */
	2	/* qpsk(2) */
};
const asn_INTEGER_specifics_t asn_SPC_NR_ModulationOrder_specs_1 = {
	asn_MAP_NR_ModulationOrder_value2enum_1,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ModulationOrder_enum2value_1,	/* N => "tag"; sorted by N */
	6,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ModulationOrder_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
asn_TYPE_descriptor_t asn_DEF_NR_ModulationOrder = {
	"ModulationOrder",
	"ModulationOrder",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ModulationOrder_tags_1,
	sizeof(asn_DEF_NR_ModulationOrder_tags_1)
		/sizeof(asn_DEF_NR_ModulationOrder_tags_1[0]), /* 1 */
	asn_DEF_NR_ModulationOrder_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_ModulationOrder_tags_1)
		/sizeof(asn_DEF_NR_ModulationOrder_tags_1[0]), /* 1 */
	{ 0, &asn_PER_type_NR_ModulationOrder_constr_1, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ModulationOrder_specs_1	/* Additional specs */
};

