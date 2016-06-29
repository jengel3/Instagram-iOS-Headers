

@protocol IGDirectResponseLogging <NSObject>
@required
-(void)logActionForFeedItem:(id)arg1 directResponseInfo:(id)arg2 openContext:(id)arg3 linkType:(int)arg4;
-(void)logActionFailedForFeedItem:(id)arg1 directResponseInfo:(id)arg2 openContext:(id)arg3 openTarget:(id)arg4;

@end

