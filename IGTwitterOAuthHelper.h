
#import <Instagram/IGServiceHelperProtocol.h>

@class OAToken, NSString, IGNonCurrentUserDefaults;

@interface IGTwitterOAuthHelper : NSObject <IGServiceHelperProtocol> {

	char _initialized;
	OAToken* _accessToken;
	NSString* _currentUsername;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,retain) OAToken * accessToken;                                       //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,retain) NSString * currentUsername;                                  //@synthesize currentUsername=_currentUsername - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)sharedTwitterHelper;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)shortServiceName;
+(char)canShowOAuthLogin;
+(id)serviceName;
-(void)reauthorizeIfNeeded;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setCurrentUsername:(NSString *)arg1 ;
-(void)loadTokensIfNecessary;
-(id)serializeToken:(id)arg1 ;
-(id)deserializeToToken:(id)arg1 ;
-(void)authControllerLoginSucceeded:(id)arg1 withTokenKey:(id)arg2 secret:(id)arg3 username:(id)arg4 ;
-(void)authControllerLoginFailed:(id)arg1 ;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(NSString *)currentUsername;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(OAToken *)accessToken;
-(void)logout;
-(void)setAccessToken:(OAToken *)arg1 ;
-(char)isConfigured;
@end

