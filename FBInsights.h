/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:16 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


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

