/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-RRC-Definitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_RadioLinkMonitoringRS_H_
#define	_NR_RadioLinkMonitoringRS_H_


#include <asn_application.h>

/* Including external dependencies */
#include "NR_RadioLinkMonitoringRS-Id.h"
#include <NativeEnumerated.h>
#include "NR_SSB-Index.h"
#include "NR_NZP-CSI-RS-ResourceId.h"
#include <constr_CHOICE.h>
#include <constr_SEQUENCE.h>

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_RadioLinkMonitoringRS__purpose {
	NR_RadioLinkMonitoringRS__purpose_beamFailure	= 0,
	NR_RadioLinkMonitoringRS__purpose_rlf	= 1,
	NR_RadioLinkMonitoringRS__purpose_both	= 2
} e_NR_RadioLinkMonitoringRS__purpose;
typedef enum NR_RadioLinkMonitoringRS__detectionResource_PR {
	NR_RadioLinkMonitoringRS__detectionResource_PR_NOTHING,	/* No components present */
	NR_RadioLinkMonitoringRS__detectionResource_PR_ssb_Index,
	NR_RadioLinkMonitoringRS__detectionResource_PR_csi_RS_Index
} NR_RadioLinkMonitoringRS__detectionResource_PR;

/* NR_RadioLinkMonitoringRS */
typedef struct NR_RadioLinkMonitoringRS {
	NR_RadioLinkMonitoringRS_Id_t	 radioLinkMonitoringRS_Id;
	long	 purpose;
	struct NR_RadioLinkMonitoringRS__detectionResource {
		NR_RadioLinkMonitoringRS__detectionResource_PR present;
		union NR_RadioLinkMonitoringRS__NR_detectionResource_u {
			NR_SSB_Index_t	 ssb_Index;
			NR_NZP_CSI_RS_ResourceId_t	 csi_RS_Index;
		} choice;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} detectionResource;
	/*
	 * This type is extensible,
	 * possible extensions are below.
	 */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_RadioLinkMonitoringRS_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_purpose_3;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_RadioLinkMonitoringRS;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_RadioLinkMonitoringRS_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_RadioLinkMonitoringRS_1[3];

#ifdef __cplusplus
}
#endif

#endif	/* _NR_RadioLinkMonitoringRS_H_ */
#include <asn_internal.h>
