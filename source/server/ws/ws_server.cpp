/*!
    \file ws_server.cpp
    \brief WebSocket server implementation
    \author Ivan Shynkarenka
    \date 27.05.2019
    \copyright MIT License
*/

#include "server/ws/ws_server.h"

namespace CppServer {
namespace WS {

bool WSServer::CloseAll(int status, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSServer::CloseAll(int status, std::string_view text)
{ __builtin_trap() /* STUB: not implemented */; }

bool WSServer::Multicast(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace WS
} // namespace CppServer
