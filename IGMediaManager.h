

@interface IGMediaManager : NSObject
+(void)deletePostItem:(id)arg1 fromFeedItem:(id)arg2 ;
+(void)deleteFeedItem:(id)arg1 ;
+(void)hideFeedItem:(id)arg1 ;
+(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)reportInappropriateFeedItem:(id)arg1 sourceName:(id)arg2 ;
+(void)showCantEditPostIfFeedItemHasBeenPromoted;
+(void)fetchPivotsFor:(id)arg1 onController:(id)arg2 ;
+(void)unexpireFeedItem:(id)arg1 ;
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 allowHidingPost:(char)arg2 showTimestamp:(char)arg3 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 navigationController:(id)arg3 sourceName:(id)arg4 ;
+(void)reportSpamFeedItem:(id)arg1 sourceName:(id)arg2 ;
@end

