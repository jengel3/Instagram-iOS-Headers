/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 13, 2015 at 10:20:06 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/095E6AAC-0201-41F1-901D-3BA0DA7A9B94/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <CFNetwork/NSURLCache.h>

@class IGCache;

@interface IGURLCache : NSURLCache {

	/*^block*/id _cacheDeletionBlock;
	IGCache* _backingCache;

}

@property (nonatomic,copy) id cacheDeletionBlock;                 //@synthesize cacheDeletionBlock=_cacheDeletionBlock - In the implementation block
@property (nonatomic,retain) IGCache * backingCache;              //@synthesize backingCache=_backingCache - In the implementation block
+(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
+(char)containsCachedResponseForURL:(id)arg1 ;
+(id)cachedResponseForURL:(id)arg1 ;
+(id)cacheKeyForURL:(id)arg1 ;
+(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(id)initWithName:(id)arg1 memoryCapacity:(unsigned)arg2 diskCapacity:(unsigned)arg3 maxObjectCount:(unsigned)arg4 ;
-(void)setCacheDeletionBlock:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forURL:(id)arg2 ;
-(char)containsCachedResponseForURL:(id)arg1 ;
-(id)cachedResponseForURL:(id)arg1 ;
-(void)removeCachedResponseForURL:(id)arg1 ;
-(IGCache *)backingCache;
-(id)cacheDeletionBlock;
-(void)cachedResponseForURL:(id)arg1 completion:(/*^block*/id)arg2 ;
-(void)setBackingCache:(IGCache *)arg1 ;
-(id)initWithMemoryCapacity:(unsigned)arg1 diskCapacity:(unsigned)arg2 diskPath:(id)arg3 ;
-(void)removeCachedResponseForRequest:(id)arg1 ;
-(id)cachedResponseForRequest:(id)arg1 ;
-(void)storeCachedResponse:(id)arg1 forRequest:(id)arg2 ;
-(void)removeAllCachedResponses;
@end

