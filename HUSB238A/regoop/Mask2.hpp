#ifndef MASK2_HPP
#define MASK2_HPP

namespace husb238a {
    class Mask2 final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return MASK2;
        }

        bool m_exit_epr() const {
            return get_bit(regdetail::M_EXIT_EPR);
        }

        void m_exit_epr(const bool value) {
            set_bit_n(regdetail::M_EXIT_EPR, value);
        }

        bool m_go_fail() const {
            return get_bit(regdetail::M_GO_FAIL);
        }

        void m_go_fail(const bool value) {
            set_bit_n(regdetail::M_GO_FAIL, value);
        }

        bool m_epr_mode() const {
            return get_bit(regdetail::M_EPR_MODE);
        }

        void m_epr_mode(const bool value) {
            set_bit_n(regdetail::M_EPR_MODE, value);
        }

        bool m_pd_hv() const {
            return get_bit(regdetail::M_PD_HV);
        }

        void m_pd_hv(const bool value) {
            set_bit_n(regdetail::M_PD_HV, value);
        }
    };
} // husb238a

#endif //MASK2_HPP
