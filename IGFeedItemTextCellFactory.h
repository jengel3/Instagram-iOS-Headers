

#import <Instagram/Instagram-Structs.h>
@interface IGFeedItemTextCellFactory : NSObject
+(void)registerCellWithCollectionView:(id)arg1 ;
+(id)textCellFromCollectionView:(id)arg1 indexPath:(id)arg2 ;
+(void)configureCell:(id)arg1 atRow:(int)arg2 feedItem:(id)arg3 configuration:(id)arg4 attributes:(id)arg5 containerWidth:(float)arg6 cellDelegate:(id)arg7 loggingDelegate:(id)arg8 ;
+(float)textWidthContainedInWidth:(float)arg1 ;
+(id)styledStringForFeedItem:(id)arg1 attributes:(id)arg2 configuration:(id)arg3 commentIndex:(int)arg4 width:(float)arg5 ;
+(char)showTimeStampForThisCellOnAuxWithConfiguration:(id)arg1 feedItem:(id)arg2 commentIndex:(int)arg3 ;
+(CGSize)textCellSizeWithAttributes:(id)arg1 configuration:(id)arg2 feedItem:(id)arg3 row:(int)arg4 containerWidth:(float)arg5 ;
@end

