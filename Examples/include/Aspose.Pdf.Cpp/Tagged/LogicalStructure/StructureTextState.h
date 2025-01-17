﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/nullable.h>
#include <system/enum_helpers.h>

#include "Text/FontStyles.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Tagged { namespace Helpers { class StructureTextStateFactory; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BLSTextElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ILSTextElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableCellElement; } } }
namespace Aspose { namespace Pdf { namespace Text { class Font; } } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { namespace Text { class TextState; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents text state settings for Text Structure Elements and TaggedContent (ITextElement, ITaggedContent)
/// </summary>
class ASPOSE_PDF_SHARED_API StructureTextState : public System::Object
{
    typedef StructureTextState ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::Helpers::StructureTextStateFactory;
    friend class Aspose::Pdf::LogicalStructure::BLSTextElement;
    friend class Aspose::Pdf::LogicalStructure::ILSTextElement;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::LogicalStructure::TableCellElement;
    
public:

    /// <summary>
    ///     Gets the font of text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Font</c> property from parent structure element.
    /// </remarks>
    System::SharedPtr<Aspose::Pdf::Text::Font> get_Font();
    /// <summary>
    ///     Sets the font of text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Font</c> property from parent structure element.
    /// </remarks>
    void set_Font(System::SharedPtr<Aspose::Pdf::Text::Font> value);
    /// <summary>
    ///     Gets font size of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontSize</c> property from parent structure element.
    /// </remarks>
    System::Nullable<float> get_FontSize();
    /// <summary>
    ///     Sets font size of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontSize</c> property from parent structure element.
    /// </remarks>
    void set_FontSize(System::Nullable<float> value);
    /// <summary>
    ///     Gets font style of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontStyle</c> property from parent structure element.
    /// </remarks>
    System::Nullable<Aspose::Pdf::Text::FontStyles> get_FontStyle();
    /// <summary>
    ///     Sets font style of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>FontStyle</c> property from parent structure element.
    /// </remarks>
    void set_FontStyle(System::Nullable<Aspose::Pdf::Text::FontStyles> value);
    /// <summary>
    ///     Gets foreground color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>ForegroundColor</c> property from parent structure element.
    /// </remarks>
    System::SharedPtr<Color> get_ForegroundColor();
    /// <summary>
    ///     Sets foreground color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>ForegroundColor</c> property from parent structure element.
    /// </remarks>
    void set_ForegroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets background color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>BackgroundColor</c> property from parent structure element.
    /// </remarks>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    ///     Sets background color of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>BackgroundColor</c> property from parent structure element.
    /// </remarks>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    ///     Gets underline for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Underline</c> property from parent structure element.
    /// </remarks>
    System::Nullable<bool> get_Underline();
    /// <summary>
    ///     Sets underline for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Underline</c> property from parent structure element.
    /// </remarks>
    void set_Underline(System::Nullable<bool> value);
    /// <summary>
    ///     Gets strikeout for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>StrikeOut</c> property from parent structure element.
    /// </remarks>
    System::Nullable<bool> get_StrikeOut();
    /// <summary>
    ///     Sets strikeout for the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>StrikeOut</c> property from parent structure element.
    /// </remarks>
    void set_StrikeOut(System::Nullable<bool> value);
    /// <summary>
    ///     Gets superscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Superscript</c> property from parent structure element.
    /// </remarks>
    System::Nullable<bool> get_Superscript();
    /// <summary>
    ///     Sets superscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Superscript</c> property from parent structure element.
    /// </remarks>
    void set_Superscript(System::Nullable<bool> value);
    /// <summary>
    ///     Gets subscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Subscript</c> property from parent structure element.
    /// </remarks>
    System::Nullable<bool> get_Subscript();
    /// <summary>
    ///     Sets subscript of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>Subscript</c> property from parent structure element.
    /// </remarks>
    void set_Subscript(System::Nullable<bool> value);
    /// <summary>
    ///     Gets horizontal scaling of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>HorizontalScaling</c> property from parent structure element.
    /// </remarks>
    System::Nullable<float> get_HorizontalScaling();
    /// <summary>
    ///     Sets horizontal scaling of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>HorizontalScaling</c> property from parent structure element.
    /// </remarks>
    void set_HorizontalScaling(System::Nullable<float> value);
    /// <summary>
    ///     Gets line spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>LineSpacing</c> property from parent structure element.
    /// </remarks>
    System::Nullable<float> get_LineSpacing();
    /// <summary>
    ///     Sets line spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>LineSpacing</c> property from parent structure element.
    /// </remarks>
    void set_LineSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets character spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>CharacterSpacing</c> property from parent structure element.
    /// </remarks>
    System::Nullable<float> get_CharacterSpacing();
    /// <summary>
    ///     Sets character spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>CharacterSpacing</c> property from parent structure element.
    /// </remarks>
    void set_CharacterSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets word spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>WordSpacing</c> property from parent structure element.
    /// </remarks>
    System::Nullable<float> get_WordSpacing();
    /// <summary>
    ///     Sets word spacing of the text.
    /// </summary>
    /// <remarks>
    ///     Can be null. Use null to inherit <c>WordSpacing</c> property from parent structure element.
    /// </remarks>
    void set_WordSpacing(System::Nullable<float> value);
    /// <summary>
    ///     Gets margin for block structure element.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::MarginInfo> get_MarginInfo();
    /// <summary>
    ///     Sets margin for block structure element.
    /// </summary>
    void set_MarginInfo(System::SharedPtr<Aspose::Pdf::MarginInfo> value);
    
protected:

    StructureTextState();
    
    void InitDefault();
    void Update(System::SharedPtr<StructureTextState> structureTextState);
    System::SharedPtr<Aspose::Pdf::Text::TextState> CreateTextState();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Text::Font> _font;
    System::Nullable<float> _fontSize;
    System::Nullable<Aspose::Pdf::Text::FontStyles> _fontStyle;
    System::SharedPtr<Color> _foregroundColor;
    System::SharedPtr<Color> _backgroundColor;
    System::Nullable<bool> _underline;
    System::Nullable<bool> _strikeOut;
    System::Nullable<bool> _superscript;
    System::Nullable<bool> _subscript;
    System::Nullable<float> _horizontalScaling;
    System::Nullable<float> _lineSpacing;
    System::Nullable<float> _characterSpacing;
    System::Nullable<float> _wordSpacing;
    System::SharedPtr<Aspose::Pdf::MarginInfo> _marginInfo;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


