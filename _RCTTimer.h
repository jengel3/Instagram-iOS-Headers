

@class NSDate, NSNumber;

@interface _RCTTimer : NSObject {

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

