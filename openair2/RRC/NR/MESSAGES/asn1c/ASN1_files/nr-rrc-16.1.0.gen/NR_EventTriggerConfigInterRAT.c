/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#include "NR_EventTriggerConfigInterRAT.h"

/*
 * This type is implemented using NativeEnumerated,
 * so here we adjust the DEF accordingly.
 */
static int
memb_NR_maxReportCells_constraint_1(const asn_TYPE_descriptor_t *td, const void *sptr,
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

static asn_per_constraints_t asn_PER_type_NR_eventId_constr_2 CC_NOTUSED = {
	{ APC_CONSTRAINED | APC_EXTENSIBLE,  1,  1,  0,  1 }	/* (0..1,...) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_type_NR_reportAmount_constr_33 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  0,  7 }	/* (0..7) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_per_constraints_t asn_PER_memb_NR_maxReportCells_constr_43 CC_NOTUSED = {
	{ APC_CONSTRAINED,	 3,  3,  1,  8 }	/* (1..8) */,
	{ APC_UNCONSTRAINED,	-1, -1,  0,  0 },
	0, 0	/* No PER value map */
};
static asn_TYPE_member_t asn_MBR_NR_eventB1_3[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1, b1_ThresholdEUTRA),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantityEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-ThresholdEUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventB1_tags_3[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventB1_tag2el_3[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b1-ThresholdEUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventB1_specs_3 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB1, _asn_ctx),
	asn_MAP_NR_eventB1_tag2el_3,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventB1_3 = {
	"eventB1",
	"eventB1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventB1_tags_3,
	sizeof(asn_DEF_NR_eventB1_tags_3)
		/sizeof(asn_DEF_NR_eventB1_tags_3[0]) - 1, /* 1 */
	asn_DEF_NR_eventB1_tags_3,	/* Same as above */
	sizeof(asn_DEF_NR_eventB1_tags_3)
		/sizeof(asn_DEF_NR_eventB1_tags_3[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eventB1_3,
	4,	/* Elements count */
	&asn_SPC_NR_eventB1_specs_3	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eventB2_9[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, b2_Threshold1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold1"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, b2_Threshold2EUTRA),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantityEUTRA,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2EUTRA"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, reportOnLeave),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, hysteresis),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, timeToTrigger),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventB2_tags_9[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventB2_tag2el_9[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b2-Threshold2EUTRA */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportOnLeave */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hysteresis */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* timeToTrigger */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventB2_specs_9 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId__eventB2, _asn_ctx),
	asn_MAP_NR_eventB2_tag2el_9,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventB2_9 = {
	"eventB2",
	"eventB2",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventB2_tags_9,
	sizeof(asn_DEF_NR_eventB2_tags_9)
		/sizeof(asn_DEF_NR_eventB2_tags_9[0]) - 1, /* 1 */
	asn_DEF_NR_eventB2_tags_9,	/* Same as above */
	sizeof(asn_DEF_NR_eventB2_tags_9)
		/sizeof(asn_DEF_NR_eventB2_tags_9[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eventB2_9,
	5,	/* Elements count */
	&asn_SPC_NR_eventB2_specs_9	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eventB1_UTRA_FDD_r16_18[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16, b1_ThresholdUTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantityUTRA_FDD_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b1-ThresholdUTRA-FDD-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16, reportOnLeave_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16, hysteresis_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16, timeToTrigger_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18[] = {
	(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventB1_UTRA_FDD_r16_tag2el_18[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b1-ThresholdUTRA-FDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* reportOnLeave-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* hysteresis-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 } /* timeToTrigger-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventB1_UTRA_FDD_r16_specs_18 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB1_UTRA_FDD_r16, _asn_ctx),
	asn_MAP_NR_eventB1_UTRA_FDD_r16_tag2el_18,
	4,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	4,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventB1_UTRA_FDD_r16_18 = {
	"eventB1-UTRA-FDD-r16",
	"eventB1-UTRA-FDD-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18,
	sizeof(asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18)
		/sizeof(asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18[0]) - 1, /* 1 */
	asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18,	/* Same as above */
	sizeof(asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18)
		/sizeof(asn_DEF_NR_eventB1_UTRA_FDD_r16_tags_18[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eventB1_UTRA_FDD_r16_18,
	4,	/* Elements count */
	&asn_SPC_NR_eventB1_UTRA_FDD_r16_specs_18	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eventB2_UTRA_FDD_r16_24[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, b2_Threshold1_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold1-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, b2_Threshold2UTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_MeasTriggerQuantityUTRA_FDD_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"b2-Threshold2UTRA-FDD-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, reportOnLeave_r16),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_BOOLEAN,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportOnLeave-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, hysteresis_r16),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_Hysteresis,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"hysteresis-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, timeToTrigger_r16),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_TimeToTrigger,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"timeToTrigger-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24[] = {
	(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventB2_UTRA_FDD_r16_tag2el_24[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* b2-Threshold1-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* b2-Threshold2UTRA-FDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportOnLeave-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* hysteresis-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 } /* timeToTrigger-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_eventB2_UTRA_FDD_r16_specs_24 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1__eventB2_UTRA_FDD_r16, _asn_ctx),
	asn_MAP_NR_eventB2_UTRA_FDD_r16_tag2el_24,
	5,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	5,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventB2_UTRA_FDD_r16_24 = {
	"eventB2-UTRA-FDD-r16",
	"eventB2-UTRA-FDD-r16",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24,
	sizeof(asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24)
		/sizeof(asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24[0]) - 1, /* 1 */
	asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24,	/* Same as above */
	sizeof(asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24)
		/sizeof(asn_DEF_NR_eventB2_UTRA_FDD_r16_tags_24[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_eventB2_UTRA_FDD_r16_24,
	5,	/* Elements count */
	&asn_SPC_NR_eventB2_UTRA_FDD_r16_specs_24	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_17[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1, eventB1_UTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_eventB1_UTRA_FDD_r16_18,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB1-UTRA-FDD-r16"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1, eventB2_UTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_eventB2_UTRA_FDD_r16_24,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB2-UTRA-FDD-r16"
		},
};
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_17[] = {
	(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_17[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventB1-UTRA-FDD-r16 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 } /* eventB2-UTRA-FDD-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_17 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId__ext1),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_17,
	2,	/* Count of tags in the map */
	0, 0, 0,	/* Optional elements (not needed) */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_17 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_17,
	sizeof(asn_DEF_NR_ext1_tags_17)
		/sizeof(asn_DEF_NR_ext1_tags_17[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_17,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_17)
		/sizeof(asn_DEF_NR_ext1_tags_17[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_17,
	2,	/* Elements count */
	&asn_SPC_NR_ext1_specs_17	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_eventId_2[] = {
	{ ATF_POINTER, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId, choice.eventB1),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		0,
		&asn_DEF_NR_eventB1_3,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB1"
		},
	{ ATF_POINTER, 0, offsetof(struct NR_EventTriggerConfigInterRAT__eventId, choice.eventB2),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		0,
		&asn_DEF_NR_eventB2_9,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventB2"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_EventTriggerConfigInterRAT__eventId, choice.ext1),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		0,
		&asn_DEF_NR_ext1_17,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const asn_TYPE_tag2member_t asn_MAP_NR_eventId_tag2el_2[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventB1 */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* eventB2 */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 } /* ext1 */
};
static asn_CHOICE_specifics_t asn_SPC_NR_eventId_specs_2 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__eventId),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId, _asn_ctx),
	offsetof(struct NR_EventTriggerConfigInterRAT__eventId, present),
	sizeof(((struct NR_EventTriggerConfigInterRAT__eventId *)0)->present),
	asn_MAP_NR_eventId_tag2el_2,
	3,	/* Count of tags in the map */
	0, 0,
	2	/* Extensions start */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_eventId_2 = {
	"eventId",
	"eventId",
	&asn_OP_CHOICE,
	0,	/* No effective tags (pointer) */
	0,	/* No effective tags (count) */
	0,	/* No tags (pointer) */
	0,	/* No tags (count) */
	{ 0, &asn_PER_type_NR_eventId_constr_2, CHOICE_constraint },
	asn_MBR_NR_eventId_2,
	3,	/* Elements count */
	&asn_SPC_NR_eventId_specs_2	/* Additional specs */
};

static const asn_INTEGER_enum_map_t asn_MAP_NR_reportAmount_value2enum_33[] = {
	{ 0,	2,	"r1" },
	{ 1,	2,	"r2" },
	{ 2,	2,	"r4" },
	{ 3,	2,	"r8" },
	{ 4,	3,	"r16" },
	{ 5,	3,	"r32" },
	{ 6,	3,	"r64" },
	{ 7,	8,	"infinity" }
};
static const unsigned int asn_MAP_NR_reportAmount_enum2value_33[] = {
	7,	/* infinity(7) */
	0,	/* r1(0) */
	4,	/* r16(4) */
	1,	/* r2(1) */
	5,	/* r32(5) */
	2,	/* r4(2) */
	6,	/* r64(6) */
	3	/* r8(3) */
};
static const asn_INTEGER_specifics_t asn_SPC_NR_reportAmount_specs_33 = {
	asn_MAP_NR_reportAmount_value2enum_33,	/* "tag" => N; sorted by tag */
	asn_MAP_NR_reportAmount_enum2value_33,	/* N => "tag"; sorted by N */
	8,	/* Number of elements in the maps */
	0,	/* Enumeration is not extensible */
	1,	/* Strict enumeration */
	0,	/* Native long size */
	0
};
static const ber_tlv_tag_t asn_DEF_NR_reportAmount_tags_33[] = {
	(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (10 << 2))
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_reportAmount_33 = {
	"reportAmount",
	"reportAmount",
	&asn_OP_NativeEnumerated,
	asn_DEF_NR_reportAmount_tags_33,
	sizeof(asn_DEF_NR_reportAmount_tags_33)
		/sizeof(asn_DEF_NR_reportAmount_tags_33[0]) - 1, /* 1 */
	asn_DEF_NR_reportAmount_tags_33,	/* Same as above */
	sizeof(asn_DEF_NR_reportAmount_tags_33)
		/sizeof(asn_DEF_NR_reportAmount_tags_33[0]), /* 2 */
	{ 0, &asn_PER_type_NR_reportAmount_constr_33, NativeEnumerated_constraint },
	0, 0,	/* Defined elsewhere */
	&asn_SPC_NR_reportAmount_specs_33	/* Additional specs */
};

static asn_TYPE_member_t asn_MBR_NR_ext1_45[] = {
	{ ATF_POINTER, 1, offsetof(struct NR_EventTriggerConfigInterRAT__ext1, reportQuantityUTRA_FDD_r16),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasReportQuantityUTRA_FDD_r16,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportQuantityUTRA-FDD-r16"
		},
};
static const int asn_MAP_NR_ext1_oms_45[] = { 0 };
static const ber_tlv_tag_t asn_DEF_NR_ext1_tags_45[] = {
	(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_ext1_tag2el_45[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 } /* reportQuantityUTRA-FDD-r16 */
};
static asn_SEQUENCE_specifics_t asn_SPC_NR_ext1_specs_45 = {
	sizeof(struct NR_EventTriggerConfigInterRAT__ext1),
	offsetof(struct NR_EventTriggerConfigInterRAT__ext1, _asn_ctx),
	asn_MAP_NR_ext1_tag2el_45,
	1,	/* Count of tags in the map */
	asn_MAP_NR_ext1_oms_45,	/* Optional members */
	1, 0,	/* Root/Additions */
	-1,	/* First extension addition */
};
static /* Use -fall-defs-global to expose */
asn_TYPE_descriptor_t asn_DEF_NR_ext1_45 = {
	"ext1",
	"ext1",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_ext1_tags_45,
	sizeof(asn_DEF_NR_ext1_tags_45)
		/sizeof(asn_DEF_NR_ext1_tags_45[0]) - 1, /* 1 */
	asn_DEF_NR_ext1_tags_45,	/* Same as above */
	sizeof(asn_DEF_NR_ext1_tags_45)
		/sizeof(asn_DEF_NR_ext1_tags_45[0]), /* 2 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_ext1_45,
	1,	/* Elements count */
	&asn_SPC_NR_ext1_specs_45	/* Additional specs */
};

asn_TYPE_member_t asn_MBR_NR_EventTriggerConfigInterRAT_1[] = {
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, eventId),
		(ASN_TAG_CLASS_CONTEXT | (0 << 2)),
		+1,	/* EXPLICIT tag at current level */
		&asn_DEF_NR_eventId_2,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"eventId"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, rsType),
		(ASN_TAG_CLASS_CONTEXT | (1 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_NR_RS_Type,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"rsType"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, reportInterval),
		(ASN_TAG_CLASS_CONTEXT | (2 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_ReportInterval,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportInterval"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, reportAmount),
		(ASN_TAG_CLASS_CONTEXT | (3 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_reportAmount_33,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportAmount"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, reportQuantity),
		(ASN_TAG_CLASS_CONTEXT | (4 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NR_MeasReportQuantity,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"reportQuantity"
		},
	{ ATF_NOFLAGS, 0, offsetof(struct NR_EventTriggerConfigInterRAT, maxReportCells),
		(ASN_TAG_CLASS_CONTEXT | (5 << 2)),
		-1,	/* IMPLICIT tag at current level */
		&asn_DEF_NativeInteger,
		0,
		{ 0, &asn_PER_memb_NR_maxReportCells_constr_43,  memb_NR_maxReportCells_constraint_1 },
		0, 0, /* No default value */
		"maxReportCells"
		},
	{ ATF_POINTER, 1, offsetof(struct NR_EventTriggerConfigInterRAT, ext1),
		(ASN_TAG_CLASS_CONTEXT | (6 << 2)),
		0,
		&asn_DEF_NR_ext1_45,
		0,
		{ 0, 0, 0 },
		0, 0, /* No default value */
		"ext1"
		},
};
static const int asn_MAP_NR_EventTriggerConfigInterRAT_oms_1[] = { 6 };
static const ber_tlv_tag_t asn_DEF_NR_EventTriggerConfigInterRAT_tags_1[] = {
	(ASN_TAG_CLASS_UNIVERSAL | (16 << 2))
};
static const asn_TYPE_tag2member_t asn_MAP_NR_EventTriggerConfigInterRAT_tag2el_1[] = {
    { (ASN_TAG_CLASS_CONTEXT | (0 << 2)), 0, 0, 0 }, /* eventId */
    { (ASN_TAG_CLASS_CONTEXT | (1 << 2)), 1, 0, 0 }, /* rsType */
    { (ASN_TAG_CLASS_CONTEXT | (2 << 2)), 2, 0, 0 }, /* reportInterval */
    { (ASN_TAG_CLASS_CONTEXT | (3 << 2)), 3, 0, 0 }, /* reportAmount */
    { (ASN_TAG_CLASS_CONTEXT | (4 << 2)), 4, 0, 0 }, /* reportQuantity */
    { (ASN_TAG_CLASS_CONTEXT | (5 << 2)), 5, 0, 0 }, /* maxReportCells */
    { (ASN_TAG_CLASS_CONTEXT | (6 << 2)), 6, 0, 0 } /* ext1 */
};
asn_SEQUENCE_specifics_t asn_SPC_NR_EventTriggerConfigInterRAT_specs_1 = {
	sizeof(struct NR_EventTriggerConfigInterRAT),
	offsetof(struct NR_EventTriggerConfigInterRAT, _asn_ctx),
	asn_MAP_NR_EventTriggerConfigInterRAT_tag2el_1,
	7,	/* Count of tags in the map */
	asn_MAP_NR_EventTriggerConfigInterRAT_oms_1,	/* Optional members */
	0, 1,	/* Root/Additions */
	6,	/* First extension addition */
};
asn_TYPE_descriptor_t asn_DEF_NR_EventTriggerConfigInterRAT = {
	"EventTriggerConfigInterRAT",
	"EventTriggerConfigInterRAT",
	&asn_OP_SEQUENCE,
	asn_DEF_NR_EventTriggerConfigInterRAT_tags_1,
	sizeof(asn_DEF_NR_EventTriggerConfigInterRAT_tags_1)
		/sizeof(asn_DEF_NR_EventTriggerConfigInterRAT_tags_1[0]), /* 1 */
	asn_DEF_NR_EventTriggerConfigInterRAT_tags_1,	/* Same as above */
	sizeof(asn_DEF_NR_EventTriggerConfigInterRAT_tags_1)
		/sizeof(asn_DEF_NR_EventTriggerConfigInterRAT_tags_1[0]), /* 1 */
	{ 0, 0, SEQUENCE_constraint },
	asn_MBR_NR_EventTriggerConfigInterRAT_1,
	7,	/* Elements count */
	&asn_SPC_NR_EventTriggerConfigInterRAT_specs_1	/* Additional specs */
};

