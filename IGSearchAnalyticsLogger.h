

@interface IGSearchAnalyticsLogger : NSObject
+(void)logSearchClickEventWithSearchString:(id)arg1 sessionId:(id)arg2 userId:(id)arg3 indexPath:(id)arg4 module:(id)arg5 ;
+(void)logSearchBeginEvent:(id)arg1 module:(id)arg2 ;
+(void)logSearchCancelEventForSearchString:(id)arg1 event:(id)arg2 sessionId:(id)arg3 resultsList:(id)arg4 module:(id)arg5 ;
+(void)logSearchQueryEventWithSearchString:(id)arg1 rttInMillis:(id)arg2 totalResults:(id)arg3 numOfLocalResults:(id)arg4 module:(id)arg5 resultsList:(id)arg6 ;
@end

