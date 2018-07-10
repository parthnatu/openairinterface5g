#ifndef _NFAPI_INTERFACE_NR_H_
#define _NFAPI_INTERFACE_NR_H_

#include "nfapi_interface.h"

// nFAPI enums
typedef enum {
  NFAPI_NR_DL_CONFIG_DCI_DL_PDU_TYPE = 0,
  NFAPI_NR_DL_CONFIG_BCH_PDU_TYPE,
  NFAPI_NR_DL_CONFIG_DLSCH_PDU_TYPE,
  NFAPI_NR_DL_CONFIG_PCH_PDU_TYPE,
  NFAPI_NR_DL_CONFIG_NBCH_PDU_TYPE,
  NFAPI_NR_DL_CONFIG_NPDCCH_PDU_TYPE,
  NFAPI_NR_DL_CONFIG_NDLSCH_PDU_TYPE
} nfapi_nr_dl_config_pdu_type_e;

//These TLVs are used exclusively by nFAPI
typedef struct
{
  // These TLVs are used to setup the transport connection between VNF and PNF
  // nfapi_ipv4_address_t p7_vnf_address_ipv4;
  // nfapi_ipv6_address_t p7_vnf_address_ipv6;
  // nfapi_uint16_tlv_t p7_vnf_port;

  // nfapi_ipv4_address_t p7_pnf_address_ipv4;
  // nfapi_ipv6_address_t p7_pnf_address_ipv6;
  // nfapi_uint16_tlv_t p7_pnf_port;
  
  // // These TLVs are used to setup the transport connection between VNF and PNF
  // nfapi_uint8_tlv_t dl_ue_per_sf;
  // nfapi_uint8_tlv_t ul_ue_per_sf;

  // These TLVs are used by PNF to report its RF capabilities to the VNF software
  nfapi_rf_bands_t rf_bands;

  // These TLVs are used by the VNF to configure the synchronization with the PNF.
  // nfapi_uint8_tlv_t timing_window;
  // nfapi_uint8_tlv_t timing_info_mode;
  // nfapi_uint8_tlv_t timing_info_period;

  // These TLVs are used by the VNF to configure the RF in the PNF
  // nfapi_uint16_tlv_t max_transmit_power;
  nfapi_uint16_tlv_t earfcn;

  // nfapi_nmm_frequency_bands_t nmm_gsm_frequency_bands;
  // nfapi_nmm_frequency_bands_t nmm_umts_frequency_bands;
  // nfapi_nmm_frequency_bands_t nmm_lte_frequency_bands;
  // nfapi_uint8_tlv_t nmm_uplink_rssi_supported;

} nfapi_nr_nfapi_t;

#define NFAPI_NR_NFAPI_P7_VNF_ADDRESS_IPV4_TAG 0x5100
#define NFAPI_NR_NFAPI_P7_VNF_ADDRESS_IPV6_TAG 0x5101
#define NFAPI_NR_NFAPI_P7_VNF_PORT_TAG 0x5102
#define NFAPI_NR_NFAPI_P7_PNF_ADDRESS_IPV4_TAG 0x5103
#define NFAPI_NR_NFAPI_P7_PNF_ADDRESS_IPV6_TAG 0x5104
#define NFAPI_NR_NFAPI_P7_PNF_PORT_TAG 0x5105

