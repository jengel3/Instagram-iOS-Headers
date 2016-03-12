

#import <Instagram/Instagram-Structs.h>
@interface IGFeedItemPageCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)cellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 feedItem:(id)arg2 delegate:(id)arg3 ;
+(CGSize)sizeForContainerWidth:(float)arg1 ;
@end

