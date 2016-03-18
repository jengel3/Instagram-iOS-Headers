

@interface IGFeedItemInvalidationHelper : NSObject
+(char)isFeedItemInvalid:(id)arg1 ;
+(int)adHideFlowVersionForFeedItem:(id)arg1 ;
+(char)shouldFeedItemDisplay:(id)arg1 ;
+(char)hasSelectedReasonForInvalidFeedItem:(id)arg1 ;
+(char)isFeedItemWaitingForExpansionAfterHide:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 ;
+(id)dictionaryForHiddenAds;
+(id)reasonForInvalidFeedItem:(id)arg1 ;
+(id)reasonForUserHidingFeedItem:(id)arg1 ;
+(char)isAlreadyInstalledAppAds:(id)arg1 ;
+(void)postHideReasonSelectedNotificationForFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 ;
+(char)isFeedItemWaitingForHideReason:(id)arg1 ;
+(void)markFeedItemAsNotVisibleIfInvalid:(id)arg1 ;
@end

