struct Bar {
    virtual std::string get_endpoint_url() const noexcept;
};
struct Foo : Bar {
    virtual std::string get_endpoint_url() const noexcept override final;
};