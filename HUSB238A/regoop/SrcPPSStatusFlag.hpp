#ifndef SRCPPSSTATUSFLAG_HPP
#define SRCPPSSTATUSFLAG_HPP

namespace husb238a {

    class SrcPPSStatusFlag final : public Register {
    public:

        RegisterAddress get_addr() override {
            return SRC_PPS_STATUS_FLAG;
        }

        uint8_t src_pps_vol_m() const {
            return get_bits(field::SRC_PPS_VOL_M);
        }

        bool omf() const {
            return get_bit(field::OMF);
        }

        uint8_t ptf() const {
            return get_bits(field::PTF);
        }

    };
} // husb238a

#endif //VDMHEADER_HPP
