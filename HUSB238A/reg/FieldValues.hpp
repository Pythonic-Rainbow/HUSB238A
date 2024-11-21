#ifndef FIELDVALUES_HPP
#define FIELDVALUES_HPP


/**
* @file FieldValues.hpp
* @brief Field values for HUSB238A
*/
namespace husb238a::fieldval {
    enum GoCommand : uint8_t {
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

    enum PDOSelect : uint8_t {
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

#endif //FIELDVALUES_HPP
