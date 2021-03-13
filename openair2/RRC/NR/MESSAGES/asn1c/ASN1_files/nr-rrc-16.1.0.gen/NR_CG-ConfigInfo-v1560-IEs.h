/*
 * Generated by asn1c-0.9.29 (http://lionet.info/asn1c)
 * From ASN.1 module "NR-InterNodeDefinitions"
 * 	found in "nr-rrc-16.1.0.asn1"
 * 	`asn1c -pdu=all -fcompound-names -gen-PER -no-gen-OER -no-gen-example -findirect-choice -D nr-rrc-16.1.0.gen`
 */

#ifndef	_NR_CG_ConfigInfo_v1560_IEs_H_
#define	_NR_CG_ConfigInfo_v1560_IEs_H_


#include <asn_application.h>

/* Including external dependencies */
#include <OCTET_STRING.h>
#include <NativeEnumerated.h>
#include <constr_SEQUENCE.h>
#include "NR_ARFCN-ValueEUTRA.h"
#include "NR_EUTRA-PhysCellId.h"
#include "NR_CGI-InfoEUTRA.h"

#ifdef __cplusplus
extern "C" {
#endif

/* Dependencies */
typedef enum NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA {
	NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_t313_Expiry	= 0,
	NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_randomAccessProblem	= 1,
	NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_rlc_MaxNumRetx	= 2,
	NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA_scg_ChangeFailure	= 3
} e_NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA__failureTypeEUTRA;

/* Forward declarations */
struct NR_DRX_Config;
struct NR_MeasResultCellListSFTD_EUTRA;
struct NR_FR_InfoList;
struct NR_CG_ConfigInfo_v1570_IEs;

/* NR_CG-ConfigInfo-v1560-IEs */
typedef struct NR_CG_ConfigInfo_v1560_IEs {
	OCTET_STRING_t	*candidateCellInfoListMN_EUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*candidateCellInfoListSN_EUTRA;	/* OPTIONAL */
	OCTET_STRING_t	*sourceConfigSCG_EUTRA;	/* OPTIONAL */
	struct NR_CG_ConfigInfo_v1560_IEs__scgFailureInfoEUTRA {
		long	 failureTypeEUTRA;
		OCTET_STRING_t	 measResultSCG_EUTRA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *scgFailureInfoEUTRA;
	struct NR_DRX_Config	*drx_ConfigMCG;	/* OPTIONAL */
	struct NR_CG_ConfigInfo_v1560_IEs__measResultReportCGI_EUTRA {
		NR_ARFCN_ValueEUTRA_t	 eutraFrequency;
		NR_EUTRA_PhysCellId_t	 cellForWhichToReportCGI_EUTRA;
		NR_CGI_InfoEUTRA_t	 cgi_InfoEUTRA;
		
		/* Context for parsing across buffer boundaries */
		asn_struct_ctx_t _asn_ctx;
	} *measResultReportCGI_EUTRA;
	struct NR_MeasResultCellListSFTD_EUTRA	*measResultCellListSFTD_EUTRA;	/* OPTIONAL */
	struct NR_FR_InfoList	*fr_InfoListMCG;	/* OPTIONAL */
	struct NR_CG_ConfigInfo_v1570_IEs	*nonCriticalExtension;	/* OPTIONAL */
	
	/* Context for parsing across buffer boundaries */
	asn_struct_ctx_t _asn_ctx;
} NR_CG_ConfigInfo_v1560_IEs_t;

/* Implementation */
/* extern asn_TYPE_descriptor_t asn_DEF_NR_failureTypeEUTRA_6;	// (Use -fall-defs-global to expose) */
extern asn_TYPE_descriptor_t asn_DEF_NR_CG_ConfigInfo_v1560_IEs;
extern asn_SEQUENCE_specifics_t asn_SPC_NR_CG_ConfigInfo_v1560_IEs_specs_1;
extern asn_TYPE_member_t asn_MBR_NR_CG_ConfigInfo_v1560_IEs_1[9];

#ifdef __cplusplus
}
#endif

/* Referred external types */
#include "NR_DRX-Config.h"
#include "NR_MeasResultCellListSFTD-EUTRA.h"
#include "NR_FR-InfoList.h"
#include "NR_CG-ConfigInfo-v1570-IEs.h"

#endif	/* _NR_CG_ConfigInfo_v1560_IEs_H_ */
#include <asn_internal.h>
