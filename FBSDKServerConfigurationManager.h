

@interface FBSDKServerConfigurationManager : NSObject
+(void)loadServerConfigurationWithCompletionBlock:(/*^block*/id)arg1 ;
+(id)cachedServerConfiguration;
+(id)requestToLoadServerConfiguration:(id)arg1 ;
+(void)processLoadRequestResponse:(id)arg1 error:(id)arg2 appID:(id)arg3 ;
+(id)_defaultServerConfigurationForAppID:(id)arg1 ;
+(char)_serverConfigurationTimestampIsValid:(id)arg1 ;
+(/*^block*/id)_wrapperBlockForLoadBlock:(/*^block*/id)arg1 ;
+(void)_didProcessConfigurationFromNetwork:(id)arg1 appID:(id)arg2 error:(id)arg3 ;
+(id)_parseDialogConfigurations:(id)arg1 ;
+(void)initialize;
+(void)clearCache;
-(id)init;
@end

