/*!
    \file ssl_server.cpp
    \brief SSL server implementation
    \author Ivan Shynkarenka
    \date 30.12.2016
    \copyright MIT License
*/

#include "server/asio/ssl_server.h"

namespace CppServer {
namespace Asio {

SSLServer::SSLServer(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, int port, InternetProtocol protocol)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _port(port),
      _context(context),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

SSLServer::SSLServer(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _context(context),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

SSLServer::SSLServer(const std::shared_ptr<Service>& service, const std::shared_ptr<SSLContext>& context, const asio::ip::tcp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _context(context),
      _endpoint(endpoint),
      _acceptor(*_io_context),
      _started(false),
      _bytes_pending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _option_keep_alive(false),
      _option_no_delay(false),
      _option_reuse_address(false),
      _option_reuse_port(false)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLServer::Start()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLServer::Stop()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLServer::Restart()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLServer::Accept()
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLServer::Multicast(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool SSLServer::DisconnectAll()
{ __builtin_trap() /* STUB: not implemented */; }

std::shared_ptr<SSLSession> SSLServer::FindSession(const CppCommon::UUID& id)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLServer::RegisterSession()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLServer::UnregisterSession(const CppCommon::UUID& id)
{ __builtin_trap() /* STUB: not implemented */; }

void SSLServer::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void SSLServer::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer
