
#import <CoreFoundation/NSCache.h>

@interface IGClusterTileImageCache : NSCache
+(id)sharedClusterTileImageCache;
-(id)imageForUrl:(id)arg1 ;
-(void)addImage:(id)arg1 forUrl:(id)arg2 ;
-(id)init;
-(void)clear;
@end

