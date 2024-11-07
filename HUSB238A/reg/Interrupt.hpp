#ifndef INTERRUPT_HPP
#define INTERRUPT_HPP

namespace husb238a {
    class Interrupt final : public WRegister {
    public:
        RegisterAddress get_addr() override {
            return INTERRUPT;
        }

        bool i_exit_epr() const {
            return get_bit(regdetail::I_EXIT_EPR);
        }

        void i_exit_epr(const bool value) {
            set_bit_n(regdetail::I_EXIT_EPR, value);
        }

        bool i_go_fail() const {
            return get_bit(regdetail::I_GO_FAIL);
        }

        void i_go_fail(const bool value) {
            set_bit_n(regdetail::I_GO_FAIL, value);
        }

        bool i_epr_mode() const {
            return get_bit(regdetail::I_EPR_MODE);
        }

        void i_epr_mode(const bool value) {
            set_bit_n(regdetail::I_EPR_MODE, value);
        }

        bool i_pd_hv() const {
            return get_bit(regdetail::I_PD_HV);
        }

        void i_pd_hv(const bool value) {
            set_bit_n(regdetail::I_PD_HV, value);
        }
    };
} // husb238a

#endif //INTERRUPT_HPP
