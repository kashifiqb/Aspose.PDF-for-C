﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT


#include <system/enum.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies the quality of text rendering.
/// </summary>
enum class TextRenderingHint
{
    /// <summary>
    /// Each character is drawn using its glyph bitmap, with the system default rendering hint. The text will be drawn using whatever font-smoothing settings the user has selected for the system.
    /// </summary>
    SystemDefault,
    /// <summary>
    /// Each character is drawn using its glyph bitmap. Hinting is used to improve character appearance on stems and curvature.
    /// </summary>
    SingleBitPerPixelGridFit,
    /// <summary>
    /// Each character is drawn using its glyph bitmap. Hinting is not used.
    /// </summary>
    SingleBitPerPixel,
    /// <summary>
    /// Each character is drawn using its antialiased glyph bitmap with hinting. Much better quality due to antialiasing, but at a higher performance cost.
    /// </summary>
    AntiAliasGridFit,
    /// <summary>
    /// Each character is drawn using its antialiased glyph bitmap without hinting. Better quality due to antialiasing. Stem width differences may be noticeable because hinting is turned off.
    /// </summary>
    AntiAlias,
    /// <summary>
    /// Each character is drawn using its glyph ClearType bitmap with hinting. The highest quality setting. Used to take advantage of ClearType font features.
    /// </summary>
    ClearTypeGridFit
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif


template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::TextRenderingHint>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::TextRenderingHint, const char_t*>, 6>& values();
};



