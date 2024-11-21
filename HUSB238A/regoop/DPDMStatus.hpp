#ifndef DPDMSTATUS_HPP
#define DPDMSTATUS_HPP

namespace husb238a {

    class DPDMStatus final : public Register {
    public:

        RegisterAddress get_addr() override {
            return DPDM_STATUS;
        }

        uint8_t get_cdp_flag() const {
            return get_bit(field::CDP_FLAG);
        }

        uint8_t get_sdp_flag() const {
            return get_bit(field::SDP_FLAG);
        }

        uint8_t get_divider3_flag() const {
            return get_bit(field::DIVIDER3_FLAG);
        }
    };

} // husb238a

#endif //DPDMSTATUS_HPP
