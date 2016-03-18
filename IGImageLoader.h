

#import <Instagram/Instagram-Structs.h>
@class NSMapTable;

@interface IGImageLoader : NSObject {

	Mutex _cachedImagesLock;
	NSMapTable* _cachedImages;

}

@property (nonatomic,readonly) NSMapTable * cachedImages;              //@synthesize cachedImages=_cachedImages - In the implementation block
+(id)templateImageNamed:(id)arg1 ;
+(id)imageNamed:(id)arg1 ;
+(id)sharedImageLoader;
-(id)optionalImageNamed:(id)arg1 ;
-(id)init;
-(NSMapTable *)cachedImages;
@end

