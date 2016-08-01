

#import <Instagram/Instagram-Structs.h>
@interface IGAnalyticsDataUsageManager : NSObject {

	char _hasStartedTracking;
	SCD_Struct_IG6 _initialDataRecord;

}
+(id)sharedDataUsageManager;
-(char)isDataRecordOverflowed;
-(void)startDataUsageTracking;
-(id)getDataUsageAndFinishTracking;
-(char)shouldReportDataUsage;
@end

