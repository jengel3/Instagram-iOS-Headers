

@interface IGSearchAnalyticsLogger : NSObject
+(void)logSearchClickEventWithSearchString:(id)arg1 sessionId:(id)arg2 userId:(id)arg3 searchType:(int*)arg4 indexPath:(id)arg5 rankToken:(id)arg6 navState:(id)arg7 ;
+(void)logSearchBeginEvent:(id)arg1 navState:(id)arg2 ;
@end

