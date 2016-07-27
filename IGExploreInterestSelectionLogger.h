

#import <Instagram/Instagram-Structs.h>
@interface IGExploreInterestSelectionLogger : NSObject
-(id)logEvent:(id)arg1 module:(id)arg2 model:(id)arg3 position:(NSRange)arg4 sessionId:(id)arg5 ;
-(void)logImpressionWithModel:(id)arg1 module:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)logClickSeeMoreWithModel:(id)arg1 module:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
-(void)logClickDoneWithModel:(id)arg1 module:(id)arg2 position:(NSRange)arg3 sessionId:(id)arg4 ;
@end

