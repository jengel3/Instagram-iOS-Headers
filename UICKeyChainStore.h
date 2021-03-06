

@class NSString, NSURL, NSArray;

@interface UICKeyChainStore : NSObject {

	char _synchronizable;
	int _itemClass;
	NSString* _service;
	NSString* _accessGroup;
	NSURL* _server;
	int _protocolType;
	int _authenticationType;
	int _accessibility;
	int _authenticationPolicy;
	NSString* _authenticationPrompt;

}

@property (nonatomic,readonly) int itemClass;                              //@synthesize itemClass=_itemClass - In the implementation block
@property (nonatomic,readonly) NSString * service;                         //@synthesize service=_service - In the implementation block
@property (nonatomic,readonly) NSString * accessGroup;                     //@synthesize accessGroup=_accessGroup - In the implementation block
@property (nonatomic,readonly) NSURL * server;                             //@synthesize server=_server - In the implementation block
@property (nonatomic,readonly) int protocolType;                           //@synthesize protocolType=_protocolType - In the implementation block
@property (nonatomic,readonly) int authenticationType;                     //@synthesize authenticationType=_authenticationType - In the implementation block
@property (assign,nonatomic) int accessibility;                            //@synthesize accessibility=_accessibility - In the implementation block
@property (nonatomic,readonly) int authenticationPolicy;                   //@synthesize authenticationPolicy=_authenticationPolicy - In the implementation block
@property (assign,nonatomic) char synchronizable;                          //@synthesize synchronizable=_synchronizable - In the implementation block
@property (nonatomic,retain) NSString * authenticationPrompt;              //@synthesize authenticationPrompt=_authenticationPrompt - In the implementation block
@property (nonatomic,readonly) NSArray * allKeys; 
@property (nonatomic,readonly) NSArray * allItems; 
+(id)keyChainStoreWithService:(id)arg1 ;
+(char)removeItemForKey:(id)arg1 ;
+(id)stringForKey:(id)arg1 error:(id*)arg2 ;
+(char)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
+(char)removeItemForKey:(id)arg1 error:(id*)arg2 ;
+(void)migrateAllKeychainItems;
+(id)keyChainStore;
+(id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(id)argumentError:(id)arg1 ;
+(id)keyChainStoreWithService:(id)arg1 accessGroup:(id)arg2 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 error:(id*)arg6 ;
+(char)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 error:(id*)arg6 ;
+(id)conversionError:(id)arg1 ;
+(id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 error:(id*)arg4 ;
+(id)dataForKey:(id)arg1 error:(id*)arg2 ;
+(char)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 ;
+(id)unexpectedError:(id)arg1 ;
+(id)securityError:(long)arg1 ;
+(char)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2 error:(id*)arg3 ;
+(char)removeAllItemsWithError:(id*)arg1 ;
+(id)prettify:(void*)arg1 items:(id)arg2 ;
+(void)requestSharedWebCredentialForDomain:(id)arg1 account:(id)arg2 completion:(/*^block*/id)arg3 ;
+(void)setDefaultService:(id)arg1 ;
+(id)keyChainStoreWithServer:(id)arg1 protocolType:(int)arg2 ;
+(id)keyChainStoreWithServer:(id)arg1 protocolType:(int)arg2 authenticationType:(int)arg3 ;
+(id)stringForKey:(id)arg1 service:(id)arg2 ;
+(id)stringForKey:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
+(id)stringForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 ;
+(char)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 ;
+(char)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id*)arg4 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id*)arg4 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 error:(id*)arg5 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id*)arg5 ;
+(char)setString:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 ;
+(id)dataForKey:(id)arg1 service:(id)arg2 ;
+(id)dataForKey:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
+(id)dataForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 ;
+(char)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
+(char)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id*)arg4 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 error:(id*)arg4 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 genericAttribute:(id)arg4 error:(id*)arg5 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 error:(id*)arg5 ;
+(char)setData:(id)arg1 forKey:(id)arg2 service:(id)arg3 accessGroup:(id)arg4 genericAttribute:(id)arg5 ;
+(char)removeItemForKey:(id)arg1 service:(id)arg2 ;
+(char)removeItemForKey:(id)arg1 service:(id)arg2 error:(id*)arg3 ;
+(char)removeItemForKey:(id)arg1 service:(id)arg2 accessGroup:(id)arg3 ;
+(char)removeAllItemsForService:(id)arg1 ;
+(char)removeAllItemsForService:(id)arg1 error:(id*)arg2 ;
+(char)removeAllItemsForService:(id)arg1 accessGroup:(id)arg2 ;
+(id)allKeysWithItemClass:(int)arg1 ;
+(id)allItemsWithItemClass:(int)arg1 ;
+(void)requestSharedWebCredentialWithCompletion:(/*^block*/id)arg1 ;
+(id)generatePassword;
+(id)defaultService;
+(char)removeAllItems;
+(id)stringForKey:(id)arg1 ;
+(id)dataForKey:(id)arg1 ;
+(char)setData:(id)arg1 forKey:(id)arg2 ;
+(char)setString:(id)arg1 forKey:(id)arg2 ;
-(char)removeItemForKey:(id)arg1 ;
-(id)stringForKey:(id)arg1 error:(id*)arg2 ;
-(char)setString:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)removeItemForKey:(id)arg1 error:(id*)arg2 ;
-(id)initWithService:(id)arg1 accessGroup:(id)arg2 ;
-(int)protocolType;
-(id)initWithServer:(id)arg1 protocolType:(int)arg2 authenticationType:(int)arg3 ;
-(id)dataForKey:(id)arg1 error:(id*)arg2 ;
-(char)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 ;
-(char)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 label:(id)arg4 comment:(id)arg5 error:(id*)arg6 ;
-(char)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 label:(id)arg4 comment:(id)arg5 error:(id*)arg6 ;
-(id)attributesWithKey:(id)arg1 value:(id)arg2 error:(id*)arg3 ;
-(char)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id*)arg5 ;
-(char)removeAllItemsWithError:(id*)arg1 ;
-(void*)itemClassObject;
-(void)setSharedPassword:(id)arg1 forAccount:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void*)protocolTypeObject;
-(void*)authenticationTypeObject;
-(char)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 ;
-(char)setString:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id*)arg4 ;
-(char)setData:(id)arg1 forKey:(id)arg2 error:(id*)arg3 ;
-(char)setData:(id)arg1 forKey:(id)arg2 genericAttribute:(id)arg3 error:(id*)arg4 ;
-(id)initWithServer:(id)arg1 protocolType:(int)arg2 ;
-(char)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 ;
-(char)setString:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 error:(id*)arg5 ;
-(char)setData:(id)arg1 forKey:(id)arg2 label:(id)arg3 comment:(id)arg4 ;
-(void)setSynchronizable:(char)arg1 ;
-(void)setAccessibility:(int)arg1 authenticationPolicy:(int)arg2 ;
-(void)sharedPasswordWithCompletion:(/*^block*/id)arg1 ;
-(void)sharedPasswordForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)removeSharedPasswordForAccount:(id)arg1 completion:(/*^block*/id)arg2 ;
-(char)synchronizeWithError:(id*)arg1 ;
-(int)accessibility;
-(void)setAccessibility:(int)arg1 ;
-(int)authenticationPolicy;
-(char)synchronizable;
-(void)setAuthenticationPrompt:(NSString *)arg1 ;
-(int)itemClass;
-(char)removeAllItems;
-(NSString *)accessGroup;
-(id)init;
-(id)description;
-(id)debugDescription;
-(id)objectForKeyedSubscript:(id)arg1 ;
-(void)setObject:(id)arg1 forKeyedSubscript:(id)arg2 ;
-(NSURL *)server;
-(void)synchronize;
-(id)query;
-(NSArray *)allKeys;
-(id)stringForKey:(id)arg1 ;
-(id)items;
-(void)commonInit;
-(NSString *)authenticationPrompt;
-(NSString *)service;
-(char)contains:(id)arg1 ;
-(id)initWithService:(id)arg1 ;
-(int)authenticationType;
-(id)dataForKey:(id)arg1 ;
-(char)setData:(id)arg1 forKey:(id)arg2 ;
-(char)setString:(id)arg1 forKey:(id)arg2 ;
-(NSArray *)allItems;
-(void*)accessibilityObject;
@end

