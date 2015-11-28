

@interface IGMediaManager : NSObject
+(void)prepareMoreActionSheetForFeedItem:(id)arg1 ;
+(void)moreActionSheetForFeedItem:(id)arg1 dismissedWithButtonTitled:(id)arg2 navigationController:(id)arg3 cell:(id)arg4 ;
+(void)fetchPermalinkForFeedItem:(id)arg1 withSuccessHandler:(/*^block*/id)arg2 errorHandler:(/*^block*/id)arg3 ;
+(void)deleteFeedItem:(id)arg1 ;
+(void)fetchPivotsFor:(id)arg1 onController:(id)arg2 ;
@end

