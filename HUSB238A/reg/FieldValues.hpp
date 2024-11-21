#ifndef FIELDVALUES_HPP
#define FIELDVALUES_HPP


/**
* @file FieldValues.hpp
* @brief Field values for HUSB238A
*
* This file also provides methods to convert different fields from/to actual values.
* For to_x methods the return value is -1 if the input is invalid.
*/
namespace husb238a::fval {
    inline int to_tccdeb(const int num) {
        if (num < 120 || num > 180 || num % 10 != 0) {
            return -1;
        }
        return num / 10 - 12;
    }

    inline int from_tccdeb(const uint8_t tccdeb) {
        return (tccdeb + 12) * 10;
    }

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

    inline int to_snk_pps_voltage(const float num) {
        if (num < 3 || num > 23.46 || static_cast<int>(num*100) % 2 != 0) {
            return -1;
        }
        return static_cast<int>((num - 3) / 0.02);
    }

    inline float from_snk_pps_voltage(const uint32_t voltage) {
        return static_cast<float>(voltage) * 2 / 100 + 3;
    }

    inline int to_snk_pps_current(const float num) {
        if (num < 0 || num > 6.35 || static_cast<int>(num*100) % 5 != 0) {
            return -1;
        }
        return static_cast<int>(num / 0.05);
    }

    inline float from_snk_pps_current(const uint32_t current) {
        return static_cast<float>(current) * 5 / 100;
    }
}

#endif //FIELDVALUES_HPP
