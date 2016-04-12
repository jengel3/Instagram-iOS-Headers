
#import <Instagram/RCTShadowView.h>
#import <Instagram/RCTImageComponent.h>

@class RCTBridge, UIImage, RCTImageSource, NSString;

@interface RCTShadowVirtualImage : RCTShadowView <RCTImageComponent> {

	RCTBridge* _bridge;
	/*^block*/id _cancellationBlock;
	UIImage* _image;
	RCTImageSource* _source;
	int _resizeMode;

}

@property (nonatomic,retain) RCTImageSource * source;               //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) int resizeMode;                        //@synthesize resizeMode=_resizeMode - In the implementation block
@property (readonly) unsigned hash; 
@property (readonly) Class superclass; 
@property (copy,readonly) NSString * description; 
@property (copy,readonly) NSString * debugDescription; 
@property (nonatomic,readonly) UIImage * image;                     //@synthesize image=_image - In the implementation block
-(id)initWithBridge:(id)arg1 ;
-(void)didSetProps:(id)arg1 ;
-(int)resizeMode;
-(void)dealloc;
-(id)init;
-(UIImage *)image;
-(RCTImageSource *)source;
-(void)setSource:(RCTImageSource *)arg1 ;
-(void)setResizeMode:(int)arg1 ;
@end

