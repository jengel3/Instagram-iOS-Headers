
#import <CoreFoundation/NSCache.h>

@interface IGStyledStringCache : NSCache
+(id)sharedCache;
-(id)init;
@end

