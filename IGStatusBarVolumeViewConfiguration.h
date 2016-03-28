

@class UIColor, UIVisualEffect;

@interface IGStatusBarVolumeViewConfiguration : NSObject {

	UIColor* _trackTintColor;
	UIColor* _trackValueTintColor;
	UIColor* _backgroundColor;
	float _backgroundAlpha;
	UIVisualEffect* _backgroundEffect;
	float _volumeViewHeight;

}

@property (nonatomic,retain) UIColor * trackTintColor;                       //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackValueTintColor;                  //@synthesize trackValueTintColor=_trackValueTintColor - In the implementation block
@property (nonatomic,retain) UIColor * backgroundColor;                      //@synthesize backgroundColor=_backgroundColor - In the implementation block
@property (assign,nonatomic) float backgroundAlpha;                          //@synthesize backgroundAlpha=_backgroundAlpha - In the implementation block
@property (nonatomic,retain) UIVisualEffect * backgroundEffect;              //@synthesize backgroundEffect=_backgroundEffect - In the implementation block
@property (assign,nonatomic) float volumeViewHeight;                         //@synthesize volumeViewHeight=_volumeViewHeight - In the implementation block
+(id)darkBackground;
+(id)translucentBackground;
+(id)defaultConfiguration;
-(void)setTrackValueTintColor:(UIColor *)arg1 ;
-(void)setVolumeViewHeight:(float)arg1 ;
-(UIColor *)trackValueTintColor;
-(float)volumeViewHeight;
-(void)setBackgroundColor:(UIColor *)arg1 ;
-(UIColor *)backgroundColor;
-(id)init;
-(UIVisualEffect *)backgroundEffect;
-(void)setBackgroundEffect:(UIVisualEffect *)arg1 ;
-(UIColor *)trackTintColor;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(void)setBackgroundAlpha:(float)arg1 ;
-(float)backgroundAlpha;
@end

