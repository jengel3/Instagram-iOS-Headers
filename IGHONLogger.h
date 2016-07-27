

@class NSString, IGSponsoredFeedItemTracker;

@interface IGHONLogger : NSObject {

	NSString* _analyticsModule;
	IGSponsoredFeedItemTracker* _tracker;

}

@property (nonatomic,copy,readonly) NSString * analyticsModule;                   //@synthesize analyticsModule=_analyticsModule - In the implementation block
@property (nonatomic,readonly) IGSponsoredFeedItemTracker * tracker;              //@synthesize tracker=_tracker - In the implementation block
-(NSString *)analyticsModule;
-(id)initWithAnalyticsModule:(id)arg1 ;
-(void)logAdDidSwitchFeedItem:(id)arg1 extra:(id)arg2 ;
-(void)logAdDidLoseForFeedItem:(id)arg1 extra:(id)arg2 ;
-(void)logAdDidWinForFeedItem:(id)arg1 extra:(id)arg2 ;
-(void)logAdDidDrawForFeedItem:(id)arg1 extra:(id)arg2 ;
-(void)logAdDidAttemptFeedItem:(id)arg1 extra:(id)arg2 ;
-(void)logHotOrNotResultEventForFeedItem:(id)arg1 eventType:(id)arg2 extra:(id)arg3 ;
-(void)logHotOrNotActionEventForFeedItem:(id)arg1 eventType:(id)arg2 extra:(id)arg3 ;
-(IGSponsoredFeedItemTracker *)tracker;
@end

