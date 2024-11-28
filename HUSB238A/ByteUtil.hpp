#ifndef BYTEUTIL_HPP
#define BYTEUTIL_HPP

namespace husb238a {
    constexpr int get_rbit_pos(const uint8_t mask) {
        return __builtin_ctz(mask);
    }

    // Count amount of bits in a byte
    inline int count(uint8_t byte) {
        int count = 0;
        while (byte) {
            byte &= byte - 1; // Clears the lowest set bit
            count++;
        }
        return count;
    }

    inline uint16_t combine(const uint8_t b1, const uint8_t b0) {
        return b1 << 8 | b0;
    }

    inline uint32_t combine(const uint8_t b3, const uint8_t b2, const uint8_t b1, const uint8_t b0) {
        return b3 << 24 | b2 << 16 | b1 << 8 | b0;
    }

    /**
    * Gets a single bit
    * @param self self
    * @param mask bit mask for the single bit. You should use the enums defined in Fields.hpp
     */
    inline bool get_bit(const uint8_t self, const uint8_t mask) {
        return self & mask;
    }

    /**
    * Gets a range of bits
    * @param self self
    * @param mask bit mask for the range. NOTE: You should use the enums defined in Fields.hpp
     */
    inline uint8_t get_bits(uint8_t self, const uint8_t mask) {
        self &= mask;
        return self >> get_rbit_pos(mask);
    }

    /**
     * Set a range of bits to 0
     * @param self self
     * @param mask bit mask for the range. NOTE: You should use the enums defined in Fields.hpp
    */
    inline uint8_t set_bits_0(const uint8_t self, const uint8_t mask) {
        return self & ~mask;
    }

    /**
     * Set a range of bits to 1
     * @param self self
     * @param mask bit mask for the range. NOTE: You should use the enums defined in Fields.hpp
    */
    inline uint8_t set_bits_1(const uint8_t self, const uint8_t mask) {
        return self | mask;
    }

    /**
    * Set a single bit to a value
    * @param self self
    * @param mask bit mask for the single bit. NOTE: You should use the enums defined in Fields.hpp
    * @param value The bit value
    */
    inline uint8_t set_bit_n(uint8_t self, const uint8_t mask, const bool value) {
        self = set_bits_0(self, mask);  // Clear that bit first
        return self | mask * value;  // Set the bit to the value
    }

    /**
    * Set a range of bits to a value
    * @param self self
    * @param mask bit mask for the range. NOTE: You should use the enums defined in Fields.hpp
    * @param value The bits value.
    */
    inline uint8_t set_bits_n(uint8_t self, const uint8_t mask, uint8_t value) {
        value &= (1 << count(mask)) - 1;  // Clear high bits that exceed the mask length
        self = set_bits_0(self, mask);  // Clear those bits first
        return self | value << get_rbit_pos(mask);  // Set the bits to the value
    }
}

#endif //BYTEUTIL_HPP
