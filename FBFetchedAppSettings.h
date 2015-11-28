

@class NSString;

@interface FBFetchedAppSettings : NSObject {

	char _supportsAttribution;
	char _supportsImplicitSdkLogging;
	char _enableLoginTooltip;
	NSString* _serverAppName;
	NSString* _appID;
	NSString* _loginTooltipContent;

}

@property (nonatomic,copy) NSString * serverAppName;                    //@synthesize serverAppName=_serverAppName - In the implementation block
@property (assign) char supportsAttribution;                            //@synthesize supportsAttribution=_supportsAttribution - In the implementation block
@property (assign) char supportsImplicitSdkLogging;                     //@synthesize supportsImplicitSdkLogging=_supportsImplicitSdkLogging - In the implementation block
@property (assign) char enableLoginTooltip;                             //@synthesize enableLoginTooltip=_enableLoginTooltip - In the implementation block
@property (nonatomic,retain) NSString * appID;                          //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy) NSString * loginTooltipContent;              //@synthesize loginTooltipContent=_loginTooltipContent - In the implementation block
-(id)initWithAppID:(id)arg1 ;
-(NSString *)serverAppName;
-(void)setServerAppName:(NSString *)arg1 ;
-(char)supportsAttribution;
-(void)setSupportsAttribution:(char)arg1 ;
-(char)supportsImplicitSdkLogging;
-(void)setSupportsImplicitSdkLogging:(char)arg1 ;
-(char)enableLoginTooltip;
-(void)setEnableLoginTooltip:(char)arg1 ;
-(NSString *)loginTooltipContent;
-(void)setLoginTooltipContent:(NSString *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setAppID:(NSString *)arg1 ;
-(NSString *)appID;
@end

