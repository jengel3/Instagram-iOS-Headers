

@interface IGMediaManager : NSObject
+(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)deleteFeedItem:(id)arg1 ;
+(void)fetchPivotsFor:(id)arg1 onController:(id)arg2 ;
+(void)showBoostPostForFeedItem:(id)arg1 fromViewController:(id)arg2 ;
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 allowHidingPost:(char)arg2 showTimestamp:(char)arg3 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 navigationController:(id)arg3 ;
@end

