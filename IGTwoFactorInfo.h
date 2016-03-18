

@class NSString, IGConfirmPhoneSettings;

@interface IGTwoFactorInfo : NSObject {

	NSString* _username;
	NSString* _twoFactorIdentifier;
	NSString* _obfuscatedPhoneNumber;
	IGConfirmPhoneSettings* _confirmPhoneSettings;

}

@property (nonatomic,readonly) NSString * username;                                        //@synthesize username=_username - In the implementation block
@property (nonatomic,readonly) NSString * twoFactorIdentifier;                             //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,readonly) NSString * obfuscatedPhoneNumber;                           //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
@property (nonatomic,readonly) IGConfirmPhoneSettings * confirmPhoneSettings;              //@synthesize confirmPhoneSettings=_confirmPhoneSettings - In the implementation block
-(IGConfirmPhoneSettings *)confirmPhoneSettings;
-(NSString *)twoFactorIdentifier;
-(NSString *)obfuscatedPhoneNumber;
-(id)initWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 obfuscatedPhoneNumber:(id)arg3 confirmPhoneSettings:(id)arg4 ;
-(id)initWithDictionary:(id)arg1 ;
-(NSString *)username;
@end

