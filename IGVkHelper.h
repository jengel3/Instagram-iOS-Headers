
#import <Instagram/IGVkAuthDelegate.h>
#import <Instagram/IGServiceHelperProtocol.h>

@class NSString, IGNonCurrentUserDefaults;

@interface IGVkHelper : NSObject <IGVkAuthDelegate, IGServiceHelperProtocol> {

	NSString* _accessToken;
	NSString* _username;
	IGNonCurrentUserDefaults* _sessionUserDefaults;

}

@property (nonatomic,copy) NSString * accessToken;                                        //@synthesize accessToken=_accessToken - In the implementation block
@property (nonatomic,copy) NSString * username;                                           //@synthesize username=_username - In the implementation block
@property (nonatomic,retain) IGNonCurrentUserDefaults * sessionUserDefaults;              //@synthesize sessionUserDefaults=_sessionUserDefaults - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(void)clearForUserPK:(id)arg1 ;
+(id)accessTokenKey;
+(id)shortServiceName;
+(void)logoutFromDefaults:(id)arg1 ;
+(id)serviceName;
+(id)sharedHelper;
-(IGNonCurrentUserDefaults *)sessionUserDefaults;
-(id)sharingInfo;
-(void)setSessionUserDefaults:(IGNonCurrentUserDefaults *)arg1 ;
-(id)authURLString;
-(id)callbackURLString;
-(char)needsToReauthorize;
-(char)hasEverBeenConfigured;
-(id)initWithSessionUserDefaults:(id)arg1 ;
-(void)logoutAndUnlink;
-(char)isConfigurable;
-(char)hasAdvancedOptions;
-(char)isAvailableInCurrentLocale;
-(char)supportsMediaType:(int)arg1 ;
-(char)requiresLocationCoordinate;
-(void)reauthorizeIfNeeded;
-(id)viewControllerForAdvancedOptions;
-(id)currentUsername;
-(void)vkAuthController:(id)arg1 didLoginWithAccessToken:(id)arg2 username:(id)arg3 ;
-(void)vkAuthControllerLoginFailed:(id)arg1 ;
-(void)setAccessToken:(id)arg1 username:(id)arg2 save:(char)arg3 ;
-(NSString *)accessToken;
-(void)logout;
-(id)clientID;
-(void)setAccessToken:(NSString *)arg1 ;
-(char)isConfigured;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

