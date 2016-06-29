

@protocol FBSDKAccessTokenCaching <NSObject>
@required
-(id)fetchAccessToken;
-(void)cacheAccessToken:(id)arg1;
-(void)clearCache;

@end

