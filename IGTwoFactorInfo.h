

@class NSString;

@interface IGTwoFactorInfo : NSObject {

	NSString* _username;
	NSString* _twoFactorIdentifier;
	NSString* _obfuscatedPhoneNumber;

}

@property (nonatomic,copy) NSString * username;                           //@synthesize username=_username - In the implementation block
@property (nonatomic,copy) NSString * twoFactorIdentifier;                //@synthesize twoFactorIdentifier=_twoFactorIdentifier - In the implementation block
@property (nonatomic,copy) NSString * obfuscatedPhoneNumber;              //@synthesize obfuscatedPhoneNumber=_obfuscatedPhoneNumber - In the implementation block
-(NSString *)twoFactorIdentifier;
-(void)setTwoFactorIdentifier:(NSString *)arg1 ;
-(NSString *)obfuscatedPhoneNumber;
-(void)setObfuscatedPhoneNumber:(NSString *)arg1 ;
-(id)initWithUsername:(id)arg1 twoFactorIdentifier:(id)arg2 obfuscatedPhoneNumber:(id)arg3 ;
-(id)initWithDictionary:(id)arg1 ;
-(void)setUsername:(NSString *)arg1 ;
-(NSString *)username;
@end

