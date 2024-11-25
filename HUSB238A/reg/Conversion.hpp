#ifndef CONVERSION_H
#define CONVERSION_H

/**
* @file Conversion.hpp
* @brief Conversion between human-readable numbers <-> register values.
* to_x: Convert to register value. from_x: Convert to human-readable
* For to_x methods the return value is -1 if the input is invalid.
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

    constexpr OffsetStep SNK_PPS_VOLTAGE = {3000, 20};

    inline int to_snk_pps_voltage(const int mV) {
        return to_x(mV, 0x3FF, SNK_PPS_VOLTAGE);
    }

    inline int from_snk_pps_voltage(const uint16_t voltage) {
        return from_x(voltage, SNK_PPS_VOLTAGE);
    }

    constexpr OffsetStep SNK_PPS_CURRENT = {0, 50};

    inline int to_snk_pps_current(const int mA) {
        return to_x(mA, 0x7F, SNK_PPS_CURRENT);
    }

    inline int from_snk_pps_current(const uint8_t current) {
        return from_x(current, SNK_PPS_CURRENT);
    }

    constexpr OffsetStep SNK_AVS_VOLTAGE = {0, 100};

    // TODO: Reg SNK_AVS_CURRENT[7] Seems to be related. Check whether this value spans 8 or 9 bits
    inline int to_snk_avs_voltage(const int mV) {
        return to_x(mV, 0xFF, SNK_AVS_VOLTAGE);
    }

    inline int from_snk_avs_voltage(const uint8_t voltage) {
        return from_x(voltage, SNK_AVS_VOLTAGE);
    }

    constexpr OffsetStep AVS_CURRENT = {0, 50};

    inline int to_avs_current(const int mA) {
        return to_x(mA, 0x7F, AVS_CURRENT);
    }

    inline int from_avs_current(const uint8_t current) {
        return from_x(current, AVS_CURRENT);
    }

    constexpr OffsetStep EPR_AVS_VOLTAGE = {0, 100};

    inline int to_epr_avs_voltage(const int mV) {
        return to_x(mV, 0x1FF, EPR_AVS_VOLTAGE);
    }

    inline int from_epr_avs_voltage(const uint16_t voltage) {
        return from_x(voltage, EPR_AVS_VOLTAGE);
    }

}

#endif //CONVERSION_H
