

#import <Instagram/Instagram-Structs.h>
@interface FBPerformanceMetrics : NSObject
+(unsigned long long)residentMemoryBytes;
+(unsigned long long)freeMemoryBytes;
+(unsigned long long)totalMemoryBytes;
+(unsigned long long)virtualMemoryBytes;
+(SCD_Struct_FB147)freeAndTotalDiskBytes;
+(unsigned)coreCount;
+(id)loadAvgWithPrecision:(double)arg1 ;
+(FBDeviceBatteryInfo)batteryInfo;
+(id)batteryStateWithDeviceBatteryState:(int)arg1 ;
+(unsigned long long)freeDiskBytes;
+(char)absoluteStartTime:(double*)arg1 ;
+(char)lastWakeTime:(double*)arg1 ;
+(char)getNetworkUsage:(SCD_Struct_FB147*)arg1 ;
@end

