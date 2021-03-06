
#import <Instagram/Instagram-Structs.h>
#import <Instagram/IGImageFilter.h>

@class IGSurface;

@interface IGBasicAdjustFilter : IGImageFilter {

	char _sharpenDisabled;
	char _sharpenSurfaceDirty;
	char _shadowsSurfaceDirty;
	float _brightness;
	float _saturation;
	float _contrast;
	float _temperature;
	float _vignette;
	float _fade;
	float _highlights;
	float _shadows;
	float _sharpen;
	float _tintShadowsIntensity;
	float _tintHighlightsIntensity;
	IGSurface* _blurredSurface;
	IGSurface* _sharpenBlurSurface;
	GLKVector3 _tintShadowsColor;
	GLKVector3 _tintHighlightsColor;

}

@property (nonatomic,retain) IGSurface * blurredSurface;                   //@synthesize blurredSurface=_blurredSurface - In the implementation block
@property (nonatomic,retain) IGSurface * sharpenBlurSurface;               //@synthesize sharpenBlurSurface=_sharpenBlurSurface - In the implementation block
@property (assign,nonatomic) char sharpenSurfaceDirty;                     //@synthesize sharpenSurfaceDirty=_sharpenSurfaceDirty - In the implementation block
@property (assign,nonatomic) char shadowsSurfaceDirty;                     //@synthesize shadowsSurfaceDirty=_shadowsSurfaceDirty - In the implementation block
@property (assign,nonatomic) float brightness;                             //@synthesize brightness=_brightness - In the implementation block
@property (assign,nonatomic) float saturation;                             //@synthesize saturation=_saturation - In the implementation block
@property (assign,nonatomic) float contrast;                               //@synthesize contrast=_contrast - In the implementation block
@property (assign,nonatomic) float temperature;                            //@synthesize temperature=_temperature - In the implementation block
@property (assign,nonatomic) float vignette;                               //@synthesize vignette=_vignette - In the implementation block
@property (assign,nonatomic) float fade;                                   //@synthesize fade=_fade - In the implementation block
@property (assign,nonatomic) float highlights;                             //@synthesize highlights=_highlights - In the implementation block
@property (assign,nonatomic) float shadows;                                //@synthesize shadows=_shadows - In the implementation block
@property (assign,nonatomic) float sharpen;                                //@synthesize sharpen=_sharpen - In the implementation block
@property (assign,nonatomic) float tintShadowsIntensity;                   //@synthesize tintShadowsIntensity=_tintShadowsIntensity - In the implementation block
@property (assign,nonatomic) float tintHighlightsIntensity;                //@synthesize tintHighlightsIntensity=_tintHighlightsIntensity - In the implementation block
@property (assign,nonatomic) _GLKVector3 tintShadowsColor;                 //@synthesize tintShadowsColor=_tintShadowsColor - In the implementation block
@property (assign,nonatomic) _GLKVector3 tintHighlightsColor;              //@synthesize tintHighlightsColor=_tintHighlightsColor - In the implementation block
@property (assign,nonatomic) char sharpenDisabled;                         //@synthesize sharpenDisabled=_sharpenDisabled - In the implementation block
+(id)filterName;
+(int)filterType;
-(void)render:(id)arg1 to:(id)arg2 ;
-(char)hasAdjustedValues;
-(float)highlights;
-(float)vignette;
-(void)setHighlights:(float)arg1 ;
-(void)setShadows:(float)arg1 ;
-(void)setVignette:(float)arg1 ;
-(void)setFade:(float)arg1 ;
-(void)setSharpenDisabled:(char)arg1 ;
-(void)setTintShadowsColor:(_GLKVector3)arg1 ;
-(void)setTintHighlightsColor:(_GLKVector3)arg1 ;
-(void)setTintShadowsIntensity:(float)arg1 ;
-(void)setTintHighlightsIntensity:(float)arg1 ;
-(_GLKVector3)tintShadowsColor;
-(_GLKVector3)tintHighlightsColor;
-(float)tintShadowsIntensity;
-(float)tintHighlightsIntensity;
-(void)clearCachesNotOfSize:(CGSize)arg1 ;
-(void)configureProgram:(id)arg1 ;
-(IGSurface *)blurredSurface;
-(IGSurface *)sharpenBlurSurface;
-(void)dirtyInternalCaches;
-(char)sharpenDisabled;
-(void)setBlurredSurface:(IGSurface *)arg1 ;
-(void)setSharpenBlurSurface:(IGSurface *)arg1 ;
-(char)sharpenSurfaceDirty;
-(void)setSharpenSurfaceDirty:(char)arg1 ;
-(char)shadowsSurfaceDirty;
-(void)setShadowsSurfaceDirty:(char)arg1 ;
-(id)fragmentShaderPrecision;
-(id)fragmentFunctions;
-(float)saturation;
-(void)setSaturation:(float)arg1 ;
-(id)fragmentShader;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setContrast:(float)arg1 ;
-(float)fade;
-(void)setBrightness:(float)arg1 ;
-(float)brightness;
-(float)contrast;
-(float)shadows;
-(id)samplers;
-(float)sharpen;
-(void)setSharpen:(float)arg1 ;
-(float)temperature;
-(void)setTemperature:(float)arg1 ;
@end

