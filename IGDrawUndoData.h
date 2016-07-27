

#import <Instagram/Instagram-Structs.h>
@interface IGDrawUndoData : NSObject {

	CGImageRef _layerCache;

}

@property (nonatomic,readonly) CGImageRef layerCache;              //@synthesize layerCache=_layerCache - In the implementation block
-(CGImageRef)layerCache;
-(void)dealloc;
-(id)initWithLayer:(CGContextRef)arg1 ;
@end

