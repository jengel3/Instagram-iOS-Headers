/*
* This header is generated by classdump-dyld 1.0
* on Friday, May 13, 2016 at 9:28:39 PM Central Daylight Time
* Operating System: Version 9.0.2 (Build 13A452)
* Image Source: /var/mobile/Containers/Bundle/Application/6C2D6691-0360-45BF-8623-49F0546803FE/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013-2016 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPPropertyAnimation.h>

@interface POPSpringAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (assign,nonatomic) float springBounciness; 
@property (assign,nonatomic) float springSpeed; 
@property (assign,nonatomic) float dynamicsTension; 
@property (assign,nonatomic) float dynamicsFriction; 
@property (assign,nonatomic) float dynamicsMass; 
+(void)convertTension:(float)arg1 friction:(float)arg2 toBounciness:(float*)arg3 speed:(float*)arg4 ;
+(id)animationWithPropertyNamed:(id)arg1 ;
+(void)convertBounciness:(float)arg1 speed:(float)arg2 toTension:(float*)arg3 friction:(float*)arg4 mass:(float*)arg5 ;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(SpringSolver<POP::Vector4<double> >*)solver;
-(void)setSolver:(SpringSolver<POP::Vector4<double> >*)arg1 ;
-(void)_updatedDynamicsTension;
-(void)_updatedDynamicsFriction;
-(void)_updatedDynamicsMass;
-(float)dynamicsTension;
-(void)setDynamicsTension:(float)arg1 ;
-(float)dynamicsFriction;
-(void)setDynamicsFriction:(float)arg1 ;
-(float)dynamicsMass;
-(void)setDynamicsMass:(float)arg1 ;
-(float)springSpeed;
-(void)setSpringSpeed:(float)arg1 ;
-(float)springBounciness;
-(void)setSpringBounciness:(float)arg1 ;
-(void)dealloc;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)velocity;
@end