#define NFAPI_NR_NFAPI_DOWNLINK_UES_PER_SUBFRAME_TAG 0x510A
#define NFAPI_NR_NFAPI_UPLINK_UES_PER_SUBFRAME_TAG 0x510B
#define NFAPI_NR_NFAPI_RF_BANDS_TAG 0x5114
#define NFAPI_NR_NFAPI_TIMING_WINDOW_TAG 0x511E
#define NFAPI_NR_NFAPI_TIMING_INFO_MODE_TAG 0x511F
#define NFAPI_NR_NFAPI_TIMING_INFO_PERIOD_TAG 0x5120
#define NFAPI_NR_NFAPI_MAXIMUM_TRANSMIT_POWER_TAG 0x5128
#define NFAPI_NR_NFAPI_EARFCN_TAG 0x5129
#define NFAPI_NR_NFAPI_NMM_GSM_FREQUENCY_BANDS_TAG 0x5130
#define NFAPI_NR_NFAPI_NMM_UMTS_FREQUENCY_BANDS_TAG 0x5131
#define NFAPI_NR_NFAPI_NMM_LTE_FREQUENCY_BANDS_TAG 0x5132
#define NFAPI_NR_NFAPI_NMM_UPLINK_RSSI_SUPPORTED_TAG 0x5133

// P5 Message Structures
typedef struct {
  nfapi_uint16_tlv_t  numerology_index_mu;
  nfapi_uint16_tlv_t  duplex_mode;
  nfapi_uint16_tlv_t  dl_cyclic_prefix_type;
  nfapi_uint16_tlv_t  ul_cyclic_prefix_type;
} nfapi_nr_subframe_config_t;

#define NFAPI_NR_SUBFRAME_CONFIG_DUPLEX_MODE_TAG 0x5001
#define NFAPI_NR_SUBFRAME_CONFIG_PCFICH_POWER_OFFSET_TAG 0x5002
#define NFAPI_NR_SUBFRAME_CONFIG_PB_TAG 0x5003
#define NFAPI_NR_SUBFRAME_CONFIG_DL_CYCLIC_PREFIX_TYPE_TAG 0x5004
#define NFAPI_NR_SUBFRAME_CONFIG_UL_CYCLIC_PREFIX_TYPE_TAG 0x5005
#define NFAPI_NR_SUBFRAME_CONFIG_NUMEROLOGY_INDEX_MU_TAG 0x5006

typedef struct {
  nfapi_uint16_tlv_t  tx_antenna_ports;
  nfapi_uint16_tlv_t  rx_antenna_ports;
  nfapi_uint16_tlv_t  dl_channel_bandwidth;
  nfapi_uint16_tlv_t  ul_channel_bandwidth;  
  nfapi_uint16_tlv_t  dl_BWP_carrierBandwidth;
  nfapi_uint16_tlv_t  ul_BWP_carrierBandwidth;
  nfapi_uint16_tlv_t  dl_locationAndBandwidth;
  nfapi_uint16_tlv_t  ul_locationAndBandwidth;
  nfapi_uint16_tlv_t  dl_BWP_SubcarrierSpacing;
  nfapi_uint16_tlv_t  ul_BWP_SubcarrierSpacing;
  nfapi_uint16_tlv_t  dl_absoluteFrequencyPointA;
  nfapi_uint16_tlv_t  ul_absoluteFrequencyPointA;
  nfapi_uint16_tlv_t  dl_offsetToCarrier;
  nfapi_uint16_tlv_t  ul_offsetToCarrier;
  nfapi_uint16_tlv_t  dl_SCS_SubcarrierSpacing;
  nfapi_uint16_tlv_t  ul_SCS_SubcarrierSpacing;
  nfapi_uint16_tlv_t  dl_SCS_SpecificCarrier_k0;
  nfapi_uint16_tlv_t  ul_SCS_SpecificCarrier_k0;
  nfapi_uint16_tlv_t  NIA_SubcarrierSpacing;
} nfapi_nr_rf_config_t;

#define NFAPI_NR_RF_CONFIG_DL_CHANNEL_BANDWIDTH_TAG 0x500A
#define NFAPI_NR_RF_CONFIG_UL_CHANNEL_BANDWIDTH_TAG 0x500B
#define NFAPI_NR_RF_CONFIG_REFERENCE_SIGNAL_POWER_TAG 0x500C
#define NFAPI_NR_RF_CONFIG_TX_ANTENNA_PORTS_TAG 0x500D
#define NFAPI_NR_RF_CONFIG_RX_ANTENNA_PORTS_TAG 0x500E

