

@interface IGFeedItemHeaderViewFactory : NSObject
+(void)registerHeaderViewsWithCollectionView:(id)arg1 ;
+(id)headerForIndexPath:(id)arg1 collectionView:(id)arg2 feedItem:(id)arg3 ;
+(void)configureAppHeader:(id)arg1 forFeedItem:(id)arg2 headerDelegate:(id)arg3 loggingDelegate:(id)arg4 ;
+(void)configureItemHeader:(id)arg1 forFeedItem:(id)arg2 configuration:(id)arg3 headerDelegate:(id)arg4 analyticsDelegate:(id)arg5 loggingDelegate:(id)arg6 ;
+(float)defaultHeaderHeight;
+(id)headerForIndexPath:(id)arg1 collectionView:(id)arg2 feedItem:(id)arg3 configuration:(id)arg4 itemHeaderDelegate:(id)arg5 appHeaderDelegate:(id)arg6 analyticsDelegate:(id)arg7 loggingDelegate:(id)arg8 ;
@end

