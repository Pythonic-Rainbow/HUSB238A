#ifndef SNKPDP_HPP
#define SNKPDP_HPP

namespace husb238a {
    class SnkPDP final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return SNK_PDP;
        }

        uint8_t snk_pdp() const {
            return get_bits(field::SNK_PDP);
        }

        void snk_pdp(const uint8_t value) {
            set_bits_n(field::SNK_PDP, value);
        }
    };
}

#endif //SNKPDP_HPP