typedef struct {
  nfapi_uint16_tlv_t  physical_cell_id;
  nfapi_uint16_tlv_t  half_frame_index;
  nfapi_uint16_tlv_t  ssb_subcarrier_offset;
  nfapi_uint16_tlv_t  ssb_sib1_position_in_burst;
  nfapi_uint16_tlv_t  ssb_scg_position_in_burst;
  nfapi_uint16_tlv_t  ssb_periodicity;
  nfapi_uint16_tlv_t  ss_pbch_block_power;
  nfapi_uint16_tlv_t  n_ssb_crb;
} nfapi_nr_sch_config_t;

#define NFAPI_NR_SCH_CONFIG_PHYSICAL_CELL_ID_TAG 0x501E
#define NFAPI_NR_SCH_CONFIG_HALF_FRAME_INDEX_TAG 0x501F
#define NFAPI_NR_SCH_CONFIG_SSB_SUBCARRIER_OFFSET_TAG 0x5020
#define NFAPI_NR_SCH_CONFIG_SSB_POSITION_IN_BURST 0x5021
#define NFAPI_NR_SCH_CONFIG_SSB_PERIODICITY 0x5022
#define NFAPI_NR_SCH_CONFIG_SS_PBCH_BLOCK_POWER 0x5023
#define NFAPI_NR_SCH_CONFIG_N_SSB_CRB 0x5024


typedef struct {
  nfapi_uint16_tlv_t  prach_RootSequenceIndex;                                        ///// L1 parameter 'PRACHRootSequenceIndex'
  nfapi_uint16_tlv_t  prach_msg1_SubcarrierSpacing;                                   ///// L1 parameter 'prach-Msg1SubcarrierSpacing'
  nfapi_uint16_tlv_t  restrictedSetConfig;
  nfapi_uint16_tlv_t  msg3_transformPrecoding;                                        ///// L1 parameter 'msg3-tp'
  /////////////////--------------------NR RACH-ConfigGeneric--------------------/////////////////
  nfapi_uint16_tlv_t  prach_ConfigurationIndex;                                       ///// L1 parameter 'PRACHConfigurationIndex'
  nfapi_uint16_tlv_t  prach_msg1_FDM;                                                 ///// L1 parameter 'prach-FDM'
  nfapi_uint16_tlv_t  prach_msg1_FrequencyStart;                                      ///// L1 parameter 'prach-frequency-start'
  nfapi_uint16_tlv_t  zeroCorrelationZoneConfig;
  nfapi_uint16_tlv_t  preambleReceivedTargetPower;
} nfapi_nr_rach_config_t;

typedef struct {
  nfapi_uint16_tlv_t  dmrs_TypeA_Position;                                            ///// Position of (first) DL DM-RS
  nfapi_uint16_tlv_t  TimeDomainResourceAllocation_k0;                                ///// L1 parameter 'K0'
  nfapi_uint16_tlv_t  TimeDomainResourceAllocation_mappingType;                       ///// L1 parameter 'Mapping-type'
} nfapi_nr_pdsch_config_t;

typedef struct {
  nfapi_uint16_tlv_t  groupHoppingEnabledTransformPrecoding;                          ///// L1 parameter 'Group-hopping-enabled-Transform-precoding'
  nfapi_uint16_tlv_t  msg3_DeltaPreamble;                                             ///// L1 parameter 'Delta-preamble-msg3' 
  nfapi_uint16_tlv_t  p0_NominalWithGrant;                                            ///// L1 parameter 'p0-nominal-pusch-withgrant'
  nfapi_uint16_tlv_t  TimeDomainResourceAllocation_k2;                                ///// L1 parameter 'K2' 
  nfapi_uint16_tlv_t  TimeDomainResourceAllocation_mappingType;                       ///// L1 parameter 'Mapping-type'
} nfapi_nr_pusch_config_t;

