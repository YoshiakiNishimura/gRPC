#pragma once

#include <cstddef>
#include <grpcpp/client_context.h>
#include "generic_record.h"

class generic_client {
  public:
    using function_index_type = std::size_t;
    virtual ~generic_client() = default;

    virtual void call(grpc::ClientContext& context, function_index_type function_index,
        generic_record& request, generic_record& response) const = 0;
};
