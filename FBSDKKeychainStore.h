

@class NSString;

@interface FBSDKKeychainStore : NSObject {

	NSString* _service;
	NSString* _accessGroup;

}

@property (nonatomic,copy,readonly) NSString * service;                  //@synthesize service=_service - In the implementation block
@property (nonatomic,copy,readonly) NSString * accessGroup;              //@synthesize accessGroup=_accessGroup - In the implementation block
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
-(char)setString:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(char)setDictionary:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(char)setData:(id)arg1 forKey:(id)arg2 accessibility:(void*)arg3 ;
-(id)queryForKey:(id)arg1 ;
-(NSString *)accessGroup;
-(id)init;
-(id)stringForKey:(id)arg1 ;
-(id)dictionaryForKey:(id)arg1 ;
-(NSString *)service;
-(id)dataForKey:(id)arg1 ;
@end

