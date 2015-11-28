

@class NSHashTable, NSString, FBSession;

@interface FBViewImpressionTracker : NSObject {

	NSHashTable* _trackedImpressions;
	NSString* _eventName;
	FBSession* _session;

}

@property (nonatomic,copy,readonly) NSString * eventName;              //@synthesize eventName=_eventName - In the implementation block
@property (nonatomic,retain) FBSession * session;                      //@synthesize session=_session - In the implementation block
+(id)impressionTrackerWithEventName:(id)arg1 ;
-(void)logImpressionWithView:(id)arg1 identifier:(id)arg2 parameters:(id)arg3 ;
-(id)initWithEventName:(id)arg1 ;
-(FBSession *)session;
-(void)dealloc;
-(void)setSession:(FBSession *)arg1 ;
-(NSString *)eventName;
-(void)_applicationDidEnterBackgroundNotification:(id)arg1 ;
@end

