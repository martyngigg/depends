#pragma once

#include "kernel_export.h"
#include <string>
#include <vector>

namespace kernel {

/// Return version as a string
KERNEL_EXPORT const std::string version_str() noexcept;

} // namespace kernel
