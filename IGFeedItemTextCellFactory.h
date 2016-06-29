

#import <Instagram/Instagram-Structs.h>
@interface IGFeedItemTextCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)textCellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 atRow:(int)arg2 feedItem:(id)arg3 pageCellState:(id)arg4 configuration:(id)arg5 attributes:(id)arg6 containerWidth:(float)arg7 cellDelegate:(id)arg8 loggingDelegate:(id)arg9 ;
+(id)updateTranslationForComment:(id)arg1 withFeedItem:(id)arg2 ;
+(float)textWidthContainedInWidth:(float)arg1 ;
+(id)styledStringForFeedItem:(id)arg1 pageCellState:(id)arg2 attributes:(id)arg3 configuration:(id)arg4 commentIndex:(int)arg5 width:(float)arg6 ;
+(char)showTimeStampForThisCellOnAuxWithConfiguration:(id)arg1 feedItem:(id)arg2 commentIndex:(int)arg3 ;
+(CGSize)textCellSizeWithAttributes:(id)arg1 configuration:(id)arg2 feedItem:(id)arg3 pageCellState:(id)arg4 row:(int)arg5 containerWidth:(float)arg6 ;
@end

