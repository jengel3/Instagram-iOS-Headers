

@interface IGPageMediaTracker : NSObject
+(id)logEventWithSuffix:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
+(void)mediaDidAppearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidDisappearForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(void)mediaDidStartViewingForItemIndex:(int)arg1 post:(id)arg2 isSponsored:(char)arg3 ;
+(id)eventWithSuffix:(id)arg1 ;
+(id)tracker;
+(id)logEvent:(id)arg1 post:(id)arg2 itemIndex:(int)arg3 isSponsored:(char)arg4 ;
@end

