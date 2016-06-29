

@interface IGFollowPeopleHelper : NSObject
+(void)logEvent:(id)arg1 userID:(id)arg2 position:(unsigned)arg3 view:(id)arg4 algorithm:(id)arg5 ;
+(void)sendDismissForUserID:(id)arg1 algorithm:(id)arg2 ;
+(void)sendChainingDismissForUser:(id)arg1 chainignUser:(id)arg2 ;
+(id)buildSimilarUsersRequest;
@end

