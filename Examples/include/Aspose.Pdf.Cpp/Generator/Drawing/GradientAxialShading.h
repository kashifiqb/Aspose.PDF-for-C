﻿#pragma once
/* Copyright (c) 2001-2016 Aspose Pty Ltd. All Rights Reserved. */

#include <system/shared_ptr.h>

#include "Generator/Drawing/PatternColorSpace.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Color; } }

namespace Aspose {

namespace Pdf {

namespace Drawing {

/// <summary>
/// Represents gradient axial shading class.
/// </summary>
class ASPOSE_PDF_SHARED_API GradientAxialShading : public Aspose::Pdf::Drawing::PatternColorSpace
{
    typedef GradientAxialShading ThisType;
    typedef Aspose::Pdf::Drawing::PatternColorSpace BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets start point.
    /// </summary>
    System::SharedPtr<Point> get_Start();
    /// <summary>
    /// Sets start point.
    /// </summary>
    void set_Start(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets end point.
    /// </summary>
    System::SharedPtr<Point> get_End();
    /// <summary>
    /// Sets end point.
    /// </summary>
    void set_End(System::SharedPtr<Point> value);
    /// <summary>
    /// Gets start color.
    /// </summary>
    System::SharedPtr<Color> get_StartColor();
    /// <summary>
    /// Sets start color.
    /// </summary>
    void set_StartColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets end color.
    /// </summary>
    System::SharedPtr<Color> get_EndColor();
    /// <summary>
    /// Sets end color.
    /// </summary>
    void set_EndColor(System::SharedPtr<Color> value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientAxialShading"/> class.
    /// </summary>
    GradientAxialShading();
    /// <summary>
    /// Initializes a new instance of the <see cref="GradientAxialShading"/> class.
    /// </summary>
    /// <param name="startColor">The start point.</param>
    /// <param name="endColor">The end point.</param>
    GradientAxialShading(System::SharedPtr<Color> startColor, System::SharedPtr<Color> endColor);
    
protected:

    bool get_ExtendBeyondStart();
    void set_ExtendBeyondStart(bool value);
    bool get_ExtendBeyondEnd();
    void set_ExtendBeyondEnd(bool value);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Point> pr_Start;
    System::SharedPtr<Point> pr_End;
    System::SharedPtr<Color> pr_StartColor;
    System::SharedPtr<Color> pr_EndColor;
    bool extendBeyondStart;
    bool extendBeyondEnd;
    
};

} // namespace Drawing
} // namespace Pdf
} // namespace Aspose


