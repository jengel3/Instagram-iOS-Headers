

@interface IGPageMediaTracker : NSObject
+(id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 extra:(id)arg5 ;
+(void)mediaDidAppearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 extra:(id)arg4 ;
+(void)mediaDidDisappearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 extra:(id)arg4 ;
+(void)mediaDidStartViewingForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 extra:(id)arg4 ;
+(id)tracker;
+(id)eventWithSuffix:(id)arg1 ;
+(id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 extra:(id)arg5 ;
@end

