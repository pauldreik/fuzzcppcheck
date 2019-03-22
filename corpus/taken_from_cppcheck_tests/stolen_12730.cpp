template <typename T = class service> struct scoped_service;
struct service {};
template <> struct scoped_service<service> {};
template <typename T>
struct scoped_service : scoped_service<service>
{
  scoped_service( T* ptr ) : scoped_service<service>(ptr), m_ptr(ptr) {}
  T* const m_ptr;
};