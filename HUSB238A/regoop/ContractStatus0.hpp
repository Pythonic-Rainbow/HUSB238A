#ifndef CONTRACTSTATUS0_HPP
#define CONTRACTSTATUS0_HPP

namespace husb238a {
    class ContractStatus0 final : public Register {
    public:
        RegisterAddress get_addr() override {
            return CONTRACT_STATUS0;
        }

        fval::PDContract::T get_pd_contract() const {
            return static_cast<fval::PDContract::T>(get_bits(field::PD_CONTRACT));
        }

        fval::DPMContract::T get_dpm_contract() const {
            return static_cast<fval::DPMContract::T>(get_bits(field::DPM_CONTRACT));
        }
    };

} // husb238a

#endif //CONTRACTSTATUS0_HPP
