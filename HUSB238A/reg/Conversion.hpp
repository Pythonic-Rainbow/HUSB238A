#ifndef CONVERSION_H
#define CONVERSION_H

/**
* @file Conversion.hpp
* @brief Conversion between human-readable numbers <-> register values.
* to_x: Convert to register value. from_x: Convert to human-readable
* For to_x methods the return value is -1 if the input is invalid.
*
* Note that the units used are based on the datasheet down to the nearest integer.
* e.g. some functions return mV and some V
*/
namespace husb238a::cvsn {
    struct OffsetStep {
        const int offset;
        const int step;
    };

    inline int to_x(const int input, const int num_steps, const OffsetStep& os) {
        if (input < os.offset || input > os.offset + num_steps * os.step || input % os.step != 0) {
            return -1;
        }
        return (input - os.offset) / os.step;
    }

    constexpr int from_x(const int input, const OffsetStep& os) {
        return input * os.step + os.offset;
    }

    constexpr OffsetStep TCCDEB = {120, 10};

    inline int to_tccdeb(const int ms) {
        return to_x(ms, 0b110, TCCDEB);
    }

    inline int from_tccdeb(const uint8_t tccdeb) {
        return from_x(tccdeb, TCCDEB);
    }

    // Suitable for SNK_PPS_VOLTAGE(0x1A) and SRC_PPS_STATUS_VOLTAGE(0x89)
    constexpr OffsetStep PPS_VOLTAGE = {3000, 20};

    inline int to_pps_voltage(const int mV) {
        return to_x(mV, 0x3FF, PPS_VOLTAGE);
    }

    inline int from_pps_voltage(const uint16_t voltage) {
        return from_x(voltage, PPS_VOLTAGE);
    }

    // Suitable for SNK_PPS_CURRENT(0x1B), SNK_AVS_CURRENT(0x1D) and EPR_AVS_CURRENT(0x20)
    constexpr OffsetStep REQUEST_CURRENT = {0, 50};

    inline int to_request_current(const int mA) {
        return to_x(mA, 0x7F, REQUEST_CURRENT);
    }

    inline int from_request_current(const uint8_t current) {
        return from_x(current, REQUEST_CURRENT);
    }

    constexpr OffsetStep SNK_AVS_VOLTAGE = {0, 100};

    // TODO: Reg SNK_AVS_CURRENT[7] Seems to be related. Check whether this value spans 8 or 9 bits. If yes then merge with EPR_AVS_VOLT
    inline int to_snk_avs_voltage(const int mV) {
        return to_x(mV, 0xFF, SNK_AVS_VOLTAGE);
    }

    inline int from_snk_avs_voltage(const uint8_t voltage) {
        return from_x(voltage, SNK_AVS_VOLTAGE);
    }

    constexpr OffsetStep EPR_AVS_VOLTAGE = {0, 100};

    inline int to_epr_avs_voltage(const int mV) {
        return to_x(mV, 0x1FF, EPR_AVS_VOLTAGE);
    }

    inline int from_epr_avs_voltage(const uint16_t voltage) {
        return from_x(voltage, EPR_AVS_VOLTAGE);
    }

    inline int from_contract_current_fpdo(const uint8_t current) {
        const int step = current <= 0x7D ? 20 : 40;
        return from_x(current, {500, step});
    }

    inline int from_contract_current_apdo(const uint8_t current) {
        return from_x(current, {0, 50});
    }

    constexpr OffsetStep SRC_PDO_XXV_CURRENT = {0, 100};

    inline int to_src_pdo_xxv_current(const int mA) {
        return to_x(mA, 0x50, SRC_PDO_XXV_CURRENT);
    }

    inline int from_src_pdo_xxv_current(const uint8_t current) {
        return from_x(current, SRC_PDO_XXV_CURRENT);
    }

    inline int from_avs_max_voltage(const uint8_t voltage) {
       return from_x(voltage, {5, 1});
    }

    // Suitable for SRC_AVS_PDP (0x77) and EPR_AVS_PDP (0x78)
    inline int from_avs_pdp(const uint8_t pdp) {
        return from_x(pdp, {0, 1});
    }

    inline int from_epr_avs_max_voltage(const uint8_t voltage) {
        return from_x(voltage, {20, 1});
    }

    inline int from_vbus_measurement(const uint8_t mV) {
        return from_x(mV, {0, 125});
    }

}

#endif //CONVERSION_H
