

@interface FBInsights : NSObject
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 parameters:(id)arg3 session:(id)arg4 ;
+(int)flushBehavior;
+(void)setFlushBehavior:(int)arg1 ;
+(void)logPurchase:(double)arg1 currency:(id)arg2 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 session:(id)arg3 ;
+(void)logConversionPixel:(id)arg1 valueOfPixel:(double)arg2 ;
+(void)flush;
+(id)appVersion;
+(void)setAppVersion:(id)arg1 ;
@end

