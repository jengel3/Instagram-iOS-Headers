

@interface IGFeedItemInvalidationHelper : NSObject
+(char)isFeedItemInvalid:(id)arg1 ;
+(char)shouldFeedItemDisplay:(id)arg1 ;
+(char)hasSelectedReasonForInvalidSponsoredFeedItem:(id)arg1 ;
+(void)removeSpamFeedItem:(id)arg1 ;
+(void)markSpamFeedItemAsNotVisibleIfInvalid:(id)arg1 ;
+(id)dictionaryForHiddenAds;
+(void)hideSponsoredFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 ;
+(void)hideSpamFeedItem:(id)arg1 ;
+(id)reasonForInvalidSponsoredFeedItem:(id)arg1 ;
+(id)reasonForUserHidingSponsoredFeedItem:(id)arg1 ;
+(char)isAlreadyInstalledAppAds:(id)arg1 ;
+(id)feedItemsDictForKey:(id)arg1 ;
+(void)postHideReasonSelectedNotificationForSponsoredFeedItem:(id)arg1 forReason:(id)arg2 withExtraDictionary:(id)arg3 ;
+(void)synchronizeUserDefaultsForKey:(id)arg1 object:(id)arg2 ;
+(id)dictionaryForHiddenSpamFeedItems;
+(char)shouldSponsoredFeedItemDisplay:(id)arg1 ;
+(char)shouldSpamFeedItemDisplay:(id)arg1 ;
+(char)isSponsoredFeedItemWaitingForHideReason:(id)arg1 ;
+(void)markSponsoredFeedItemAsNotVisibleIfInvalid:(id)arg1 ;
@end

