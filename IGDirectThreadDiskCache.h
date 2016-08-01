

@class NSString;

@interface IGDirectThreadDiskCache : NSObject {

	NSString* _userSessionPK;
	NSString* _cacheBasePath;

}

@property (nonatomic,copy) NSString * userSessionPK;              //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,copy) NSString * cacheBasePath;              //@synthesize cacheBasePath=_cacheBasePath - In the implementation block
-(id)initWithUserSessionPK:(id)arg1 ;
-(NSString *)userSessionPK;
-(NSString *)cacheBasePath;
-(id)cachePathForThreadId:(id)arg1 ;
-(char)cacheThread:(id)arg1 withContentCount:(unsigned)arg2 ;
-(void)uncacheThreadWithID:(id)arg1 ;
-(id)cachedThreadWithId:(id)arg1 ;
-(id)allCachedThreads;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(void)setCacheBasePath:(NSString *)arg1 ;
-(void)clearCache;
@end

