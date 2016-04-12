
#import <Instagram/Instagram-Structs.h>
#import <QuartzCore/CALayer.h>

@class UIColor;

@interface IGArcLayer : CALayer {

	float _trackThickness;
	UIColor* _progressTintColor;
	UIColor* _trackTintColor;

}

@property (assign,nonatomic) float trackThickness;                     //@synthesize trackThickness=_trackThickness - In the implementation block
@property (nonatomic,retain) UIColor * progressTintColor;              //@synthesize progressTintColor=_progressTintColor - In the implementation block
@property (nonatomic,retain) UIColor * trackTintColor;                 //@synthesize trackTintColor=_trackTintColor - In the implementation block
@property (assign,nonatomic) float progress; 
+(char)needsDisplayForKey:(id)arg1 ;
-(void)setTrackThickness:(float)arg1 ;
-(float)trackThickness;
-(UIColor *)trackTintColor;
-(UIColor *)progressTintColor;
-(void)setProgressTintColor:(UIColor *)arg1 ;
-(void)setTrackTintColor:(UIColor *)arg1 ;
-(id)initWithLayer:(id)arg1 ;
-(void)drawInContext:(CGContextRef)arg1 ;
@end

