/*
* This header is generated by classdump-dyld 1.0
* on Tuesday, April 26, 2016 at 3:43:37 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /private/var/mobile/Containers/Bundle/Application/5A2897A0-78CA-4D27-9EEF-4F1B698EB436/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/


@class NSDate, NSNumber;

@interface RCTTimer : NSObject {

	char _repeats;
	NSDate* _target;
	NSNumber* _callbackID;
	double _interval;

}

@property (nonatomic,readonly) NSDate * target;                         //@synthesize target=_target - In the implementation block
@property (nonatomic,readonly) char repeats;                            //@synthesize repeats=_repeats - In the implementation block
@property (nonatomic,copy,readonly) NSNumber * callbackID;              //@synthesize callbackID=_callbackID - In the implementation block
@property (nonatomic,readonly) double interval;                         //@synthesize interval=_interval - In the implementation block
-(id)initWithCallbackID:(id)arg1 interval:(double)arg2 targetTime:(double)arg3 repeats:(char)arg4 ;
-(char)updateFoundNeedsJSUpdate;
-(NSNumber *)callbackID;
-(NSDate *)target;
-(double)interval;
-(char)repeats;
@end
