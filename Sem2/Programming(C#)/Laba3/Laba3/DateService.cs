namespace Laba3;

public class DateService
{
   static public DayOfWeek GetDay(string date)
   {
      DateTime correct_date = DateTime.Parse(date);
      return correct_date.DayOfWeek;
   }

   static public int GetDaySpan(int day, int month, int year)
   {
      DateTime currentDate = DateTime.Today;
      DateTime specifiedDate = new DateTime(year, month, day);
      TimeSpan span = specifiedDate.Subtract(currentDate);
      return span.Days;
   }
}