/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, October 6, 2015 at 9:46:17 PM Central Daylight Time
* Operating System: Version 8.4 (Build 12H143)
* Image Source: /var/mobile/Containers/Bundle/Application/E660306A-8A68-4027-9100-A800454451FF/Instagram.app/Instagram
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Instagram/Instagram-Structs.h>
#import <Instagram/POPPropertyAnimation.h>

@interface POPDecayAnimation : POPPropertyAnimation

@property (nonatomic,copy) id velocity; 
@property (nonatomic,copy,readonly) id originalVelocity; 
@property (assign,nonatomic) float deceleration; 
@property (nonatomic,readonly) double duration; 
+(id)animationWithPropertyNamed:(id)arg1 ;
+(id)animation;
-(void)_initState;
-(void)_appendDescription:(id)arg1 debug:(char)arg2 ;
-(id)reversedVelocity;
-(id)originalVelocity;
-(void)_ensureComputedProperties;
-(void)_invalidateComputedProperties;
-(id)init;
-(void)setVelocity:(id)arg1 ;
-(double)duration;
-(id)copyWithZone:(NSZone*)arg1 ;
-(void)setFromValue:(id)arg1 ;
-(void)setToValue:(id)arg1 ;
-(id)toValue;
-(id)velocity;
-(float)deceleration;
-(void)setDeceleration:(float)arg1 ;
@end

