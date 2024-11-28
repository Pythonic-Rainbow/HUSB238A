#ifndef FIELDVALUES_HPP
#define FIELDVALUES_HPP


/**
* @file FieldValues.hpp
* @brief Field values for HUSB238A
* In traditional enums, the values will pollute the namespace. I work around this by creating a namespace for each enum.
* To reference an enum value, use fval::NAMESPACE::VALUE.
* To specify the enum type, use fval::NAMESPACE::T.
*/
namespace husb238a::fval {
    namespace TSNKDSCNT {
        enum T : uint8_t {
            MS0,
            MS5,
            MS15,
            MS30
        };
    }

    namespace TVBDSGTIMEOUT {
        enum T : uint8_t {
            DISABLE,
            MS50,
            MS100,
            MS200
        };
    }

    namespace TBCLevel {
        enum T : uint8_t {
            MS3,
            MS12,
            MS15,
            MS18
        };
    }

    namespace SnkPDO1Current {
        enum T : uint8_t {
            A3,
            A2_4,
            A2_1,
            A1_5
        };
    }

    namespace GoCommand {
        enum T : uint8_t {
            SELECT_PDO = 1,
            BIST_DATA_MODE_TEST = 0b10,
            BIST_CARRIER_MODE_TEST = 0b11,
            GET_SRC_CAP = 0b100,
            DR_SWAP = 0b101,
            GET_PPS_STATUS = 0b111,
            GET_MANUFACTURER_INFO = 0b1000,
            DISCOVER_IDENTITY = 0b1001,
            DISCOVER_SVIDS = 0b1010,
            DISCOVER_MODES_0 = 0b1011,
            DISCOVER_MODES_1 = 0b1100,
            ENTER_MODE_0 = 0b1101,
            ENTER_MODE_1 = 0b1110,
            EXIT_MODE_0 = 0b1111,
            EXIT_MODE_1 = 0b10000,
            EPR_GET_SOURCE_CAP = 0b11000,
            EPR_MODE_ENTER = 0b11001,
            EPR_MODE_EXIT = 0b11010,
            SOFT_RESET = 0b11101,
            HARD_RESET = 0b11110,
        };
    }

    namespace PDOSelect {
        enum T : uint8_t {
            NOT_SELECTED = 0,
            SRC_PDO_5V = 0b1,
            SRC_PDO_9V = 0b10,
            SRC_PDO_12V = 0b11,
            SRC_PDO_15V = 0b100,
            SRC_PDO_20V = 0b101,
            SRC_PDO_PPS1 = 0b110,
            SRC_PDO_PPS2 = 0b111,
            SRC_PDO_PPS3 = 0b1000,
            SRC_PDO_AVS = 0b1001,
            QC2_5V = 0b10000,
            QC2_9V = 0b10001,
            QC2_12V = 0b10010,
            SRC_PDO_28V = 0b11000,
            SRC_PDO_36V = 0b11010,
            SRC_PDO_48V = 0b11100,
            SRC_EPR_AVS = 0b11110
        };
    }

    // Reg 0x67
    namespace PDContract {
        enum T : uint8_t {
            TYPE_C_5V = 0,
            SRC_PDO_5V = 0b1,
            SRC_PDO_9V = 0b10,
            SRC_PDO_12V = 0b11,
            SRC_PDO_15V = 0b100,
            SRC_PDO_20V = 0b101,
            SRC_PDO_PPS1 = 0b110,
            SRC_PDO_PPS2 = 0b111,
            SRC_PDO_PPS3 = 0b1000,
            SRC_PDO_AVS = 0b1001,
            SRC_PDO_28V = 0b1010,
            SRC_PDO_36V = 0b1011,
            SRC_PDO_48V = 0b1100,
            SRC_EPR_AVS = 0b1101
        };
    }

    namespace DPMContract {
        enum T : uint8_t {
            DEFAULT_5V = 0,
            DIVIDER3 = 0b1,
            SDP = 0b10,
            CDP = 0b11,
            DCP = 0b100,
            HVDCP = 0b101,
            QC2_9V = 0b110,
            QC2_12V = 0b111
        };
    }

    namespace PPSMaxVoltage {
        enum T : uint8_t {
            V5_9,
            V11,
            V16,
            V21
        };
    }

    namespace PPSMinVoltage {
        enum T : uint8_t {
            V3,
            V3_3,
            V5
        };
    }

    namespace AVSMinVoltage {
        enum T : uint8_t {
            V5,
            V9,
            V15
        };
    }

    namespace CommandType {
        enum T : uint8_t {
            REQ,
            ACK,
            NAK,
            BUSY
        };
    }

    namespace VDMType {
        enum T : uint8_t {
            DISCOVER_IDENTITY,
            DISCOVER_SVIDS,
            DISCOVER_MODES,
            ENTER_MODE,
            EXIT_MODE
        };
    }
}

#endif //FIELDVALUES_HPP
