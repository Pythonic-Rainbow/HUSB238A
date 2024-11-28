#ifndef SOURCECAPINFO_HPP
#define SOURCECAPINFO_HPP

namespace husb238a {
    class SourceCapInfo final : public Register {
    public:
        RegisterAddress get_addr() override {
            return SOURCECAP_INFO;
        }

        bool vdm_mode() const {
            return get_bit(field::VDM_MODE);
        }

        bool power_limit() const {
            return get_bit(field::POWER_LIMIT);
        }

        bool dual_role_power() const {
            return get_bit(field::DUAL_ROLE_POWER);
        }

        bool usb_suspend_supported() const {
            return get_bit(field::USB_SUSPEND_SUPPORTED);
        }

        bool usb_communications_capable() const {
            return get_bit(field::USB_COMMUNICATIONS_CAPABLE);
        }

        bool dual_role_data() const {
            return get_bit(field::DUAL_ROLE_DATA);
        }

        bool epr_mode_capable() const {
            return get_bit(field::EPR_MODE_CAPABLE);
        }
    };
}

#endif //SOURCECAPINFO_HPP
