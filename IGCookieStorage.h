

@class NSDictionary;

@interface IGCookieStorage : NSObject {

	NSDictionary* _currentCookies;

}

@property (nonatomic,retain) NSDictionary * currentCookies;              //@synthesize currentCookies=_currentCookies - In the implementation block
+(id)sharedInstance;
-(id)cookiesForKey:(id)arg1 ;
-(void)purgeAllCookies;
-(void)purgeCookiesForKey:(id)arg1 ;
-(void)storeCookies:(id)arg1 forKey:(id)arg2 keepExistingCookies:(char)arg3 ;
-(id)cookiePropertiesForKey:(id)arg1 ;
-(id)allCookies;
-(NSDictionary *)currentCookies;
-(id)keyChainStore;
-(void)setCurrentCookies:(NSDictionary *)arg1 ;
-(void)saveCookieProperties:(id)arg1 forKey:(id)arg2 ;
-(void)saveCookieKeyMap:(id)arg1 ;
-(void)migrateCookiesFromKey:(id)arg1 toKey:(id)arg2 ;
@end

