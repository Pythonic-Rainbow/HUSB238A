#ifndef CONTRACTSTATUS0_HPP
#define CONTRACTSTATUS0_HPP

namespace husb238a {
    class ContractStatus0 : public Register {
    public:
        explicit ContractStatus0(const uint8_t value) : Register(value) {}

        RegisterAddress get_addr() override {
            return CONTRACT_STATUS0;
        }

        uint8_t get_pd_contract() const {
            return get_bits(regdetail::PD_CONTRACT);
        }

        uint8_t get_dpm_contract() const {
            return get_bits(regdetail::DPM_CONTRACT);
        }
    };

} // husb238a

#endif //CONTRACTSTATUS0_HPP
