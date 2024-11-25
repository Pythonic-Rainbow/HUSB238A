#ifndef TYPE_HPP
#define TYPE_HPP

namespace husb238a {
    class Type final : public Register {
        RegisterAddress get_addr() override {
            return TYPE;
        }

        bool cc_rx_active() const {
            return get_bit(field::CC_RX_ACTIVE);
        }

        bool debugsnk() const {
            return get_bit(field::DEBUGSNK);
        }

        bool sink() const {
            return get_bit(field::SINK);
        }
    };
}

#endif //TYPE_HPP
