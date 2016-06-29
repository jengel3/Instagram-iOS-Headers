

#import <Instagram/Instagram-Structs.h>
@interface IGMediaThumbnailLogger : NSObject
+(id)stringForPosition:(NSRange)arg1 ;
+(NSRange)positionForIndex:(int)arg1 numberOfItemsPerRow:(int)arg2 ;
-(void)logImpressionForMedia:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 module:(id)arg4 section:(unsigned)arg5 ;
-(void)logClickForMedia:(id)arg1 position:(NSRange)arg2 sessionId:(id)arg3 module:(id)arg4 section:(unsigned)arg5 ;
-(id)stringForSection:(unsigned)arg1 ;
@end

