/// @file system/text/encoder_fallback.h
#pragma once

#include "system/exceptions.h"
#include "system/object.h"
#include "fwd.h"

namespace System { namespace Text {

/// Provides fallback API to handle encoding error.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS EncoderFallback: public Object
{
protected:
    /// Constructor.
    EncoderFallback() = default;

public:
    /// Gets default exception fallback implementation.
    /// @return Fallback object.
    static ASPOSECPP_SHARED_API const EncoderFallbackPtr get_ExceptionFallback();
    /// Gets default replacement fallback implementation.
    /// @return Fallback object.
    static ASPOSECPP_SHARED_API const EncoderFallbackPtr get_ReplacementFallback();
    /// Gets default standard safe fallback implementation.
    /// @return Fallback object.
    static ASPOSECPP_SHARED_API const EncoderFallbackPtr get_StandardSafeFallback();

    /// Gets maximal number of characters that can be returned by fallback.
    /// @return Number of characters.
    virtual ASPOSECPP_SHARED_API int get_MaxCharCount() ASPOSE_CONST = 0;
    /// Gets buffer associated with fallback algorithm.
    /// @return Buffer object.
    virtual ASPOSECPP_SHARED_API EncoderFallbackBufferPtr CreateFallbackBuffer() = 0;
};

}} // namespace System::Text
