

@protocol MNParticleStyle
@required
-(float)generateVelocityX;
-(float)generateVelocityY;
-(char)isVelocityYTerminal;
-(float)generateGravity;
-(float)generateRotationSpeed;
-(float)generateAnimationProgressStart;
-(float)generateScale;
-(float)generateRotation;
-(id)imageForAnimationProgress:(float)arg1;
-(int)width;
-(int)height;
-(double)animationDuration;

@end

