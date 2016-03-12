

#import <Instagram/Instagram-Structs.h>
@interface IGFeedCellFactory : NSObject
+(id)attributesForFeedItem:(id)arg1 fromContext:(id)arg2 usesIgCollectionViewLayout:(char)arg3 feedConfiguration:(id)arg4 ;
+(id)calculateLayoutAttributesForFeedItems:(id)arg1 feedConfiguration:(id)arg2 ;
+(void)registerAllCellsWithCollectionView:(id)arg1 ;
+(id)cellForType:(int)arg1 indexPath:(id)arg2 collectionView:(id)arg3 ;
+(void)configureFeedCell:(id)arg1 forCellType:(int)arg2 feedItem:(id)arg3 indexPath:(id)arg4 collectionView:(id)arg5 imageSizeForGrid:(CGSize)arg6 context:(id)arg7 feedConfiguration:(id)arg8 usesIgCollectionLayout:(char)arg9 controller:(id)arg10 navigationController:(id)arg11 albumCellDelegate:(id)arg12 albumCell2Delegate:(id)arg13 pageCellDelegate:(id)arg14 photoCellDelegate:(id)arg15 tagViewDelegate:(id)arg16 videoCellPlayerDelegate:(id)arg17 videoCellAnalyticsDelegate:(id)arg18 videoCellInteractionDelegate:(id)arg19 textCellDelegate:(id)arg20 loggingDelegate:(id)arg21 actionCellDelegate:(id)arg22 pivotCellDelegate:(id)arg23 ;
+(int)feedItemCellTypeForIndexPath:(id)arg1 layout:(int)arg2 objects:(id)arg3 context:(id)arg4 feedConfiguration:(id)arg5 usesIgCollectionViewLayout:(char)arg6 ;
@end