typedef struct {
  nfapi_uint16_tlv_t  pucch_GroupHopping;                                             ///// L1 parameter 'PUCCH-GroupHopping' 
  nfapi_uint16_tlv_t  p0_nominal;                                                     ///// L1 parameter 'p0-nominal-pucch'
} nfapi_nr_pucch_config_t;

typedef struct {
//NR TDD-UL-DL-ConfigCommon                ///// L1 parameter 'UL-DL-configuration-common'
  nfapi_uint16_tlv_t  referenceSubcarrierSpacing;                                     ///// L1 parameter 'reference-SCS'
  nfapi_uint16_tlv_t  dl_UL_TransmissionPeriodicity;                                  ///// L1 parameter 'DL-UL-transmission-periodicity'
  nfapi_uint16_tlv_t  nrofDownlinkSlots;                                              ///// L1 parameter 'number-of-DL-slots'
  nfapi_uint16_tlv_t  nrofDownlinkSymbols;                                            ///// L1 parameter 'number-of-DL-symbols-common'
  nfapi_uint16_tlv_t  nrofUplinkSlots;                                                ///// L1 parameter 'number-of-UL-slots'
  nfapi_uint16_tlv_t  nrofUplinkSymbols;                                              ///// L1 parameter 'number-of-UL-symbols-common'
} nfapi_nr_tdd_ul_dl_config_t;


typedef struct {
 //RateMatchPattern  is used to configure one rate matching pattern for PDSCH    ///// L1 parameter 'Resource-set-cekk'             
  nfapi_uint16_tlv_t  rateMatchPatternId;
  nfapi_uint16_tlv_t  RateMatchPattern_patternType;
  nfapi_uint16_tlv_t  symbolsInResourceBlock;                                          ///// L1 parameter 'rate-match-PDSCH-bitmap2
  nfapi_uint16_tlv_t  periodicityAndPattern;                                           ///// L1 parameter 'rate-match-PDSCH-bitmap3'
  nfapi_uint16_tlv_t  RateMatchPattern_controlResourceSet;
  nfapi_uint16_tlv_t  RateMatchPattern_subcarrierSpacing;                              ///// L1 parameter 'resource-pattern-scs'
  nfapi_uint16_tlv_t  RateMatchPattern_mode; 
} nfapi_nr_ratematchpattern_t;

typedef struct {
  //NR  RateMatchPatternLTE-CRS
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_carrierFreqDL;                           ///// L1 parameter 'center-subcarrier-location'
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_carrierBandwidthDL;                      ///// L1 parameter 'BW'
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_nrofCRS_Ports;                           ///// L1 parameter 'rate-match-resources-numb-LTE-CRS-antenna-port'
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_v_Shift;                                 ///// L1 parameter 'rate-match-resources-LTE-CRS-v-shift'
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_radioframeAllocationPeriod;
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_radioframeAllocationOffset;
  nfapi_uint16_tlv_t  RateMatchPatternLTE_CRS_subframeAllocation_choice;
} nfapi_nr_ratematchpattern_lte_crs_t;

typedef struct {
  nfapi_p4_p5_message_header_t              header;
  uint8_t num_tlv;
  nfapi_nr_subframe_config_t                subframe_config;
  nfapi_nr_rf_config_t                      rf_config;
  nfapi_nr_sch_config_t                     sch_config;
  nfapi_nr_rach_config_t                    rach_config;
  nfapi_nr_pdsch_config_t                   pdsch_config;
  nfapi_nr_pusch_config_t                   pusch_config;
  nfapi_nr_pucch_config_t                   pucch_config;
  nfapi_nr_tdd_ul_dl_config_t               tdd_ul_dl_config;
  nfapi_nr_ratematchpattern_t               ratematchpattern;
  nfapi_nr_ratematchpattern_lte_crs_t       ratematchpattern_lte_crs;
  nfapi_nr_nfapi_t                          nfapi_config;

  nfapi_vendor_extension_tlv_t              vendor_extension;
} nfapi_nr_config_request_t;

