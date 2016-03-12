

@class NSString;

@interface IGDirectThreadDiskCache : NSObject {

	NSString* _userSessionPK;
	NSString* _cacheBasePath;

}

@property (nonatomic,retain) NSString * userSessionPK;              //@synthesize userSessionPK=_userSessionPK - In the implementation block
@property (nonatomic,retain) NSString * cacheBasePath;              //@synthesize cacheBasePath=_cacheBasePath - In the implementation block
-(NSString *)userSessionPK;
-(void)setUserSessionPK:(NSString *)arg1 ;
-(NSString *)cacheBasePath;
-(id)cachePathForThreadId:(id)arg1 ;
-(id)cachedThreadWithId:(id)arg1 ;
-(id)initWithUserSessionPK:(id)arg1 ;
-(void)cacheThread:(id)arg1 withContentCount:(unsigned)arg2 ;
-(void)uncacheThreadWithID:(id)arg1 ;
-(id)mergeCachedThreadWithThread:(id)arg1 ;
-(id)allCachedThreads;
-(void)setCacheBasePath:(NSString *)arg1 ;
@end

