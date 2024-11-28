#ifndef FIELDS_HPP
#define FIELDS_HPP

/**
* @file Fields.hpp
* @brief Bit masks for register fields
*/

// Don't define registers with a single [7:0] or [0:0] field

namespace husb238a::field {

    enum PortRole : uint8_t {
        SINK_ONLY = 1<<2
    };

    enum Control1 : uint8_t {
        EN_DPM_HIZ = 1<<5,
        VDM_RESPOND = 1<<4,
        ENABLE = 1<<3,
        TCCDEB = 0b111
    };

    enum Manual : uint8_t {
        FORCE_DPM_HIZ = 1<<5,
        UNATT_SNK = 1<<3,
        DISABLED = 1<<1,
        ERROR_REC = 1
    };

    enum Mask : uint8_t {
        M_FLGIN = 1<<7,
        M_ORIENT = 1<<6,
        M_FAULT = 1<<5,
        M_VBUS_CHG = 1<<4,
        M_VBUS_OV = 1<<3,
        M_BC_LVL = 1<<2,
        M_DETACH = 1<<1,
        M_ATTACH = 1
    };

    enum Mask1 : uint8_t {
        M_TSD = 1<<7,
        M_VBUS_UV = 1<<6,
        M_DR_ROLE = 1<<5,
        M_SRC_ALERT = 1<<3,
        M_FRC_FAIL = 1<<2,
        M_FRC_SUCC = 1<<1,
        M_VDM_MSG = 1
    };

    enum Mask2 : uint8_t {
        M_EXIT_EPR = 1<<3,
        M_GO_FAIL = 1<<2,
        M_EPR_MODE = 1<<1,
        M_PD_HV = 1
    };

    enum Interrupt : uint8_t {
        I_EXIT_EPR = 1<<3,
        I_GO_FAIL = 1<<2,
        I_EPR_MODE = 1<<1,
        I_PD_HV = 1
    };

    enum Interrupt1 : uint8_t {
        I_FLGIN = 1<<7,
        I_ORIENT = 1<<6,
        I_FAULT = 1<<5,
        I_VBUS_CHG = 1<<4,
        I_VBUS_OV = 1<<3,
        I_BC_LVL = 1<<2,
        I_DETACH = 1<<1,
        I_ATTACH = 1
    };

    enum Interrupt2 : uint8_t {
        I_TSD = 1<<7,
        I_VBUS_UV = 1<<6,
        I_DR_ROLE = 1<<5,
        I_SRC_ALERT = 1<<3,
        I_FRC_FAIL = 1<<2,
        I_FRC_SUCC = 1<<1,
        I_VDM_MSG = 1
    };

    enum UserCfg0 : uint8_t {
        TSNKDSCNT = 0b11000000,
        CC_DSCNTEN = 1<<5,
        TFAUL = 1<<4,
        TVBDSGTIMEOUT = 0b1100,
        TBC_LEVEL = 0b11
    };

    enum UserCfg1 : uint8_t {
        EN_HVDCP = 1<<6,
        EN_VB_UV = 1<<3,
        EN_SVID3 = 1<<2,
        OUT2_SEL = 0b11
    };

    enum UserCfg2 : uint8_t {
        EN_OUT2 = 1<<7,
        FLG_POLARITY = 1<<6,
        EN_FAULTIN = 1<<5,
        EN_OUT1 = 1<<4,
        PD_PRIOR = 1<<2,
        EN_DRS = 1<<1
    };

    enum UserCfg3 : uint8_t {
        PPS_CAP_SNK = 1<<6,
        AVS_CAP_SNK = 1<<5,
        MODAL_OPERATION = 1<<4,
        EPR_AVS_CAP_SNK = 1<<3,
        SNK_CAP_MIN_VOLTAGE = 1<<2,
        SNK_PDO1_CURRENT = 0b11
    };

    enum SrcPDO : uint8_t {
        PDO_SELECT = 0b11111000,
        SNK_PPS_VOL_M = 0b11
    };

    enum SnkPPSCurrent : uint8_t {
        SNK_PPS_CURRENT = 0b1111111
    };

    // Shared by SNK_AVS_CURRENT and EPR_AVS_CURRENT registers
    enum AVSCurrent : uint8_t {
        AVS_VOL_M = 1<<7,
        AVS_CURRENT = 0b1111111
    };

    enum SnkPDP : uint8_t {
        SNK_PDP = 0b1111111
    };

    enum Status : uint8_t {
        AMS_PROCESS = 1<<7,
        PD_EPR_SNK = 1<<6,
        TSD = 1<<3,
        BC_LVL = 0b110,
        ATTACH = 1
    };

    enum Status1 : uint8_t {
        FLGIN = 1<<7,
        PD_HV = 1<<5,
        PD_COMM = 1<<4,
        SRC_ALERT = 1<<3,
        AMS_SUCC = 1<<2,
        FAULT = 1<<1,
        DATA_ROLE = 1
    };

    enum Type : uint8_t {
        CC_RX_ACTIVE = 1<<7,
        DEBUGSNK = 1<<5,
        SINK = 1<<4
    };

    enum DPDMStatus : uint8_t {
        CDP_FLAG = 1<<2,
        SDP_FLAG = 1<<1,
        DIVIDER3_FLAG = 1
    };

    enum ContractStatus0 : uint8_t {
        PD_CONTRACT = 0b11110000,
        DPM_CONTRACT = 0b1111,
    };

    enum SourceCapInfo : uint8_t {
        VDM_MODE = 1<<6,
        POWER_LIMIT = 1<<5,
        DUAL_ROLE_POWER = 1<<4,
        USB_SUSPEND_SUPPORTED = 1<<3,
        USB_COMMUNICATIONS_CAPABLE = 1<<2,
        DUAL_ROLE_DATA = 1<<1,
        EPR_MODE_CAPABLE = 1
    };

    enum SrcPDOXXV : uint8_t {
        DETECT = 1<<7,
        CURRENT = 0b1111111
    };

    enum SrcPPSVoltage : uint8_t {
        PPS1_MAX_VOLTAGE = 0b11000000,
        PPS2_MAX_VOLTAGE = 0b110000,
        PPS3_MAX_VOLTAGE = 0b1100,
        PPS_MIN_VOLTAGE = 0b11
    };

    enum SrcPDOAVS : uint8_t {
        SRC_AVS_DETECT = 1<<7,
        AVS_MAX_VOLTAGE = 0b1111000,
        AVS_MIN_VOLTAGE = 0b11
    };

    enum SrcEPRAVS : uint8_t {
        EPR_AVS_DETECT = 1<<7,
        EPR_AVS_MAX_VOLTAGE = 0b1111100,
        EPR_AVS_MIN_VOLTAGE = 0b11
    };

    enum VDMHeader : uint8_t {
        OBJECT_POSITION = 0b11100000,
        COMMAND_TYPE = 0b11000,
        VDM_TYPE = 0b111
    };

    enum SrcAlert : uint8_t {
        EXTENDED = 1<<7,
        OVP_EVENT = 1<<6,
        SRC_INPUT = 1<<5,
        OP_CHANGE = 1<<4,
        OTP_EVENT = 1<<3,
        OCP_EVENT = 1<<2,
        BATTERY_STATUS = 1<<1
    };

    enum SrcPPSStatusFlag : uint8_t {
        SRC_PPS_VOL_M = 0b11000000,
        OMF = 1<<3,
        PTF = 0b110
    };

}

#endif //FIELDS_HPP
