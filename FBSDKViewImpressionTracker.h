

@class NSMutableSet, NSString;

@interface FBSDKViewImpressionTracker : NSObject {

	NSMutableSet* _trackedImpressions;
	NSString* _eventName;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(void)logImpressionWithIdentifier:(id)arg1 parameters:(id)arg2 ;
-(id)initWithEventName:(id)arg1 ;
-(void)dealloc;
-(NSString *)eventName;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

