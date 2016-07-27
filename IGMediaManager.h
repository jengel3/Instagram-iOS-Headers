

@interface IGMediaManager : NSObject
+(void)deleteFeedItem:(id)arg1 ;
+(void)reportInappropriateFeedItem:(id)arg1 sourceName:(id)arg2 ;
+(void)hideFeedItem:(id)arg1 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 navigationController:(id)arg3 sourceName:(id)arg4 ;
+(void)reportSpamFeedItem:(id)arg1 sourceName:(id)arg2 ;
+(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)showCantEditPostIfFeedItemHasBeenPromoted;
+(void)prepareMoreActionSheetWithConfiguration:(id)arg1 ;
@end

