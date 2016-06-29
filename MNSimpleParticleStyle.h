
#import <Instagram/MNParticleStyle.h>

@protocol MNDoubleSupplier;
@class NSArray;

@interface MNSimpleParticleStyle : NSObject <MNParticleStyle> {

	NSArray* _images;
	char _isVelocityYTerminal;
	id<MNDoubleSupplier> _velocityXSupplier;
	id<MNDoubleSupplier> _velocityYSupplier;
	id<MNDoubleSupplier> _gravitySupplier;
	id<MNDoubleSupplier> _rotationSupplier;
	id<MNDoubleSupplier> _rotationSpeedSupplier;
	id<MNDoubleSupplier> _scaleSupplier;
	id<MNDoubleSupplier> _animationProgressStartSupplier;
	double _animationDuration;

}

@property (nonatomic,retain) id<MNDoubleSupplier> velocityXSupplier;                           //@synthesize velocityXSupplier=_velocityXSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> velocityYSupplier;                           //@synthesize velocityYSupplier=_velocityYSupplier - In the implementation block
@property (assign,nonatomic) char isVelocityYTerminal;                                         //@synthesize isVelocityYTerminal=_isVelocityYTerminal - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> gravitySupplier;                             //@synthesize gravitySupplier=_gravitySupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> rotationSupplier;                            //@synthesize rotationSupplier=_rotationSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> rotationSpeedSupplier;                       //@synthesize rotationSpeedSupplier=_rotationSpeedSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> scaleSupplier;                               //@synthesize scaleSupplier=_scaleSupplier - In the implementation block
@property (nonatomic,retain) id<MNDoubleSupplier> animationProgressStartSupplier;              //@synthesize animationProgressStartSupplier=_animationProgressStartSupplier - In the implementation block
@property (assign,nonatomic) double animationDuration;                                         //@synthesize animationDuration=_animationDuration - In the implementation block
-(float)generateVelocityX;
-(float)generateVelocityY;
-(char)isVelocityYTerminal;
-(float)generateGravity;
-(float)generateRotationSpeed;
-(float)generateAnimationProgressStart;
-(float)generateScale;
-(float)generateRotation;
-(id)imageForAnimationProgress:(float)arg1 ;
-(id<MNDoubleSupplier>)velocityXSupplier;
-(void)setVelocityXSupplier:(id<MNDoubleSupplier>)arg1 ;
-(id<MNDoubleSupplier>)velocityYSupplier;
-(void)setVelocityYSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setIsVelocityYTerminal:(char)arg1 ;
-(id<MNDoubleSupplier>)gravitySupplier;
-(void)setGravitySupplier:(id<MNDoubleSupplier>)arg1 ;
-(id<MNDoubleSupplier>)rotationSupplier;
-(void)setRotationSupplier:(id<MNDoubleSupplier>)arg1 ;
-(id<MNDoubleSupplier>)rotationSpeedSupplier;
-(void)setRotationSpeedSupplier:(id<MNDoubleSupplier>)arg1 ;
-(id<MNDoubleSupplier>)scaleSupplier;
-(void)setScaleSupplier:(id<MNDoubleSupplier>)arg1 ;
-(id<MNDoubleSupplier>)animationProgressStartSupplier;
-(void)setAnimationProgressStartSupplier:(id<MNDoubleSupplier>)arg1 ;
-(void)setAnimationDuration:(double)arg1 ;
-(int)width;
-(int)height;
-(double)animationDuration;
-(id)initWithImages:(id)arg1 ;
@end

