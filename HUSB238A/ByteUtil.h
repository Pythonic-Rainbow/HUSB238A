#ifndef BYTEUTIL_H
#define BYTEUTIL_H

namespace husb238a {
    /**
    * Gets a single bit
    * @param self self
    * @param mask bit mask for the single bit. You should use the enums defined in RegisterDetails.hpp
     */
    inline bool get_bit(const uint8_t self, const uint8_t mask) {
        return self & mask;
    }

    /**
     * Set a range of bits to 0
     * @param self self
     * @param mask The bit mask to set
    */
    inline uint8_t set_bits_0(const uint8_t self, const uint8_t mask) {
        return self & ~mask;
    }

    /**
     * Set a range of bits to 1
     * @param self self
     * @param mask The bit mask to set
    */
    inline uint8_t set_bits_1(const uint8_t self, const uint8_t mask) {
        return self | mask;
    }

    /**
    * Set a single bit to a value
    */
    inline uint8_t set_bit_n(uint8_t self, const uint8_t mask, const bool value) {
        self = set_bits_0(self, mask);  // Clear that bit first
        return self | mask * value;  // Set the bit to the value
    }
}

#endif //BYTEUTIL_H
