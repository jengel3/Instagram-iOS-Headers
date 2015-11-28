
#import <Instagram/IGWeiboAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGWeiboHelper : NSObject <IGWeiboAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSString* _refreshToken;
	NSString* _serviceName;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,readonly) char accessTokenExpired; 
@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * refreshToken;                                       //@synthesize refreshToken=_refreshToken - In the implementation block
@property (nonatomic,readonly) NSString * serviceName;                                    //@synthesize serviceName=_serviceName - In the implementation block
@property (nonatomic,readonly) NSString * shortServiceName; 
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)sharingInfo;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)requiresLocationCoordinate;
-(char)hasEverBeenConfigured;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(NSString *)shortServiceName;
-(char)needsToReauthorize;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(id)authURLString;
-(id)callbackURLString;
-(void)reauthorize;
-(void)weiboAuthControllerLoginFailed:(id)arg1 ;
-(void)weiboAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 andRefreshToken:(id)arg3 ;
-(id)serviceNameForTokenStore;
-(char)accessTokenExpired;
-(void)saveAccessToken:(id)arg1 andRefreshToken:(id)arg2 ;
-(int)tokenLife;
-(void)saveNewAccessToken:(id)arg1 ;
-(void)saveNewRefreshToken:(id)arg1 ;
-(NSString *)serviceName;
-(void)setRefreshToken:(NSString *)arg1 ;
-(NSString *)refreshToken;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
@end

