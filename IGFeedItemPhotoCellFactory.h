

@interface IGFeedItemPhotoCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 forFeedItem:(id)arg2 feedConfiguration:(id)arg3 cellDelegate:(id)arg4 tagViewDelegate:(id)arg5 ;
+(char)allowDirectResponseIndicatorForFeedItem:(id)arg1 allowSponsoredContext:(char)arg2 ;
+(void)showDirectResponseIndicatorForCell:(id)arg1 feedItem:(id)arg2 ;
@end

