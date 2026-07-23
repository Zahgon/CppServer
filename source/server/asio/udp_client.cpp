/*!
    \file udp_client.cpp
    \brief UDP client implementation
    \author Ivan Shynkarenka
    \date 23.12.2016
    \copyright MIT License
*/

#include "server/asio/udp_client.h"

namespace CppServer {
namespace Asio {

UDPClient::UDPClient(const std::shared_ptr<Service>& service, const std::string& address, int port)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _port(port),
      _socket(*_io_context),
      _resolving(false),
      _connected(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false),
      _option_reuse_address(false),
      _option_reuse_port(false),
      _option_multicast(false)
{ __builtin_trap() /* STUB: not implemented */; }

UDPClient::UDPClient(const std::shared_ptr<Service>& service, const std::string& address, const std::string& scheme)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(address),
      _scheme(scheme),
      _port(0),
      _socket(*_io_context),
      _resolving(false),
      _connected(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false),
      _option_reuse_address(false),
      _option_reuse_port(false),
      _option_multicast(false)
{ __builtin_trap() /* STUB: not implemented */; }

UDPClient::UDPClient(const std::shared_ptr<Service>& service, const asio::ip::udp::endpoint& endpoint)
    : _id(CppCommon::UUID::Sequential()),
      _service(service),
      _io_context(_service->GetAsioContext()),
      _strand(*_io_context),
      _strand_required(_service->IsStrandRequired()),
      _address(endpoint.address().to_string()),
      _port(endpoint.port()),
      _endpoint(endpoint),
      _socket(*_io_context),
      _resolving(false),
      _connected(false),
      _bytes_sending(0),
      _bytes_sent(0),
      _bytes_received(0),
      _datagrams_sent(0),
      _datagrams_received(0),
      _receiving(false),
      _sending(false),
      _option_reuse_address(false),
      _option_reuse_port(false),
      _option_multicast(false)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::option_receive_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::option_send_buffer_size() const
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::SetupReceiveBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::SetupSendBufferSize(size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::Connect()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::Connect(const std::shared_ptr<UDPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::DisconnectInternal()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::Reconnect()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::ConnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::ConnectAsync(const std::shared_ptr<UDPResolver>& resolver)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::DisconnectInternalAsync(bool dispatch)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::ReconnectAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::JoinMulticastGroup(const std::string& address)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::LeaveMulticastGroup(const std::string& address)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::JoinMulticastGroupAsync(const std::string& address)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::LeaveMulticastGroupAsync(const std::string& address)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Send(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Send(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Send(const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Send(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::SendAsync(const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

bool UDPClient::SendAsync(const asio::ip::udp::endpoint& endpoint, const void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Receive(asio::ip::udp::endpoint& endpoint, void* buffer, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

std::string UDPClient::Receive(asio::ip::udp::endpoint& endpoint, size_t size)
{ __builtin_trap() /* STUB: not implemented */; }

size_t UDPClient::Receive(asio::ip::udp::endpoint& endpoint, void* buffer, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

std::string UDPClient::Receive(asio::ip::udp::endpoint& endpoint, size_t size, const CppCommon::Timespan& timeout)
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::ReceiveAsync()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::TryReceive()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::ClearBuffers()
{ __builtin_trap() /* STUB: not implemented */; }

void UDPClient::SendError(std::error_code ec)
{ __builtin_trap() /* STUB: not implemented */; }

} // namespace Asio
} // namespace CppServer
