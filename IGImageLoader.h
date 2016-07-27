

#import <Instagram/Instagram-Structs.h>
@class NSMapTable;

@interface IGImageLoader : NSObject {

	Mutex _cachedImagesLock;
	NSMapTable* _cachedImages;

}

@property (nonatomic,readonly) NSMapTable * cachedImages;              //@synthesize cachedImages=_cachedImages - In the implementation block
+(void)clearTintedImageCacheWithDeletionBlock:(/*^block*/id)arg1 ;
+(id)templateImageNamed:(id)arg1 ;
+(void)setTintedImageCacheEnabled:(char)arg1 ;
+(id)tintedImageWithName:(id)arg1 tintColor:(id)arg2 ;
+(id)tintedImageFromImage:(id)arg1 tintColor:(id)arg2 ;
+(id)optionalImageNamed:(id)arg1 ;
+(id)tintedImageCache;
+(id)imageNamed:(id)arg1 ;
+(id)sharedImageLoader;
-(id)optionalImageNamed:(id)arg1 ;
-(id)init;
-(NSMapTable *)cachedImages;
@end

