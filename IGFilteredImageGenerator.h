

@class NSLock, IGRenderer;

@interface IGFilteredImageGenerator : NSObject {

	NSLock* _appBackgroundLock;
	IGRenderer* _renderer;

}

@property (nonatomic,retain) IGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
-(void)filteredImagesForImage:(id)arg1 filterClasses:(id)arg2 completion:(/*^block*/id)arg3 ;
-(void)applicationDidWillResignActive:(id)arg1 ;
-(id)filteredImageForImage:(id)arg1 filterClass:(Class)arg2 ;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(void)dealloc;
-(id)init;
-(void)applicationDidBecomeActive:(id)arg1 ;
-(IGRenderer *)renderer;
@end

