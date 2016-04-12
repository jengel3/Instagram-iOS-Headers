

#import <Instagram/Instagram-Structs.h>
@interface IGFeedItemActionCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 forFeedItem:(id)arg2 pageCellState:(id)arg3 feedConfiguration:(id)arg4 cellDelegate:(id)arg5 loggingDelegate:(id)arg6 ;
+(void)updateButtonForFeedItemActionCell:(id)arg1 postItem:(id)arg2 ;
+(CGSize)actionCellSizeForFeedItem:(id)arg1 configuration:(id)arg2 containerWidth:(float)arg3 ;
@end

