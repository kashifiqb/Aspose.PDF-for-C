﻿#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/list.h>
#include <system/array.h>

#include "Generator/BaseParagraph.h"

namespace Aspose { namespace Pdf { class PageGenerator; } }
namespace Aspose { namespace Pdf { class Color; } }
namespace Aspose { namespace Pdf { class BorderInfo; } }
namespace Aspose { namespace Pdf { class ColumnInfo; } }
namespace Aspose { namespace Pdf { class MarginInfo; } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Operator; } }

namespace Aspose {

namespace Pdf {

/// Represents a FloatingBox in a Pdf document. FloatingBox is custom positioned.
class ASPOSE_PDF_SHARED_API FloatingBox : public Aspose::Pdf::BaseParagraph
{
    typedef FloatingBox ThisType;
    typedef Aspose::Pdf::BaseParagraph BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::PageGenerator;
    
public:

    /// <summary>
    /// Gets a column info
    /// </summary>   
    System::SharedPtr<Aspose::Pdf::ColumnInfo> get_ColumnInfo();
    /// <summary>
    /// Sets a column info
    /// </summary>   
    void set_ColumnInfo(System::SharedPtr<Aspose::Pdf::ColumnInfo> value);
    /// <summary>
    /// Gets a float value that indicates the width of the floating box.
    /// </summary>
    double get_Width();
    /// <summary>
    /// Sets a float value that indicates the width of the floating box.
    /// </summary>
    void set_Width(double value);
    /// <summary>
    /// Gets a float value that indicates the height of the floating box.
    /// </summary>
    double get_Height();
    /// <summary>
    /// Sets a float value that indicates the height of the floating box.
    /// </summary>
    void set_Height(double value);
    /// <summary>
    /// Gets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    /// </summary>
    bool get_IsNeedRepeating();
    /// <summary>
    /// Sets a bool value that indicates whether the paragraph need to be repeated on next page.
    /// Default value is false.The attribute is only valid when the paragraph itself and the object its ReferenceParagraphID referred to both are included in RepeatingRows.
    /// </summary>
    void set_IsNeedRepeating(bool value);
    /// <summary>
    /// Gets a <see cref="Paragraphs"/> collection that indicates all paragraphs in the cell.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Paragraphs> get_Paragraphs();
    /// <summary>
    /// Sets a <see cref="Paragraphs"/> collection that indicates all paragraphs in the cell.
    /// </summary>
    void set_Paragraphs(System::SharedPtr<Aspose::Pdf::Paragraphs> value);
    /// <summary>
    /// Gets a <see cref="BorderInfo"/> object that indicates the border info of the floating box.
    /// </summary> 
    System::SharedPtr<BorderInfo> get_Border();
    /// <summary>
    /// Sets a <see cref="BorderInfo"/> object that indicates the border info of the floating box.
    /// </summary> 
    void set_Border(System::SharedPtr<BorderInfo> value);
    /// <summary>
    /// Gets a <see cref="Aspose::Pdf::Color"/> object that indicates the background color of the floating box.
    /// </summary>
    System::SharedPtr<Color> get_BackgroundColor();
    /// <summary>
    /// Sets a <see cref="Aspose::Pdf::Color"/> object that indicates the background color of the floating box.
    /// </summary>
    void set_BackgroundColor(System::SharedPtr<Color> value);
    /// <summary>
    /// Gets a <see cref="MarginInfo"/> object that indicates the padding of the floating box.
    /// </summary>
    System::SharedPtr<MarginInfo> get_Padding();
    /// <summary>
    /// Sets a <see cref="MarginInfo"/> object that indicates the padding of the floating box.
    /// </summary>
    void set_Padding(System::SharedPtr<MarginInfo> value);
    /// <summary>
    /// Gets the table left coordinate.
    /// </summary>
    double get_Left();
    /// <summary>
    /// Sets the table left coordinate.
    /// </summary>
    void set_Left(double value);
    /// <summary>
    /// Gets the table top coordinate.
    /// </summary>
    double get_Top();
    /// <summary>
    /// Sets the table top coordinate.
    /// </summary>
    void set_Top(double value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"/> class with specified width and height.
    /// </summary>
    /// <param name="width">The width of the box.</param>
    /// <param name="height">The height of the box.</param>
    FloatingBox(float width, float height);
    /// <summary>
    /// Initializes a new instance of the <see cref="FloatingBox"/> class.
    /// </summary>
    FloatingBox();
    
    /// <summary>
    /// Clones a new <see cref="FloatingBox"/> object. Paragraphs in the floating box are not cloned.
    /// </summary>
    /// <returns>The new <see cref="FloatingBox"/> object.</returns>
    virtual System::SharedPtr<System::Object> Clone();
    
protected:

    bool Process(double& curX, double& curY, double pageHeight, double pageWidth, System::SharedPtr<MarginInfo> pageMargin, System::SharedPtr<Page> page, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> operators, bool isHeaderFooter);
    virtual void Serialize(System::SharedPtr<System::Xml::XmlTextWriter> writer);
    virtual void Deserialize(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Color> backgroundColor;
    System::SharedPtr<BorderInfo> border;
    System::SharedPtr<Aspose::Pdf::ColumnInfo> columnInfo;
    double height;
    double left;
    bool isHeightSet;
    bool isNeedRepeating;
    bool isWidthSet;
    System::SharedPtr<MarginInfo> padding;
    System::SharedPtr<Aspose::Pdf::Paragraphs> paragraphs;
    double top;
    double width;
    
    bool ProcessColumns(System::ArrayPtr<double> columnWidths, double columnSpacing, System::SharedPtr<MarginInfo> margin, double& boxWidth, double& boxHeight, System::SharedPtr<Page> page, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, double curX, double curY, double bottomY, bool& result, double& footNoteHeight, bool isFooter);
    void ProcessHalfDevideFootNote(System::SharedPtr<Page> page, System::SharedPtr<Aspose::Pdf::Paragraphs> backupParagraphs, System::SharedPtr<Aspose::Pdf::Paragraphs> backupFooterParagraphs, int32_t paragraphsCount, System::ArrayPtr<double> columnWidths, double columnSpacing, double& boxWidth, double& boxHeight, double curX, double curY, System::SharedPtr<MarginInfo> margin, double bottomY, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> list, double footNoteMaxHeight, bool isFooter);
    
};

} // namespace Pdf
} // namespace Aspose


