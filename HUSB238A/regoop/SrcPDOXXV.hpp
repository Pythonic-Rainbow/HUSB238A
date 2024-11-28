#ifndef SRCPDOXXV_HPP
#define SRCPDOXXV_HPP

namespace husb238a {

    /** @brief Register for SRC_PDO_XXV (0x6A-0x71) and SRC_PDO_PPSX (0x72-0x74)
    *
    */
    class SrcPDOXXV final : public Register {
        RegisterAddress addr;

    public:
        enum Addresses : uint8_t {
            V5 = SRC_PDO_5V,
            V9 = SRC_PDO_9V,
            V12 = SRC_PDO_12V,
            V15 = SRC_PDO_15V,
            V20 = SRC_PDO_20V,
            V28 = SRC_PDO_28V,
            V36 = SRC_PDO_36V,
            V48 = SRC_PDO_48V,
            PPS1 = SRC_PDO_PPS1,
            PPS2 = SRC_PDO_PPS2,
            PPS3 = SRC_PDO_PPS3
        };

        explicit SrcPDOXXV(const Addresses addr) : addr(static_cast<RegisterAddress>(addr)) {}

        RegisterAddress get_addr() override {
            return addr;
        }

        bool detect() const {
            return get_bit(field::DETECT);
        }

        uint8_t current() const {
            return get_bits(field::CURRENT);
        }
    };
} // husb238a

#endif //SRCPDOXXV_HPP
