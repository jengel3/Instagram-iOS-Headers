

#import <Instagram/Instagram-Structs.h>
@interface IGFeedCellFactory : NSObject
+(id)attributesForFeedItem:(id)arg1 fromContext:(id)arg2 usesIgCollectionViewLayout:(char)arg3 feedConfiguration:(id)arg4 ;
+(id)calculateLayoutAttributesForFeedItems:(id)arg1 feedConfiguration:(id)arg2 ;
+(void)registerAllCellsWithCollectionView:(id)arg1 ;
+(id)cellForType:(int)arg1 indexPath:(id)arg2 collectionView:(id)arg3 ;
+(void)configureFeedCell:(id)arg1 forCellType:(int)arg2 feedItem:(id)arg3 indexPath:(id)arg4 collectionView:(id)arg5 imageSizeForGrid:(CGSize)arg6 context:(id)arg7 feedConfiguration:(id)arg8 usesIgCollectionLayout:(char)arg9 controller:(id)arg10 navigationController:(id)arg11 pageCellState:(id)arg12 albumFocusCoordinator:(id)arg13 albumCellDelegate:(id)arg14 pageCellDelegate:(id)arg15 photoCellDelegate:(id)arg16 tagViewDelegate:(id)arg17 videoCellPlayerDelegate:(id)arg18 videoCellInteractionDelegate:(id)arg19 textCellDelegate:(id)arg20 loggingDelegate:(id)arg21 directResponseLoggingDelegate:(id)arg22 actionCellDelegate:(id)arg23 businessCellDelegate:(id)arg24 confirmationCellDelegate:(id)arg25 ;
+(int)feedItemCellTypeForIndexPath:(id)arg1 layout:(int)arg2 objects:(id)arg3 context:(id)arg4 feedConfiguration:(id)arg5 usesIgCollectionViewLayout:(char)arg6 ;
@end

