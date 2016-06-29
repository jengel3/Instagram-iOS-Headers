
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
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(char)canShowOAuthLogin;
+(id)serviceName;
-(id)sharingInfo;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(void)logoutAndUnlink;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(void)setCurrentUsername:(NSString *)arg1 ;
-(NSString *)currentUsername;
-(void)reauthorizeIfNeeded;
-(char)needsToReauthorize;
-(id)viewControllerForAdvancedOptions;
-(void)loadTokensIfNecessary;
-(id)serializeToken:(id)arg1 ;
-(id)deserializeToToken:(id)arg1 ;
-(void)authControllerLoginSucceeded:(id)arg1 withTokenKey:(id)arg2 secret:(id)arg3 username:(id)arg4 ;
-(void)authControllerLoginFailed:(id)arg1 ;
-(OAToken *)accessToken;
-(void)logout;
-(void)setAccessToken:(OAToken *)arg1 ;
-(char)isConfigured;
@end