typedef enum {
  NFAPI_NR_DL_DCI_FORMAT_1_0 = 0,
  NFAPI_NR_DL_DCI_FORMAT_1_1,
  NFAPI_NR_DL_DCI_FORMAT_2_0,
  NFAPI_NR_DL_DCI_FORMAT_2_1,
  NFAPI_NR_DL_DCI_FORMAT_2_2,
  NFAPI_NR_DL_DCI_FORMAT_2_3,
} nfapi_nr_dl_dci_format_e;

typedef enum {
  NFAPI_NR_UL_DCI_FORMAT_0_0 = 0,
  NFAPI_NR_UL_DCI_FORMAT_1_0,
} nfapi_nr_ul_dci_format_e;

// P7 Sub Structures
typedef struct {
  nfapi_tl_t tl;
  // conf
  uint8_t dci_format;
  uint8_t cce_idx;
  uint8_t aggregation_level;
  uint16_t rnti;
  // DCI fields

} nfapi_nr_dl_config_dci_dl_pdu_rel15_t;
#define NFAPI_NR_DL_CONFIG_REQUEST_DCI_DL_PDU_REL15_TAG

typedef struct {
  nfapi_nr_dl_config_dci_dl_pdu_rel15_t dci_dl_pdu_rel15;
} nfapi_nr_dl_config_dci_dl_pdu;


typedef struct{
  nfapi_uint16_tlv_t  controlResourceSetId;                           ///// L1 parameter 'CORESET-ID'
  nfapi_uint16_tlv_t  frequencyDomainResources;                       ///// L1 parameter 'CORESET-freq-dom'
  nfapi_uint16_tlv_t  duration;                                       ///// L1 parameter 'CORESET-time-duration'
  nfapi_uint16_tlv_t  cce_REG_MappingType;                            ///// L1 parameter 'CORESET-CCE-REG-mapping-type'
  nfapi_uint16_tlv_t  reg_BundleSize;                                 ///// L1 parameter 'CORESET-REG-bundle-size'
  nfapi_uint16_tlv_t  interleaverSize;                                ///// L1 parameter 'CORESET-interleaver-size'
  nfapi_uint16_tlv_t  shiftIndex;                                     ///// L1 parameter 'CORESET-shift-index'
  nfapi_uint16_tlv_t  precoderGranularity;                            ///// L1 parameter 'CORESET-precoder-granuality'
  nfapi_uint16_tlv_t  TCI_StateId;                                    ///// L1 parameter 'TCI-StatesPDCCH'
  nfapi_uint16_tlv_t  tci_PresentInDCI;                               ///// L1 parameter 'TCI-PresentInDCI'
  nfapi_uint16_tlv_t  pdcch_DMRS_ScramblingID;                        ///// L1 parameter 'PDCCH-DMRS-Scrambling-ID'
} nfapi_nr_ControlResourcesSets_t;

typedef struct{
  nfapi_uint16_tlv_t  SearchSpaceId;
  nfapi_uint16_tlv_t  controlResourceSetId;
  nfapi_uint16_tlv_t  monitoringSlotPeriodicityAndOffset;             ///// L1 parameters 'Montoring-periodicity-PDCCH-slot'
  nfapi_uint16_tlv_t  monitoringSymbolsWithinSlot;                    ///// L1 parameter 'Montoring-symbols-PDCCH-within-slot'
  nfapi_uint16_tlv_t  nrofCand_aggLevel1;                             ///// L1 parameter 'Aggregation-level-1'
  nfapi_uint16_tlv_t  nrofCand_aggLevel2;                             ///// L1 parameter 'Aggregation-level-2'
  nfapi_uint16_tlv_t  nrofCand_aggLevel4;                             ///// L1 parameter 'Aggregation-level-4'
  nfapi_uint16_tlv_t  nrofCand_aggLevel8;                             ///// L1 parameter 'Aggregation-level-8'
  nfapi_uint16_tlv_t  nrofCand_aggLevel16;                            ///// L1 parameter 'Aggregation-level-16'
  nfapi_uint16_tlv_t  Com_dci_Format2_0_nrofCand_SFI_And_aggLevel;    ///// L1 parameters 'SFI-Num-PDCCH-cand' and 'SFI-Aggregation-Level'
  nfapi_uint16_tlv_t  Com_dci_Format2_3_monitoringPeriodicity;        ///// L1 parameter 'SRS-monitoring-periodicity'
  nfapi_uint16_tlv_t  Com_dci_Format2_3_nrofPDCCH_Candidates;         ///// L1 parameter 'SRS-Num-PDCCH-cand'
  nfapi_uint16_tlv_t  ue_Specific_dci_Formats;
} nfapi_nr_SearchSpaces_t;

