
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIView.h>

@class IGSurface, IGRenderer;

@interface IGSurfaceView : UIView {

	IGSurface* _surface;
	IGRenderer* _renderer;

}

@property (nonatomic,retain) IGRenderer * renderer;              //@synthesize renderer=_renderer - In the implementation block
@property (nonatomic,readonly) IGSurface * surface; 
+(Class)layerClass;
-(void)setRenderer:(IGRenderer *)arg1 ;
-(id)initWithFrame:(CGRect)arg1 ;
-(id)initWithCoder:(id)arg1 ;
-(id)init;
-(IGSurface *)surface;
-(IGRenderer *)renderer;
@end

