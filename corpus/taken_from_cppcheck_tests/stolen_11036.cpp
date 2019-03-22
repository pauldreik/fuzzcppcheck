enum class Device { I2C0, I2C1 };
template <Device D>
const char* deviceFile;
template <>
const char* deviceFile<Device::I2C0> = "/tmp/i2c-0";
