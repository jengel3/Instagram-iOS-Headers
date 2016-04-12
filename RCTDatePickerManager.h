
#import <Instagram/RCTViewManager.h>

@interface RCTDatePickerManager : RCTViewManager
+(id)moduleName;
+(id)propConfig_date;
+(id)propConfig_minimumDate;
+(id)propConfig_maximumDate;
+(id)propConfig_minuteInterval;
+(id)propConfig_mode;
+(id)propConfig_timeZoneOffsetInMinutes;
+(id)propConfig_onChange;
+(void)load;
-(id)constantsToExport;
-(id)view;
@end

