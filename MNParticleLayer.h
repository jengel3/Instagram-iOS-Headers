
#import <QuartzCore/CALayer.h>

@protocol MNParticleStyle;
@interface MNParticleLayer : CALayer {

	double _lastUpdateTime;
	double _minVelocityY;
	double _maxVelocityY;
	id<MNParticleStyle> _particleStyle;
	float _animationProgressSeed;
	float _velocityX;
	float _velocityY;
	float _rotationSpeed;
	float _gravity;
	double _birthTime;

}

@property (nonatomic,readonly) id<MNParticleStyle> particleStyle;              //@synthesize particleStyle=_particleStyle - In the implementation block
@property (assign,nonatomic) float animationProgressSeed;                      //@synthesize animationProgressSeed=_animationProgressSeed - In the implementation block
@property (assign,nonatomic) double birthTime;                                 //@synthesize birthTime=_birthTime - In the implementation block
@property (assign,nonatomic) float velocityX;                                  //@synthesize velocityX=_velocityX - In the implementation block
@property (assign,nonatomic) float velocityY;                                  //@synthesize velocityY=_velocityY - In the implementation block
@property (assign,nonatomic) float rotationSpeed;                              //@synthesize rotationSpeed=_rotationSpeed - In the implementation block
@property (assign,nonatomic) float gravity;                                    //@synthesize gravity=_gravity - In the implementation block
-(void)resetWithStyle:(id)arg1 ;
-(void)updateWithTime:(double)arg1 ;
-(id<MNParticleStyle>)particleStyle;
-(float)animationProgressSeed;
-(void)setAnimationProgressSeed:(float)arg1 ;
-(void)setBirthTime:(double)arg1 ;
-(float)velocityX;
-(void)setVelocityX:(float)arg1 ;
-(float)velocityY;
-(void)setVelocityY:(float)arg1 ;
-(float)rotationSpeed;
-(void)setRotationSpeed:(float)arg1 ;
-(id)initWithStyle:(id)arg1 ;
-(float)gravity;
-(void)setGravity:(float)arg1 ;
-(double)birthTime;
-(void)idle;
@end

