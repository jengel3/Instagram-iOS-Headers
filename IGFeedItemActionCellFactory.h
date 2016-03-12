

@interface IGFeedItemActionCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 forFeedItem:(id)arg2 feedConfiguration:(id)arg3 cellDelegate:(id)arg4 loggingDelegate:(id)arg5 ;
+(void)updateButtonForFeedItemActionCell:(id)arg1 postItem:(id)arg2 ;
@end

