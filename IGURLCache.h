
#import <CFNetwork/NSURLCache.h>

@class IGCache;

@interface IGURLCache : NSURLCache {

	/*^block*/id _cacheDeletionBlock;
	IGCache* _backingCache;

}

@property (nonatomic,copy) id cacheDeletionBlock;                 //@synthesize cacheDeletionBlock=_cacheDeletionBlock - In the implementation block
@property (nonatomic,retain) IGCache * backingCache;              //@synthesize backingCache=_backingCache - In the implementation block
+(char)containsCachedResponseForURL:(id)arg1 ;
+(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
+(id)cachedResponseForURL:(id)arg1 ;
+(id)cacheKeyForURL:(id)arg1 ;
+(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 memoryCapacity:(unsigned)arg2 diskCapacity:(unsigned)arg3 maxObjectCount:(unsigned)arg4 ;
-(void)setCacheDeletionBlock:(id)arg1 ;
-(char)containsCachedResponseForURL:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
-(id)cachedResponseForURL:(id)arg1 ;
-(void)removeCachedResponseForURL:(id)arg1 ;
-(IGCache *)backingCache;
-(id)cacheDeletionBlock;
-(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackingCache:(IGCache *)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(void)removeAllCachedResponses;
-(void)removeCachedResponseForRequest:(id)arg1 ;
@end