typedef struct {
  nfapi_tl_t tl;
  uint16_t length;
  uint16_t pdu_index;
  uint16_t transmission_power;
}nfapi_nr_dl_config_bch_pdu_rel15_t;
#define NFAPI_NR_DL_CONFIG_REQUEST_BCH_PDU_REL15_TAG 0x5025


typedef struct {
  nfapi_tl_t tl;
  nfapi_nr_SearchSpaces_t           sib1searchSpace;
  nfapi_nr_ControlResourcesSets_t   sib1ControlResourceSets;
  nfapi_nr_SearchSpaces_t           sibssearchSpace;
  nfapi_nr_ControlResourcesSets_t   sibsControlResourceSets; 
  nfapi_nr_SearchSpaces_t           ra_SearchSpace;
  nfapi_nr_ControlResourcesSets_t   ra_ControlResourceSets;
}nfapi_nr_dl_config_dlsch_pdu_rel15_t;

typedef struct {
  nfapi_tl_t tl;
  nfapi_nr_SearchSpaces_t           pagingSearchSpace;
  nfapi_nr_ControlResourcesSets_t   pagingControlResourceSets;
}nfapi_nr_dl_config_pch_pdu_rel15_t;

typedef struct {
  
}nfapi_nr_dl_config_nbch_pdu_rel15_t;

typedef struct {
  
}nfapi_nr_dl_config_npdcch_pdu_rel15_t;

typedef struct {
  
}nfapi_nr_dl_config_ndlsch_pdu_rel15_t;

typedef struct {
  uint8_t pdu_type;
  uint8_t pdu_size;
  union {
    nfapi_nr_dl_config_dci_dl_pdu_rel15_t     dci_dl_pdu_rel15;
    nfapi_nr_dl_config_bch_pdu_rel15_t        bch_pdu_rel15;
    nfapi_nr_dl_config_dlsch_pdu_rel15_t      dlsch_pdu_rel15;
    nfapi_nr_dl_config_pch_pdu_rel15_t        pch_pdu_rel15;
    nfapi_nr_dl_config_nbch_pdu_rel15_t       nbch_pdu_rel15;
    nfapi_nr_dl_config_npdcch_pdu_rel15_t     npdcch_pdu_rel15;
    nfapi_nr_dl_config_ndlsch_pdu_rel15_t     ndlsch_pdu_rel15;
  };

} nfapi_nr_dl_config_request_pdu_t;
 
typedef struct {
  nfapi_tl_t tl;
  //uint8_t number_pdcch_ofdm_symbols;
  uint8_t   number_dci;
  uint16_t  number_pdu;
  uint8_t   number_pdsch_rnti;
  nfapi_nr_dl_config_request_pdu_t *dl_config_pdu_list;
} nfapi_nr_dl_config_request_body_t;

typedef struct {
  nfapi_p7_message_header_t header;
  uint16_t sfn_sf;
  nfapi_nr_dl_config_request_body_t dl_config_request_body;
  nfapi_vendor_extension_tlv_t vendor_extension;
} nfapi_nr_dl_config_request_t;

#endif
