/*!
    \file ssl_context.cpp
    \brief SSL context implementation
    \author Ivan Shynkarenka
    \date 12.02.2019
    \copyright MIT License
*/

#include "server/asio/ssl_context.h"

#if defined(_WIN32) || defined(_WIN64)
#include <wincrypt.h>
#endif

namespace CppServer {
namespace Asio {

void SSLContext::set_root_certs()
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer
