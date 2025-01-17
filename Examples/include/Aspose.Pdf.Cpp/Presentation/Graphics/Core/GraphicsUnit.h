﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if !COMPACT


namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Specifies the unit of measure for the given data.
/// </summary>
enum class GraphicsUnit
{
    /// <summary>
    /// Specifies the world coordinate system unit as the unit of measure.
    /// </summary>
    World,
    /// <summary>
    /// Specifies the unit of measure of the display device. Typically pixels for video displays, and 1/100 inch for printers.
    /// </summary>
    Display,
    /// <summary>
    /// Specifies a device pixel as the unit of measure.
    /// </summary>
    Pixel,
    /// <summary>
    /// Specifies a printer's point (1/72 inch) as the unit of measure.
    /// </summary>
    Point,
    /// <summary>
    /// Specifies the inch as the unit of measure.
    /// </summary>
    Inch,
    /// <summary>
    /// Specifies the document unit (1/300 inch) as the unit of measure.
    /// </summary>
    Document,
    /// <summary>
    /// Specifies the millimeter as the unit of measure.
    /// </summary>
    Millimeter
};

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



