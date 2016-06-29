

@interface IGInsightsAnalyticEvent : NSObject
+(id)currentModule;
+(id)scheduleEvent:(id)arg1 module:(id)arg2 withNavState:(id)arg3 ;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 ;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 module:(id)arg3 withNavState:(id)arg4 ;
+(id)sourceViewControllerFromStack:(id)arg1 startIndex:(int)arg2 ;
+(id)scheduleEvent:(id)arg1 ;
+(id)scheduleFeedItemEvent:(id)arg1 feedItem:(id)arg2 ;
@end

