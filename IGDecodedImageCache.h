

@protocol OS_dispatch_queue;
@class IGLRUCache, NSMapTable, NSObject;

@interface IGDecodedImageCache : NSObject {

	IGLRUCache* _cache;
	NSMapTable* _weakTrackingMapTable;
	NSObject*<OS_dispatch_queue> _mapTableAccessQueue;

}

@property (nonatomic,readonly) IGLRUCache * cache;                                          //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMapTable * weakTrackingMapTable;                           //@synthesize weakTrackingMapTable=_weakTrackingMapTable - In the implementation block
@property (nonatomic,retain) NSObject*<OS_dispatch_queue> mapTableAccessQueue;              //@synthesize mapTableAccessQueue=_mapTableAccessQueue - In the implementation block
+(int)defaultCostLimit;
+(id)sharedDecodedImageCache;
-(NSObject*<OS_dispatch_queue>)mapTableAccessQueue;
-(NSMapTable *)weakTrackingMapTable;
-(void)removeImageForURL:(id)arg1 ;
-(void)setMapTableAccessQueue:(NSObject*<OS_dispatch_queue>)arg1 ;
-(void)saveImage:(id)arg1 dataLength:(id)arg2 forURL:(id)arg3 ;
-(id)dataLengthForURL:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
-(id)init;
-(void)removeAllImages;
-(IGLRUCache *)cache;
-(void)setTotalCostLimit:(int)arg1 ;
@end

