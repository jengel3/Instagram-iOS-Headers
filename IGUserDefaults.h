

@interface IGUserDefaults : NSObject
+(id)sharedIGUserDefaults;
-(id)currentUserPK;
-(id)objectForKey:(id)arg1 andService:(id)arg2 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 andService:(id)arg3 ;
-(void)removeObjectForKey:(id)arg1 inUserInfoForService:(id)arg2 ;
-(id)accessTokenForService:(id)arg1 ;
-(id)refreshTokenForService:(id)arg1 ;
-(void)deleteAccessTokenForService:(id)arg1 ;
-(char)hasAccessTokenExpiredForService:(id)arg1 ;
-(void)setAccessTokenWithExpiration:(id)arg1 expirationInSeconds:(int)arg2 forService:(id)arg3 ;
-(void)setRefreshToken:(id)arg1 forService:(id)arg2 ;
-(void)deleteUserInfoForService:(id)arg1 ;
-(void)setAccessToken:(id)arg1 forService:(id)arg2 ;
-(void)expireAccessTokenForService:(id)arg1 ;
-(id)userInfoForService:(id)arg1 ;
-(id)userPrefixedKey:(id)arg1 ;
-(id)passwordForUsername:(id)arg1 andService:(id)arg2 ;
-(void)setAccessTokenExpiration:(int)arg1 forService:(id)arg2 ;
-(void)setUsername:(id)arg1 andPassword:(id)arg2 forService:(id)arg3 ;
-(void)deletePasswordForUsername:(id)arg1 andService:(id)arg2 ;
-(id)userInfoKeyForService:(id)arg1 ;
-(void)setUserInfo:(id)arg1 forService:(id)arg2 ;
-(void)setDouble:(double)arg1 forkey:(id)arg2 ;
-(double)doubleForKey:(id)arg1 ;
-(void)setInteger:(int)arg1 forKey:(id)arg2 ;
-(id)objectForKey:(id)arg1 ;
-(void)removeObjectForKey:(id)arg1 ;
-(void)setObject:(id)arg1 forKey:(id)arg2 ;
-(char)boolForKey:(id)arg1 ;
-(void)setBool:(char)arg1 forKey:(id)arg2 ;
-(int)integerForKey:(id)arg1 ;
@end

