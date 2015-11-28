

@class NSString, NSError, FBDialogsData, FBAppLinkData, FBAccessTokenData;

@interface FBAppCall : NSObject {

	NSString* _ID;
	NSError* _error;
	FBDialogsData* _dialogData;
	FBAppLinkData* _appLinkData;
	FBAccessTokenData* _accessTokenData;

}

@property (nonatomic,copy) NSString * ID;                                      //@synthesize ID=_ID - In the implementation block
@property (nonatomic,retain) NSError * error;                                  //@synthesize error=_error - In the implementation block
@property (nonatomic,retain) FBDialogsData * dialogData;                       //@synthesize dialogData=_dialogData - In the implementation block
@property (nonatomic,retain) FBAppLinkData * appLinkData;                      //@synthesize appLinkData=_appLinkData - In the implementation block
@property (nonatomic,retain) FBAccessTokenData * accessTokenData;              //@synthesize accessTokenData=_accessTokenData - In the implementation block
+(void)handleDidBecomeActive;
+(id)appCallFromURL:(id)arg1 ;
+(id)appCallFromApplinkData:(id)arg1 applinkData:(id)arg2 originalQueryParameters:(id)arg3 ;
+(id)appCallFromApplinkArgs_v2:(id)arg1 applinkArgs:(id)arg2 createTimeUTC:(id)arg3 originalQueryParameters:(id)arg4 ;
+(char)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withSession:(id)arg3 fallbackHandler:(/*^block*/id)arg4 ;
+(char)tryOpenSession:(id)arg1 withAccessToken:(id)arg2 ;
+(char)invokeHandler:(/*^block*/id)arg1 withAccessToken:(id)arg2 appLinkData:(id)arg3 ;
+(void)invokeHandler:(/*^block*/id)arg1 withError:(id)arg2 ;
+(void)handleDidBecomeActiveWithSession:(id)arg1 ;
+(char)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 ;
+(char)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 fallbackHandler:(/*^block*/id)arg3 ;
+(char)handleOpenURL:(id)arg1 sourceApplication:(id)arg2 withSession:(id)arg3 ;
+(void)openDeferredAppLink:(/*^block*/id)arg1 ;
-(FBAccessTokenData *)accessTokenData;
-(void)setAppLinkData:(FBAppLinkData *)arg1 ;
-(FBAppLinkData *)appLinkData;
-(FBDialogsData *)dialogData;
-(id)initWithID:(id)arg1 enforceScheme:(char)arg2 appID:(id)arg3 urlSchemeSuffix:(id)arg4 ;
-(void)setDialogData:(FBDialogsData *)arg1 ;
-(void)logInboundAppLinkEvent;
-(char)isEqualToAppCall:(id)arg1 ;
-(void)setAccessTokenData:(FBAccessTokenData *)arg1 ;
-(id)init:(char)arg1 ;
-(NSError *)error;
-(void)dealloc;
-(id)init;
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)description;
-(char)isValid;
-(NSString *)ID;
-(void)setID:(NSString *)arg1 ;
-(void)setError:(NSError *)arg1 ;
@end

