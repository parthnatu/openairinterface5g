/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_RACH-ConfigGeneric.h"

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
static int
memb_NR_prach_ConfigurationFrameOffset_IAB_r16_constraint_38(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 63)) {
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
memb_NR_prach_ConfigurationSOffset_IAB_r16_constraint_38(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 39)) {
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
memb_NR_prach_ConfigurationIndex_v1610_constraint_38(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 256 && value <= 262)) {
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
memb_NR_prach_ConfigurationIndex_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 255)) {
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
memb_NR_msg1_FrequencyStart_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= 0 && value <= 274)) {
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
memb_NR_zeroCorrelationZoneConfig_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static int
memb_NR_preambleReceivedTargetPower_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
			asn_app_constraint_failed_f *ctfailcb, void *app_key) {
	long value;
	
	if(!sptr) {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: value not given (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
	
	value = *(const long *)sptr;
	
	if((value >= -202 && value <= -60)) {
		/* Constraint check succeeded */
		return 0;
	} else {
		ASN__CTFAIL(app_key, td, sptr,
			"%s: constraint failed (%s:%d)",
			td->name, __FILE__, __LINE__);
		return -1;
	}
}

static asn_per_constraints_t asn_PER_type_NR_msg1_FDM_constr_3 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_preambleTransMax_constr_11 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  10 }	/* (0..10) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_powerRampingStep_constr_23 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 2,  2,  0,  3 }	/* (0..3) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_ra_ResponseWindow_constr_28 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_prach_ConfigurationPeriodScaling_IAB_r16_constr_39 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  6 }	/* (0..6) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_ra_ResponseWindow_v1610_constr_49 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 1,  1,  0,  1 }	/* (0..1) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_prach_ConfigurationFrameOffset_IAB_r16_constr_47 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  63 }	/* (0..63) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_prach_ConfigurationSOffset_IAB_r16_constr_48 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 6,  6,  0,  39 }	/* (0..39) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_prach_ConfigurationIndex_v1610_constr_52 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  256,  262 }	/* (256..262) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_prach_ConfigurationIndex_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8,  0,  255 }	/* (0..255) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_msg1_FrequencyStart_constr_8 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 9,  9,  0,  274 }	/* (0..274) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_zeroCorrelationZoneConfig_constr_9 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 4,  4,  0,  15 }	/* (0..15) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_preambleReceivedTargetPower_constr_10 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 8,  8, -202, -60 }	/* (-202..-60) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static const asn_INTEGER_enum_map_t asn_MAP_NR_msg1_FDM_value2enum_3[] = {
	{ 0,	3,	"one" },
	{ 1,	3,	"two" },
	{ 2,	4,	"four" },
	{ 3,	5,	"eight" }
};
static const unsigned int asn_MAP_NR_msg1_FDM_enum2value_3[] = {
	3,	/* eight(3) */
	2,	/* four(2) */
	0,	/* one(0) */
	1	/* two(1) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_msg1_FDM_specs_3 = {
	asn_MAP_NR_msg1_FDM_value2enum_3,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_msg1_FDM_enum2value_3,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_msg1_FDM_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_msg1_FDM_3 = {
	"msg1-FDM",
	"msg1-FDM",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_msg1_FDM_tags_3,
	sizeof(asn_DEF_NR_msg1_FDM_tags_3)
		/sizeof(asn_DEF_NR_msg1_FDM_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_msg1_FDM_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_msg1_FDM_tags_3)
		/sizeof(asn_DEF_NR_msg1_FDM_tags_3[0]), /* 2 */
	{ 0, &asn_PER_type_NR_msg1_FDM_constr_3, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_msg1_FDM_specs_3	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_preambleTransMax_value2enum_11[] = {
	{ 0,	2,	"n3" },
	{ 1,	2,	"n4" },
	{ 2,	2,	"n5" },
	{ 3,	2,	"n6" },
	{ 4,	2,	"n7" },
	{ 5,	2,	"n8" },
	{ 6,	3,	"n10" },
	{ 7,	3,	"n20" },
	{ 8,	3,	"n50" },
	{ 9,	4,	"n100" },
	{ 10,	4,	"n200" }
};
static const unsigned int asn_MAP_NR_preambleTransMax_enum2value_11[] = {
	6,	/* n10(6) */
	9,	/* n100(9) */
	7,	/* n20(7) */
	10,	/* n200(10) */
	0,	/* n3(0) */
	1,	/* n4(1) */
	2,	/* n5(2) */
	8,	/* n50(8) */
	3,	/* n6(3) */
	4,	/* n7(4) */
	5	/* n8(5) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_preambleTransMax_specs_11 = {
	asn_MAP_NR_preambleTransMax_value2enum_11,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_preambleTransMax_enum2value_11,	/* N => "tag"; sorted by N */
	11,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_preambleTransMax_tags_11[] = {
	(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_preambleTransMax_11 = {
	"preambleTransMax",
	"preambleTransMax",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_preambleTransMax_tags_11,
	sizeof(asn_DEF_NR_preambleTransMax_tags_11)
		/sizeof(asn_DEF_NR_preambleTransMax_tags_11[0]) - 1, /* 1 */
	asn_DEF_NR_preambleTransMax_tags_11,	/* Same as above */
	sizeof(asn_DEF_NR_preambleTransMax_tags_11)
		/sizeof(asn_DEF_NR_preambleTransMax_tags_11[0]), /* 2 */
	{ 0, &asn_PER_type_NR_preambleTransMax_constr_11, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_preambleTransMax_specs_11	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_powerRampingStep_value2enum_23[] = {
	{ 0,	3,	"dB0" },
	{ 1,	3,	"dB2" },
	{ 2,	3,	"dB4" },
	{ 3,	3,	"dB6" }
};
static const unsigned int asn_MAP_NR_powerRampingStep_enum2value_23[] = {
	0,	/* dB0(0) */
	1,	/* dB2(1) */
	2,	/* dB4(2) */
	3	/* dB6(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_powerRampingStep_specs_23 = {
	asn_MAP_NR_powerRampingStep_value2enum_23,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_powerRampingStep_enum2value_23,	/* N => "tag"; sorted by N */
	4,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_powerRampingStep_tags_23[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_powerRampingStep_23 = {
	"powerRampingStep",
	"powerRampingStep",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_powerRampingStep_tags_23,
	sizeof(asn_DEF_NR_powerRampingStep_tags_23)
		/sizeof(asn_DEF_NR_powerRampingStep_tags_23[0]) - 1, /* 1 */
	asn_DEF_NR_powerRampingStep_tags_23,	/* Same as above */
	sizeof(asn_DEF_NR_powerRampingStep_tags_23)
		/sizeof(asn_DEF_NR_powerRampingStep_tags_23[0]), /* 2 */
	{ 0, &asn_PER_type_NR_powerRampingStep_constr_23, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_powerRampingStep_specs_23	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_ra_ResponseWindow_value2enum_28[] = {
	{ 0,	3,	"sl1" },
	{ 1,	3,	"sl2" },
	{ 2,	3,	"sl4" },
	{ 3,	3,	"sl8" },
	{ 4,	4,	"sl10" },
	{ 5,	4,	"sl20" },
	{ 6,	4,	"sl40" },
	{ 7,	4,	"sl80" }
};
static const unsigned int asn_MAP_NR_ra_ResponseWindow_enum2value_28[] = {
	0,	/* sl1(0) */
	4,	/* sl10(4) */
	1,	/* sl2(1) */
	5,	/* sl20(5) */
	2,	/* sl4(2) */
	6,	/* sl40(6) */
	3,	/* sl8(3) */
	7	/* sl80(7) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ra_ResponseWindow_specs_28 = {
	asn_MAP_NR_ra_ResponseWindow_value2enum_28,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ra_ResponseWindow_enum2value_28,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ra_ResponseWindow_tags_28[] = {
	(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ra_ResponseWindow_28 = {
	"ra-ResponseWindow",
	"ra-ResponseWindow",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ra_ResponseWindow_tags_28,
	sizeof(asn_DEF_NR_ra_ResponseWindow_tags_28)
		/sizeof(asn_DEF_NR_ra_ResponseWindow_tags_28[0]) - 1, /* 1 */
	asn_DEF_NR_ra_ResponseWindow_tags_28,	/* Same as above */
	sizeof(asn_DEF_NR_ra_ResponseWindow_tags_28)
		/sizeof(asn_DEF_NR_ra_ResponseWindow_tags_28[0]), /* 2 */
	{ 0, &asn_PER_type_NR_ra_ResponseWindow_constr_28, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ra_ResponseWindow_specs_28	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_prach_ConfigurationPeriodScaling_IAB_r16_value2enum_39[] = {
	{ 0,	4,	"scf1" },
	{ 1,	4,	"scf2" },
	{ 2,	4,	"scf4" },
	{ 3,	4,	"scf8" },
	{ 4,	5,	"scf16" },
	{ 5,	5,	"scf32" },
	{ 6,	5,	"scf64" }
};
static const unsigned int asn_MAP_NR_prach_ConfigurationPeriodScaling_IAB_r16_enum2value_39[] = {
	0,	/* scf1(0) */
	4,	/* scf16(4) */
	1,	/* scf2(1) */
	5,	/* scf32(5) */
	2,	/* scf4(2) */
	6,	/* scf64(6) */
	3	/* scf8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_prach_ConfigurationPeriodScaling_IAB_r16_specs_39 = {
	asn_MAP_NR_prach_ConfigurationPeriodScaling_IAB_r16_value2enum_39,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_prach_ConfigurationPeriodScaling_IAB_r16_enum2value_39,	/* N => "tag"; sorted by N */
	7,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_39 = {
	"prach-ConfigurationPeriodScaling-IAB-r16",
	"prach-ConfigurationPeriodScaling-IAB-r16",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39,
	sizeof(asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39)
		/sizeof(asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39[0]) - 1, /* 1 */
	asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39,	/* Same as above */
	sizeof(asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39)
		/sizeof(asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_tags_39[0]), /* 2 */
	{ 0, &asn_PER_type_NR_prach_ConfigurationPeriodScaling_IAB_r16_constr_39, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_prach_ConfigurationPeriodScaling_IAB_r16_specs_39	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_ra_ResponseWindow_v1610_value2enum_49[] = {
	{ 0,	4,	"sl60" },
	{ 1,	5,	"sl160" }
};
static const unsigned int asn_MAP_NR_ra_ResponseWindow_v1610_enum2value_49[] = {
	1,	/* sl160(1) */
	0	/* sl60(0) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_ra_ResponseWindow_v1610_specs_49 = {
	asn_MAP_NR_ra_ResponseWindow_v1610_value2enum_49,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_ra_ResponseWindow_v1610_enum2value_49,	/* N => "tag"; sorted by N */
	2,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_ra_ResponseWindow_v1610_tags_49[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ra_ResponseWindow_v1610_49 = {
	"ra-ResponseWindow-v1610",
	"ra-ResponseWindow-v1610",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_ra_ResponseWindow_v1610_tags_49,
	sizeof(asn_DEF_NR_ra_ResponseWindow_v1610_tags_49)
		/sizeof(asn_DEF_NR_ra_ResponseWindow_v1610_tags_49[0]) - 1, /* 1 */
	asn_DEF_NR_ra_ResponseWindow_v1610_tags_49,	/* Same as above */
	sizeof(asn_DEF_NR_ra_ResponseWindow_v1610_tags_49)
		/sizeof(asn_DEF_NR_ra_ResponseWindow_v1610_tags_49[0]), /* 2 */
	{ 0, &asn_PER_type_NR_ra_ResponseWindow_v1610_constr_49, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_ra_ResponseWindow_v1610_specs_49	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_38[] = {
	{ ATF_POINTER, 5, offsetof(struct NR_RACH_ConfigGeneric__ext1, prach_ConfigurationPeriodScaling_IAB_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_prach_ConfigurationPeriodScaling_IAB_r16_39,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"prach-ConfigurationPeriodScaling-IAB-r16"
		},
	{ ATF_POINTER, 4, offsetof(struct NR_RACH_ConfigGeneric__ext1, prach_ConfigurationFrameOffset_IAB_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_prach_ConfigurationFrameOffset_IAB_r16_constr_47,  memb_NR_prach_ConfigurationFrameOffset_IAB_r16_constraint_38 },
		0, 0, /* No default value */
		"prach-ConfigurationFrameOffset-IAB-r16"
		},
	{ ATF_POINTER, 3, offsetof(struct NR_RACH_ConfigGeneric__ext1, prach_ConfigurationSOffset_IAB_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_prach_ConfigurationSOffset_IAB_r16_constr_48,  memb_NR_prach_ConfigurationSOffset_IAB_r16_constraint_38 },
		0, 0, /* No default value */
		"prach-ConfigurationSOffset-IAB-r16"
		},
	{ ATF_POINTER, 2, offsetof(struct NR_RACH_ConfigGeneric__ext1, ra_ResponseWindow_v1610),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ra_ResponseWindow_v1610_49,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-ResponseWindow-v1610"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RACH_ConfigGeneric__ext1, prach_ConfigurationIndex_v1610),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_prach_ConfigurationIndex_v1610_constr_52,  memb_NR_prach_ConfigurationIndex_v1610_constraint_38 },
		0, 0, /* No default value */
		"prach-ConfigurationIndex-v1610"
		},
};
static const int asn_MAP_NR_ext1_oms_38[] = { 0, 1, 2, 3, 4 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_38[] = {
	(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_38[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prach-ConfigurationPeriodScaling-IAB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* prach-ConfigurationFrameOffset-IAB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* prach-ConfigurationSOffset-IAB-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* ra-ResponseWindow-v1610 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* prach-ConfigurationIndex-v1610 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_38 = {
	sizeof(struct NR_RACH_ConfigGeneric__ext1),
	offsetof(struct NR_RACH_ConfigGeneric__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_38,
	5,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_38,	/* Optional members */
	5, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_38 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_38,
	sizeof(asn_DEF_NR_ext1_tags_38)
		/sizeof(asn_DEF_NR_ext1_tags_38[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_38,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_38)
		/sizeof(asn_DEF_NR_ext1_tags_38[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_38,
	5,	/* Elements count */
	&asn_SPC_NR_ext1_specs_38	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_RACH_ConfigGeneric_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, prach_ConfigurationIndex),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_prach_ConfigurationIndex_constr_2,  memb_NR_prach_ConfigurationIndex_constraint_1 },
		0, 0, /* No default value */
		"prach-ConfigurationIndex"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, msg1_FDM),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_msg1_FDM_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"msg1-FDM"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, msg1_FrequencyStart),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_msg1_FrequencyStart_constr_8,  memb_NR_msg1_FrequencyStart_constraint_1 },
		0, 0, /* No default value */
		"msg1-FrequencyStart"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, zeroCorrelationZoneConfig),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_zeroCorrelationZoneConfig_constr_9,  memb_NR_zeroCorrelationZoneConfig_constraint_1 },
		0, 0, /* No default value */
		"zeroCorrelationZoneConfig"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, preambleReceivedTargetPower),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_preambleReceivedTargetPower_constr_10,  memb_NR_preambleReceivedTargetPower_constraint_1 },
		0, 0, /* No default value */
		"preambleReceivedTargetPower"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, preambleTransMax),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_preambleTransMax_11,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"preambleTransMax"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, powerRampingStep),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_powerRampingStep_23,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"powerRampingStep"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_RACH_ConfigGeneric, ra_ResponseWindow),
		(ASN_TAG_CLASS_CONTEXT | (7 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ra_ResponseWindow_28,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ra-ResponseWindow"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_RACH_ConfigGeneric, ext1),
		(ASN_TAG_CLASS_CONTEXT | (8 << 2)),
		0,
		&asn_DEF_NR_ext1_38,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_RACH_ConfigGeneric_oms_1[] = { 8 };
static const ber_tlv_tag_t asn_DEF_NR_RACH_ConfigGeneric_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_RACH_ConfigGeneric_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* prach-ConfigurationIndex */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* msg1-FDM */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* msg1-FrequencyStart */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* zeroCorrelationZoneConfig */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* preambleReceivedTargetPower */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* preambleTransMax */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 }, /* powerRampingStep */
    { (ASN_TAG_CLASS_CONTEXT | (7 << 2)), 7, 0, 0 }, /* ra-ResponseWindow */
    { (ASN_TAG_CLASS_CONTEXT | (8 << 2)), 8, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_RACH_ConfigGeneric_specs_1 = {
	sizeof(struct NR_RACH_ConfigGeneric),
	offsetof(struct NR_RACH_ConfigGeneric, _asn_ctx),
	asn_MAP_NR_RACH_ConfigGeneric_tag2el_1,
	9,	/* Count of tags in the map */
	asn_MAP_NR_RACH_ConfigGeneric_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	8,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_RACH_ConfigGeneric = {
	"RACH-ConfigGeneric",
	"RACH-ConfigGeneric",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_RACH_ConfigGeneric_tags_1,
	sizeof(asn_DEF_NR_RACH_ConfigGeneric_tags_1)
		/sizeof(asn_DEF_NR_RACH_ConfigGeneric_tags_1[0]), /* 1 */
	asn_DEF_NR_RACH_ConfigGeneric_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_RACH_ConfigGeneric_tags_1)
		/sizeof(asn_DEF_NR_RACH_ConfigGeneric_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_RACH_ConfigGeneric_1,
	9,	/* Elements count */
	&asn_SPC_NR_RACH_ConfigGeneric_specs_1	/* Additional specs */
};

