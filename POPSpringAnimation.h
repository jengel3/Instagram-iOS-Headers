
#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (assign,nonatomic) float springBounciness; 
@property (assign,nonatomic) float springSpeed; 
@property (assign,nonatomic) float dynamicsTension; 
@property (assign,nonatomic) float dynamicsFriction; 
@property (assign,nonatomic) float dynamicsMass; 
+(id)animationWithPropertyNamed:(id)arg1 ;
+(void)convertTension:(float)arg1 friction:(float)arg2 toBounciness:(float*)arg3 speed:(float*)arg4 ;
+(void)convertBounciness:(float)arg1 speed:(float)arg2 toTension:(float*)arg3 friction:(float*)arg4 mass:(float*)arg5 ;
+(id)animation;
-(void)setDynamicsTension:(float)arg1 ;
-(void)setDynamicsFriction:(float)arg1 ;
-(void)setDynamicsMass:(float)arg1 ;
-(void)setSpringBounciness:(float)arg1 ;
-(void)setSpringSpeed:(float)arg1 ;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
-(void)_updatedDynamicsTension;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsMass;
-(float)dynamicsTension;
-(float)dynamicsFriction;
-(float)dynamicsMass;
-(float)springSpeed;
-(float)springBounciness;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)velocity;
@end

