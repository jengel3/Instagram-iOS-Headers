

@class IGLRUCache, NSMapTable;

@interface IGDecodedImageCache : NSObject {

	IGLRUCache* _cache;
	NSMapTable* _weakTrackingMapTable;

}

@property (nonatomic,readonly) IGLRUCache * cache;                             //@synthesize cache=_cache - In the implementation block
@property (nonatomic,readonly) NSMapTable * weakTrackingMapTable;              //@synthesize weakTrackingMapTable=_weakTrackingMapTable - In the implementation block
+(id)sharedDecodedImageCache;
+(int)defaultCostLimit;
-(void)saveImage:(id)arg1 dataLength:(id)arg2 forURL:(id)arg3 ;
-(void)removeImageForURL:(id)arg1 ;
-(NSMapTable *)weakTrackingMapTable;
-(id)dataLengthForURL:(id)arg1 ;
-(id)imageForURL:(id)arg1 ;
-(id)init;
-(void)removeAllImages;
-(IGLRUCache *)cache;
-(void)setTotalCostLimit:(int)arg1 ;
@end

