#ifndef REGISTERADDRESSES_HPP
#define REGISTERADDRESSES_HPP
#include <stdint.h>

namespace husb238a {
    enum RegisterAddress : uint8_t {
        /* Control registers */
        PORTROLE = 0x00,
        CONTROL = 0x01,
        CONTROL1 = 0x02,
        MANUAL = 0x03,
        RESET = 0x04,
        MASK = 0x05,
        MASK1 = 0x06,
        MASK2 = 0x07,
        INTERRUPT = 0x09,
        INTERRUPT1 = 0x0A,
        INTERRUPT2 = 0x0B,
        USER_CFG0 = 0x0C,
        USER_CFG1 = 0x0D,
        USER_CFG2 = 0x0E,
        USER_CFG3 = 0x0F,

        /* VDO */
        SVID0_MSB = 0x10,
        SVID0_LSB = 0x11,
        SVID1_MSB = 0x12,
        SVID1_LSB = 0x13,
        MODE0_MSB = 0x14,
        MODE0_LSB = 0x15,
        MODE1_MSB = 0x16,
        MODE1_LSB = 0x17,

        /* GO COMMAND */
        GO_COMMAND = 0x18,

        /* PDO , PPS & PDP */
        SRC_PDO = 0x19,
        SNK_PPS_VOLTAGE = 0x1A,
        SNK_PPS_CURRENT = 0x1B,
        SNK_AVS_VOLTAGE = 0x1C,
        SNK_AVS_CURRENT = 0x1D,
        EPR_AVS_VOLTAGE = 0x1E,
        EPR_AVS_CURRENT = 0x20,
        SNK_PDP = 0x21,
        EPR_PDP = 0x22,

        /* Status registers */
        STATUS = 0x63,
        STATUS1 = 0x64,
        TYPE = 0x65,
        DPDM_STATUS = 0x66,
        CONTRACT_STATUS0 = 0x67,
        CONTRACT_STATUS1 = 0x68,
        SOURCECAP_INFO = 0x69,
        SRC_PDO_5V = 0x6A,
        SRC_PDO_9V = 0x6B,
        SRC_PDO_12V = 0x6C,
        SRC_PDO_15V = 0x6D,
        SRC_PDO_20V = 0x6E,
        SRC_PDO_28V = 0x6F,
        SRC_PDO_36V = 0x70,
        SRC_PDO_48V = 0x71,
        SRC_PDO_PPS1 = 0x72,
        SRC_PDO_PPS2 = 0x73,
        SRC_PDO_PPS3 = 0x74,
        SRC_PPS_VOLTAGE = 0x75,
        SRC_PDO_AVS = 0x76,
        SRC_AVS_PDP = 0x77,
        EPR_AVS_PDP = 0x78,
        SRC_EPR_AVS = 0x79,

        /* VDM */
        VDM_HEADER = 0x7A,
        VDM_VDO1_0 = 0x7B,
        VDM_VDO1_1 = 0x7C,
        VDM_VDO1_2 = 0x7D,
        VDM_VDO1_3 = 0x7E,
        VDM_VDO2_0 = 0x7F,
        VDM_VDO2_1 = 0x80,
        VDM_VDO2_2 = 0x81,
        VDM_VDO2_3 = 0x82,
        VDM_VDO3_0 = 0x83,
        VDM_VDO3_1 = 0x84,
        VDM_VDO3_2 = 0x85,
        VDM_VDO3_3 = 0x86,

        /* VBUS, ALERT & PPS status */
        VBUS_MEASUREMENT = 0x87,
        SRC_ALERT = 0x88,
        SRC_PPS_STATUS_VOLTAGE = 0x89,
        SRC_PPS_STATUS_CURRENT = 0x8A,
        SRC_PPS_STATUS_FLAG = 0x8B,

        /* Manufacturer info */
        MNF_OFST0 = 0x8C,
        MNF_OFST1 = 0x8D,
        MNF_OFST2 = 0x8E,
        MNF_OFST3 = 0x8F,

        /* FSM */
        SNK_FSM_STATE = 0x90,
        SRC_FSM_STATE = 0x91,
    };
}

#endif //REGISTERADDRESSES_HPP
