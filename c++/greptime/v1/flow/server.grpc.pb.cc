// Generated by the gRPC C++ plugin.
// If you make any local change, they will be lost.
// source: greptime/v1/flow/server.proto

#include "greptime/v1/flow/server.pb.h"
#include "greptime/v1/flow/server.grpc.pb.h"

#include <functional>
#include <grpcpp/support/async_stream.h>
#include <grpcpp/support/async_unary_call.h>
#include <grpcpp/impl/channel_interface.h>
#include <grpcpp/impl/client_unary_call.h>
#include <grpcpp/support/client_callback.h>
#include <grpcpp/support/message_allocator.h>
#include <grpcpp/support/method_handler.h>
#include <grpcpp/impl/rpc_service_method.h>
#include <grpcpp/support/server_callback.h>
#include <grpcpp/impl/codegen/server_callback_handlers.h>
#include <grpcpp/server_context.h>
#include <grpcpp/impl/service_type.h>
#include <grpcpp/support/sync_stream.h>
namespace greptime {
namespace v1 {
namespace flow {

static const char* Flow_method_names[] = {
  "/greptime.v1.flow.Flow/HandleCreateRemove",
  "/greptime.v1.flow.Flow/HandleMirrorRequest",
};

std::unique_ptr< Flow::Stub> Flow::NewStub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options) {
  (void)options;
  std::unique_ptr< Flow::Stub> stub(new Flow::Stub(channel, options));
  return stub;
}

Flow::Stub::Stub(const std::shared_ptr< ::grpc::ChannelInterface>& channel, const ::grpc::StubOptions& options)
  : channel_(channel), rpcmethod_HandleCreateRemove_(Flow_method_names[0], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  , rpcmethod_HandleMirrorRequest_(Flow_method_names[1], options.suffix_for_stats(),::grpc::internal::RpcMethod::NORMAL_RPC, channel)
  {}

::grpc::Status Flow::Stub::HandleCreateRemove(::grpc::ClientContext* context, const ::greptime::v1::flow::FlowRequest& request, ::greptime::v1::flow::FlowResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greptime::v1::flow::FlowRequest, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_HandleCreateRemove_, context, request, response);
}

void Flow::Stub::async::HandleCreateRemove(::grpc::ClientContext* context, const ::greptime::v1::flow::FlowRequest* request, ::greptime::v1::flow::FlowResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greptime::v1::flow::FlowRequest, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HandleCreateRemove_, context, request, response, std::move(f));
}

void Flow::Stub::async::HandleCreateRemove(::grpc::ClientContext* context, const ::greptime::v1::flow::FlowRequest* request, ::greptime::v1::flow::FlowResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HandleCreateRemove_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::flow::FlowResponse>* Flow::Stub::PrepareAsyncHandleCreateRemoveRaw(::grpc::ClientContext* context, const ::greptime::v1::flow::FlowRequest& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greptime::v1::flow::FlowResponse, ::greptime::v1::flow::FlowRequest, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_HandleCreateRemove_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::flow::FlowResponse>* Flow::Stub::AsyncHandleCreateRemoveRaw(::grpc::ClientContext* context, const ::greptime::v1::flow::FlowRequest& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHandleCreateRemoveRaw(context, request, cq);
  result->StartCall();
  return result;
}

::grpc::Status Flow::Stub::HandleMirrorRequest(::grpc::ClientContext* context, const ::greptime::v1::flow::InsertRequests& request, ::greptime::v1::flow::FlowResponse* response) {
  return ::grpc::internal::BlockingUnaryCall< ::greptime::v1::flow::InsertRequests, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), rpcmethod_HandleMirrorRequest_, context, request, response);
}

void Flow::Stub::async::HandleMirrorRequest(::grpc::ClientContext* context, const ::greptime::v1::flow::InsertRequests* request, ::greptime::v1::flow::FlowResponse* response, std::function<void(::grpc::Status)> f) {
  ::grpc::internal::CallbackUnaryCall< ::greptime::v1::flow::InsertRequests, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HandleMirrorRequest_, context, request, response, std::move(f));
}

void Flow::Stub::async::HandleMirrorRequest(::grpc::ClientContext* context, const ::greptime::v1::flow::InsertRequests* request, ::greptime::v1::flow::FlowResponse* response, ::grpc::ClientUnaryReactor* reactor) {
  ::grpc::internal::ClientCallbackUnaryFactory::Create< ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(stub_->channel_.get(), stub_->rpcmethod_HandleMirrorRequest_, context, request, response, reactor);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::flow::FlowResponse>* Flow::Stub::PrepareAsyncHandleMirrorRequestRaw(::grpc::ClientContext* context, const ::greptime::v1::flow::InsertRequests& request, ::grpc::CompletionQueue* cq) {
  return ::grpc::internal::ClientAsyncResponseReaderHelper::Create< ::greptime::v1::flow::FlowResponse, ::greptime::v1::flow::InsertRequests, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(channel_.get(), cq, rpcmethod_HandleMirrorRequest_, context, request);
}

::grpc::ClientAsyncResponseReader< ::greptime::v1::flow::FlowResponse>* Flow::Stub::AsyncHandleMirrorRequestRaw(::grpc::ClientContext* context, const ::greptime::v1::flow::InsertRequests& request, ::grpc::CompletionQueue* cq) {
  auto* result =
    this->PrepareAsyncHandleMirrorRequestRaw(context, request, cq);
  result->StartCall();
  return result;
}

Flow::Service::Service() {
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flow_method_names[0],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flow::Service, ::greptime::v1::flow::FlowRequest, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flow::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greptime::v1::flow::FlowRequest* req,
             ::greptime::v1::flow::FlowResponse* resp) {
               return service->HandleCreateRemove(ctx, req, resp);
             }, this)));
  AddMethod(new ::grpc::internal::RpcServiceMethod(
      Flow_method_names[1],
      ::grpc::internal::RpcMethod::NORMAL_RPC,
      new ::grpc::internal::RpcMethodHandler< Flow::Service, ::greptime::v1::flow::InsertRequests, ::greptime::v1::flow::FlowResponse, ::grpc::protobuf::MessageLite, ::grpc::protobuf::MessageLite>(
          [](Flow::Service* service,
             ::grpc::ServerContext* ctx,
             const ::greptime::v1::flow::InsertRequests* req,
             ::greptime::v1::flow::FlowResponse* resp) {
               return service->HandleMirrorRequest(ctx, req, resp);
             }, this)));
}

Flow::Service::~Service() {
}

::grpc::Status Flow::Service::HandleCreateRemove(::grpc::ServerContext* context, const ::greptime::v1::flow::FlowRequest* request, ::greptime::v1::flow::FlowResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}

::grpc::Status Flow::Service::HandleMirrorRequest(::grpc::ServerContext* context, const ::greptime::v1::flow::InsertRequests* request, ::greptime::v1::flow::FlowResponse* response) {
  (void) context;
  (void) request;
  (void) response;
  return ::grpc::Status(::grpc::StatusCode::UNIMPLEMENTED, "");
}


}  // namespace greptime
}  // namespace v1
}  // namespace flow

