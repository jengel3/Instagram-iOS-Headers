
#import <Instagram/Instagram-Structs.h>
#import <UIKit/UIImageView.h>

@class RCTBridge, UIImage, RCTImageSource;

@interface RCTImageView : UIImageView {

	RCTBridge* _bridge;
	CGSize _targetSize;
	/*^block*/id _reloadImageCancellationBlock;
	UIImage* _defaultImage;
	int _renderingMode;
	RCTImageSource* _source;
	float _blurRadius;
	/*^block*/id _onLoadStart;
	/*^block*/id _onProgress;
	/*^block*/id _onError;
	/*^block*/id _onLoad;
	/*^block*/id _onLoadEnd;
	UIEdgeInsets _capInsets;

}

@property (nonatomic,copy) id onLoadStart;                         //@synthesize onLoadStart=_onLoadStart - In the implementation block
@property (nonatomic,copy) id onProgress;                          //@synthesize onProgress=_onProgress - In the implementation block
@property (nonatomic,copy) id onError;                             //@synthesize onError=_onError - In the implementation block
@property (nonatomic,copy) id onLoad;                              //@synthesize onLoad=_onLoad - In the implementation block
@property (nonatomic,copy) id onLoadEnd;                           //@synthesize onLoadEnd=_onLoadEnd - In the implementation block
@property (assign,nonatomic) UIEdgeInsets capInsets;               //@synthesize capInsets=_capInsets - In the implementation block
@property (nonatomic,retain) UIImage * defaultImage;               //@synthesize defaultImage=_defaultImage - In the implementation block
@property (assign,nonatomic) int renderingMode;                    //@synthesize renderingMode=_renderingMode - In the implementation block
@property (nonatomic,retain) RCTImageSource * source;              //@synthesize source=_source - In the implementation block
@property (assign,nonatomic) float blurRadius;                     //@synthesize blurRadius=_blurRadius - In the implementation block
-(void)cancelImageLoad;
-(id)initWithBridge:(id)arg1 ;
-(void)reactSetFrame:(CGRect)arg1 ;
-(void)clearImageIfDetached;
-(char)sourceNeedsReload;
-(void)clearImage;
-(void)setCapInsets:(UIEdgeInsets)arg1 ;
-(id)onLoadStart;
-(void)setOnLoadStart:(id)arg1 ;
-(id)onProgress;
-(void)setOnProgress:(id)arg1 ;
-(void)setOnLoad:(id)arg1 ;
-(id)onLoadEnd;
-(void)setOnLoadEnd:(id)arg1 ;
-(void)setImage:(id)arg1 ;
-(void)dealloc;
-(void)didMoveToWindow;
-(id)init;
-(void)setContentMode:(int)arg1 ;
-(void)setBlurRadius:(float)arg1 ;
-(UIEdgeInsets)capInsets;
-(int)renderingMode;
-(float)blurRadius;
-(RCTImageSource *)source;
-(void)setSource:(RCTImageSource *)arg1 ;
-(void)updateImage;
-(id)onError;
-(void)setOnError:(id)arg1 ;
-(void)setRenderingMode:(int)arg1 ;
-(UIImage *)defaultImage;
-(void)setDefaultImage:(UIImage *)arg1 ;
-(void)reloadImage;
-(id)onLoad;
@end

