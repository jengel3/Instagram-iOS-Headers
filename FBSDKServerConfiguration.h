
#import <Instagram/Instagram-Structs.h>
#import <Instagram/FBSDKCopying.h>
#import <libobjc.A.dylib/NSSecureCoding.h>

@class NSDictionary, NSString, FBSDKErrorConfiguration, NSDate;

@interface FBSDKServerConfiguration : NSObject <FBSDKCopying, NSSecureCoding> {

	NSDictionary* _dialogConfigurations;
	NSDictionary* _dialogFlows;
	char _advertisingIDEnabled;
	char _defaults;
	char _implicitLoggingEnabled;
	char _implicitPurchaseLoggingEnabled;
	char _loginTooltipEnabled;
	char _nativeAuthFlowEnabled;
	char _systemAuthenticationEnabled;
	NSString* _appID;
	NSString* _appName;
	NSString* _defaultShareMode;
	FBSDKErrorConfiguration* _errorConfiguration;
	NSString* _loginTooltipText;
	NSDate* _timestamp;
	double _sessionTimoutInterval;

}

@property (getter=isAdvertisingIDEnabled,nonatomic,readonly) char advertisingIDEnabled;                                    //@synthesize advertisingIDEnabled=_advertisingIDEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * appID;                                                                      //@synthesize appID=_appID - In the implementation block
@property (nonatomic,copy,readonly) NSString * appName;                                                                    //@synthesize appName=_appName - In the implementation block
@property (getter=isDefaults,nonatomic,readonly) char defaults;                                                            //@synthesize defaults=_defaults - In the implementation block
@property (nonatomic,copy,readonly) NSString * defaultShareMode;                                                           //@synthesize defaultShareMode=_defaultShareMode - In the implementation block
@property (nonatomic,readonly) FBSDKErrorConfiguration * errorConfiguration;                                               //@synthesize errorConfiguration=_errorConfiguration - In the implementation block
@property (getter=isImplicitLoggingSupported,nonatomic,readonly) char implicitLoggingEnabled;                              //@synthesize implicitLoggingEnabled=_implicitLoggingEnabled - In the implementation block
@property (getter=isImplicitPurchaseLoggingSupported,nonatomic,readonly) char implicitPurchaseLoggingEnabled;              //@synthesize implicitPurchaseLoggingEnabled=_implicitPurchaseLoggingEnabled - In the implementation block
@property (getter=isLoginTooltipEnabled,nonatomic,readonly) char loginTooltipEnabled;                                      //@synthesize loginTooltipEnabled=_loginTooltipEnabled - In the implementation block
@property (getter=isNativeAuthFlowEnabled,nonatomic,readonly) char nativeAuthFlowEnabled;                                  //@synthesize nativeAuthFlowEnabled=_nativeAuthFlowEnabled - In the implementation block
@property (getter=isSystemAuthenticationEnabled,nonatomic,readonly) char systemAuthenticationEnabled;                      //@synthesize systemAuthenticationEnabled=_systemAuthenticationEnabled - In the implementation block
@property (nonatomic,copy,readonly) NSString * loginTooltipText;                                                           //@synthesize loginTooltipText=_loginTooltipText - In the implementation block
@property (nonatomic,copy,readonly) NSDate * timestamp;                                                                    //@synthesize timestamp=_timestamp - In the implementation block
@property (assign,nonatomic) double sessionTimoutInterval;                                                                 //@synthesize sessionTimoutInterval=_sessionTimoutInterval - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
+(char)supportsSecureCoding;
-(char)useSafariViewControllerForDialogName:(id)arg1 ;
-(char)useNativeDialogForDialogName:(id)arg1 ;
-(NSString *)defaultShareMode;
-(char)isSystemAuthenticationEnabled;
-(NSString *)loginTooltipText;
-(char)isLoginTooltipEnabled;
-(char)isAdvertisingIDEnabled;
-(char)isImplicitPurchaseLoggingSupported;
-(char)isImplicitLoggingSupported;
-(FBSDKErrorConfiguration *)errorConfiguration;
-(double)sessionTimoutInterval;
-(id)dialogConfigurationForDialogName:(id)arg1 ;
-(char)isDefaults;
-(char)_useFeatureWithKey:(id)arg1 dialogName:(id)arg2 ;
-(char)isNativeAuthFlowEnabled;
-(void)setSessionTimoutInterval:(double)arg1 ;
-(id)initWithAppID:(id)arg1 appName:(id)arg2 loginTooltipEnabled:(char)arg3 loginTooltipText:(id)arg4 defaultShareMode:(id)arg5 advertisingIDEnabled:(char)arg6 implicitLoggingEnabled:(char)arg7 implicitPurchaseLoggingEnabled:(char)arg8 systemAuthenticationEnabled:(char)arg9 nativeAuthFlowEnabled:(char)arg10 dialogConfigurations:(id)arg11 dialogFlows:(id)arg12 timestamp:(id)arg13 errorConfiguration:(id)arg14 sessionTimeoutInterval:(double)arg15 defaults:(char)arg16 ;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(id)init;
-(NSDate *)timestamp;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSString *)appName;
-(NSString *)appID;
@end

