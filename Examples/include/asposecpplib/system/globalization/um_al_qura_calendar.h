/// @file system/globalization/um_al_qura_calendar.h
#pragma once

#include <system/globalization/calendar.h>

namespace System { namespace Globalization {

class UmAlQuraCalendar;
/// UmAlQuraCalendar pointer type.
typedef SharedPtr<UmAlQuraCalendar> UmAlQuraCalendarPtr;

/// Um Al Qura calendar. Not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS UmAlQuraCalendar : public Calendar
{
    /// RTTI information.
    RTTI_INFO(System::Globalization::UmAlQuraCalendar, ::System::BaseTypesInfo<System::Globalization::Calendar>)

    /// Enabling using constructors.
    FRIEND_FUNCTION_System_MakeObject;

    /// Constructor.
    ASPOSECPP_SHARED_API UmAlQuraCalendar();

public:
    using Calendar::GetLeapMonth;
    using Calendar::IsLeapDay;
    using Calendar::IsLeapMonth;
    using Calendar::IsLeapYear;

    /// Current UmAlQura era.
    static constexpr int UmAlQuraEra = 1;

    ASPOSECPP_SHARED_API CalendarAlgorithmType get_AlgorithmType() const override;
    ASPOSECPP_SHARED_API DateTime get_MinSupportedDateTime() const override;
    ASPOSECPP_SHARED_API DateTime get_MaxSupportedDateTime() const override;
    ASPOSECPP_SHARED_API ArrayPtr<int> get_Eras() const override;
    ASPOSECPP_SHARED_API DayOfWeek GetDayOfWeek(const DateTime &time) const override;
    ASPOSECPP_SHARED_API int GetLeapMonth(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapYear(int year, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapMonth(int year, int month, int era) const override;
    ASPOSECPP_SHARED_API bool IsLeapDay(int year, int month, int day, int era) const override;
    ASPOSECPP_SHARED_API void set_TwoDigitYearMax(int value) override;
    
    ASPOSECPP_SHARED_API SharedPtr<Object> Clone() override;

protected:
    Details::CalendarId get_ID() const override;

private:
    void VerifyYear(int year, int era) const override;
    void VerifyMonth(int year, int month, int era) const override;
    void VerifyDate(int year, int month, int day, int era) const override;

    int EraToIcuEra(int era) const override;
    int IcuEraToEra(int icu_era) const override;
};

}} // namespace System::Globalization
