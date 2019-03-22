class relational {
    typedef void (safe_bool_helper::*safe_bool)();
public:
    operator safe_bool() const;
    safe_bool operator!() const;
};