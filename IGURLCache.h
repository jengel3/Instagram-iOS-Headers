
#import <CFNetwork/NSURLCache.h>

@class IGDiskCache, IGCache;

@interface IGURLCache : NSURLCache {

	/*^block*/id _cacheDeletionBlock;
	IGDiskCache* _dataCache;
	IGCache* _responseCache;

}

@property (nonatomic,copy) id cacheDeletionBlock;                    //@synthesize cacheDeletionBlock=_cacheDeletionBlock - In the implementation block
@property (nonatomic,readonly) IGDiskCache * dataCache;              //@synthesize dataCache=_dataCache - In the implementation block
@property (nonatomic,readonly) IGCache * responseCache;              //@synthesize responseCache=_responseCache - In the implementation block
+(id)cachedResponseForURL:(id)arg1 ;
+(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
+(id)cacheKeyForURL:(id)arg1 ;
+(char)containsCachedResponseForURL:(id)arg1 ;
+(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)cachedResponseForURL:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
-(void)removeCachedResponseForURL:(id)arg1 ;
-(id)cacheDeletionBlock;
-(IGCache *)responseCache;
-(char)containsCachedResponseForURL:(id)arg1 ;
-(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 memoryCapacity:(unsigned)arg2 diskCapacity:(unsigned)arg3 maxObjectCount:(unsigned)arg4 ;
-(void)setCacheDeletionBlock:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(void)removeAllCachedResponses;
-(IGDiskCache *)dataCache;
-(void)removeCachedResponseForRequest:(id)arg1 ;
@end

