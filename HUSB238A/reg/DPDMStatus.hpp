#ifndef DPDMSTATUS_HPP
#define DPDMSTATUS_HPP

namespace husb238a {

    class DPDMStatus : public Register {
    public:
        explicit DPDMStatus(const uint8_t value) : Register(value) {}

        RegisterAddress get_addr() override {
            return DPDM_STATUS;
        }

        uint8_t get_cdp_flag() const {
            return get_bit(regdetail::CDP_FLAG);
        }

        uint8_t get_sdp_flag() const {
            return get_bit(regdetail::SDP_FLAG);
        }

        uint8_t get_divider3_flag() const {
            return get_bit(regdetail::DIVIDER3_FLAG);
        }
    };

} // husb238a

#endif //DPDMSTATUS_HPP
