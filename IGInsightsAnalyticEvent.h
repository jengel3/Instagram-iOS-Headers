

@interface IGInsightsAnalyticEvent : NSObject
+(id)currentModule;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 withNoLatency:(char)arg4 withNavState:(id)arg5 ;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 withNoLatency:(char)arg3 ;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 withNoLatency:(char)arg3 withNavState:(id)arg4 ;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 withNoLatency:(char)arg4 ;
+(id)sourceViewControllerFromStack:(id)arg1 startIndex:(int)arg2 ;
+(id)scheduleEvent:(id)arg1 withNoLatency:(char)arg2 ;
@end

